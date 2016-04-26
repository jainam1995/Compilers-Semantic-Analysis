%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include "iostream"
	#include <vector>
	#include <string>
	#include "sstream"
	#include <map>
	#include <vector>
	#include <string.h>
	#include <bits/stdc++.h>
	using namespace std;
	string h="global";
	int yylex(void);
	void yyerror (char const *s) {
   		fprintf (stderr, "%s\n", s);
 	}
 	
 	extern int	yylex();
 	extern int lnumber;
 	extern char* yytext;
 	extern int yyleng;
 	//string g="global";
 	string g;
 	//char test[100];
 	//for( int u=0;u<g.size();u++)
 	//	test[u]=g[u];
 	//test[u]='\0';
 	struct element
 	{
 		string code;
 		vector<element*> v;
 		string id;
 		string typeofdata;
 		
 	};
 	element* root;
 	union deftype
	{
		element* node;
		char* s;
	};
	#define YYSTYPE deftype
	int scope=0;

	map<string,vector< map<string,string> > > symtab;
	map<string,string> params;
	map<string, map<string,string> > lparams;
	string callfunction;
//struct stringstruct {string global2;};
 //stringstruct* ss=new stringstruct;


	//if(symtab[g][scope].find(($2.node)->id)==symtab[scope].end())
	//symtab[scope][($2.node)->id] = ($1.node)->id;

	




	int scopefinding(string id)
	{
		for(int i=scope;i>=0;i--)
		{
			if(symtab[g][i].find(id) != symtab[g][i].end())	return i;
		}
		return -1;
	}
	
	int coersion(string a,string b)
	{
	//cout << a << " --- " << b << endl;
	if((a=="int"||a=="char")&&(b=="int"||b=="char"))
	{
		return 0;
	}
	else if((a=="int"||a=="float")&&(b=="int"||b=="float"))
	{
		return 0;
	}
	return 1;
	}
	void symprint(){cout<<"The Symbol Table till now is :- \n";int p;if(g=="global"){p=0;}else p=1;
	for(int i = p ; i< symtab[g].size(); i++ ){
		cout<<"Scope from "<<g<<" "<<i<<endl;
		for ( map<string,string>::iterator it = symtab[g][i].begin() ; it!= symtab[g][i].end() ; it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
	}
}
 	
%}
%token ADDEQUALS MULEQUALS DIVEQUALS MODEQUALS ANDEQUALS XOREQUALS OREQUALS ANDOPERATOR OROPERATOR 
%token RIGHTOPERATOR LEFTOPERATOR INCOPERATOR DECOPERATOR PTROPERATOR  LEOPERATOR GEOPERATOR EQOPERATOR 
%token IDENTIFIER DATATYPE NEOPERATOR FLOATING_POINT 
%token IF ELSE WHILE FOR DO BREAK 
%token CONTINUE RETURN SUBEQUALS  INTEGER 
%token CHARACTER STRING READ WRITE
 
%%
startstart:				startstatement		{
												root = $1.node;
												root->code = "startstart";
												
												//cout<<g;
											}

startstatement:  					/*no_production*/		{
																element* temp = new element;
																temp->code="epsilon";
																$$.node = temp;
													}
						|startofdeclaration startstatement {
																element* temp = new element;
																temp->code = "startstatement";
																(temp->v).push_back($1.node);
																(temp->v).push_back($2.node);
																$$.node = temp;
																//cout<<"dgf1";
															}
						;
startofdeclaration: 	definationoffunction 				{
																element* temp = new element;
																temp->code = "startofdeclaration";
																(temp->v).push_back($1.node);
																$$.node = temp;
																//cout<<"df2";
															}
						| declaration					{
																element* temp = new element;
																temp->code = "startofdeclaration";
																(temp->v).push_back($1.node);
																$$.node = temp;	
															}
						;

listofdeclaration: 		declaration 						{
																element* temp = new element;
																temp->code = "listofdeclaration";
																(temp->v).push_back($1.node);
																$$.node = temp;

															}
						| declaration listofdeclaration		{
																element* temp = new element;
																temp->code = "listofdeclaration";
																(temp->v).push_back($1.node);
																(temp->v).push_back($2.node);
																$$.node = temp;
															}
						;

declaration: 			datatype id semicolon                {int flag=1;//cout<<"enter declaration \n\n";
																element* temp = new element;
																temp->code = "declaration";
																(temp->v).push_back($1.node);
																(temp->v).push_back($2.node);
																map<string,string> y;//cout<<"---- "<<scope<<" "<<g<<" --- \n";
																//cout<<symtab[g].size()<<"\n";
																if(scope==1)
																{map<string,string>::iterator tt=params.find(g);

																if(tt!=params.end()){
																map<string,string >::iterator pp=(lparams[g]).find(($2.node)->id);
																if(pp!=(lparams[g]).end())
																	{cout << "Already declared " << ($2.node)->id << "as a parameter at line no. " << lnumber << endl;
																flag=0;}}
																}
																if(symtab[g].size()<=scope )
																{int p=symtab[g].size();
																	for(int h=0;h<=scope-p;h++){//cout<<scope-symtab[g].size()<<" ";
																		symtab[g].push_back(y);}
															//cout<<symtab[g].size()<<"\n";
															symtab[g][scope][($2.node)->id] = ($1.node)->id;
																	//cout<<"Hello1\n";
																	symprint();
																	cout<<"\n";
																	symtab[g][scope][($2.node)->id] = ($1.node)->id;
																	}
																else {if(symtab[g][scope].find(($2.node)->id)!=symtab[g][scope].end())
																{cout << "Already declared " << ($2.node)->id << " at line no. " << lnumber << endl;
																}

								
																 else if(flag==1) 
																{//cout<<($2.node)->id<<"d----d"<<($1.node)->id<<"\n";
																	symtab[g][scope][($2.node)->id] = ($1.node)->id;
																	//cout<<"Hello2\n";
																	symprint();
																	cout<<"\n";
																}
																$$.node = temp;
															}
															}	
						;		
definationoffunction:	datatype id {g=($2.node)->id;}leftparenthesis listofarguments rightparenthesis compoundstatements {
																element* temp = new element;
																temp->code = "definationoffunction";
																//cout<<($2.node)->id<<"ddddd\n";
																g="global";
																
																(temp->v).push_back($1.node);
																(temp->v).push_back($2.node);
																(temp->v).push_back($4.node);
																(temp->v).push_back($6.node);
																$$.node = temp;
															}
						;




compoundstatements:			leftbrace 

													{
													//map<string,string>	t;
													//symtab[g].push_back(t);
													scope++;
												}

							rightbrace 			{
																element* temp = new element;
																temp->code = "compoundstatement";
																$$.node = temp;
																if(!symtab[g].empty()&&g!="global")
																symtab[g].pop_back();
																	scope--;
																
															}
						| leftbrace

												{
													//map<string,string>	t;
													//symtab[g].push_back(t);
													scope++;
												}
						 listofstatements rightbrace{
													element* temp = new element;
													temp->code = "compoundsatement";
													(temp->v).push_back($2.node);
													$$.node = temp;
													if(!symtab[g].empty()&&g!="global")
													symtab[g].pop_back();
																	scope--;
														
															}
						;						
listofstatements:				/*no_production*/					{
															element* temp = new element;
															temp->code="epsilon";
															$$.node = temp;	
															}
						|statement listofstatements			{
													element* temp = new element;
													temp->code = "listofstatements";
													(temp->v).push_back($1.node);
													(temp->v).push_back($2.node);
													$$.node = temp;	
												}
						;	
statement:				readstatement     {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
	

											}
						| writestatement{
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;




										}	
						| listofdeclaration {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
												}
						| compoundstatements	{
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
												}
						| conditionalstatement	{
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
												}
						| iterationstatement	{
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
												}
						| the_expression semicolon {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back($1.node);
													$$.node = temp;
												}
						;					

readstatement :   READ id semicolon{element* temp = new element;
													temp->code = "readstatement";
													(temp->v).push_back($2.node);
													$$.node = temp;}
					|error  {printf(" Wrong read syntax at line  %d\n",lnumber);}
					;
writestatement :   WRITE id semicolon{element* temp = new element;
													temp->code = "writestatement";
													(temp->v).push_back($2.node);
													$$.node = temp;}
					|error  {printf(" Wrong write syntax at line  %d\n",lnumber);}
					;
iterationstatement:			WHILE leftparenthesis the_expression rightparenthesis statement {
													element* temp = new element;
													temp->code = "whilestatement";
													(temp->v).push_back($3.node);
													(temp->v).push_back($5.node);
													$$.node = temp;								
												}
						
						| FOR leftparenthesis the_expression semicolon the_expression semicolon the_expression rightparenthesis statement {
													element* temp = new element;
													temp->code = "forstatement";
													(temp->v).push_back($3.node);
													(temp->v).push_back($5.node);
													(temp->v).push_back($7.node);
													(temp->v).push_back($9.node);
													$$.node = temp;								
												}
						;

conditionalstatement:		IF leftparenthesis the_expression rightparenthesis statement {
													element* temp = new element;
													temp->code = "ifstatement";
													(temp->v).push_back($3.node);
													(temp->v).push_back($5.node);
													$$.node = temp;								
												}
						| IF leftparenthesis the_expression rightparenthesis statement ELSE statement {
													element* temp = new element;
													temp->code = "ifthenelsestatement";
													(temp->v).push_back($3.node);
													(temp->v).push_back($5.node);
													(temp->v).push_back($7.node);
													$$.node = temp;								
												}
						;						
the_expression:			number {
													$$.node = $1.node;
													($$.node)->typeofdata="int";
												}
						| id {						int fsc = scopefinding(($1.node)->id);
													if(fsc == -1)
													{
														
														cout << "Variable not declared " << ($1.node)->id << " line no. " << lnumber << endl;	
													}
													else
													{
														($$.node)->typeofdata = symtab[g][fsc][($1.node)->id];
													} 
													$$.node = $1.node;
												}
						|character				{
													$$.node = $1.node;
													($$.node)->typeofdata="char";
												}						
						| number operator the_expression {
													element* temp = new element;
													if($2.s == NULL)
														temp->code = "" ;
													else{
														temp->code = string($2.s);
													}
													(temp->v).push_back($1.node);
													(temp->v).push_back($3.node);
													if(($1.node)->typeofdata!= ($3.node)->typeofdata)
													{	
														if(coersion(($1.node)->typeofdata,($3.node)->typeofdata))
														{
														
														printf("Datatypes dont match at %d\n",lnumber);
														}

													}
													else
													{
														temp->typeofdata = ($3.node)->typeofdata;
													}
													$$.node = temp;
												}
						| id operator the_expression {
													element* temp = new element;
													if($2.s == NULL)
														temp->code = "" ;
													else{
														temp->code = string($2.s);
													}
													(temp->v).push_back($1.node);
													(temp->v).push_back($3.node);
													int fsc = scopefinding(($1.node)->id);
													
													if(fsc == -1)
													{
														
														cout << "Variable not declared " << ($1.node)->id << " line no. " << lnumber << endl;	
													}
													else if(symtab[g][fsc][($1.node)->id] != ($3.node)->typeofdata)
													{
														if(coersion(symtab[g][fsc][($1.node)->id],($3.node)->typeofdata))
														{

														
														printf("Datatypes do not match at %d\n",lnumber);
														}
													}
													else
													{
														temp->typeofdata = ($3.node)->typeofdata;
													}
													$$.node = temp;
												}
						| id {callfunction=($1.node)->id;}leftparenthesis listofparameters rightparenthesis {
													map<string,vector< map<string,string> > >::iterator yy=symtab.find(($1.node)->id);
													if(yy==symtab.end())
														cout<<"Function "<<($1.node)->id<<" not defined. \n";

													element* temp = new element;
													temp->code = "calltofunction";
													if($1.s == NULL)
														temp->code = "" ;
													else{
														temp->id = string($1.s);
													}
													$$.node = temp;
													//cout<<"*****\n";symprint();cout<<"\n";
												}
						;
listofparameters:				/* no_production */   {
															element* temp = new element;
															temp->code="epsilon";
															$$.node = temp;	
															map<string, string>:: iterator it=params.find(callfunction);
															if(it!=params.end())
															cout<<"Number of Parameters do not match at "<<lnumber<<".\n";
															}
						| id  {$$.node=$1.node;int fsc = scopefinding(($1.node)->id);
							if(fsc==-1)
								{cout<<"\n"; cout<<"Identifier not declared at "<<lnumber<< ".\n";}
							else{
							map<string, string>:: iterator it=params.find(callfunction);
							if(it==params.end())
								cout<<"Number of Parameters do not match at "<<lnumber<< ".\n";
							string type=symtab[g][fsc][($1.node)->id];
							string paratype=params[callfunction];//cout << type<<" "<<" ---"<<paratype<<"\n";
							if(coersion(paratype,type))printf("Datatypes do not match at %d\n",lnumber);}}
						
						;	
listofarguments:				/* no_production */  {
															element* temp = new element;
															temp->code="epsilon";
															$$.node = temp;	
															}
						| datatype id {
																element* temp = new element;
																temp->code = "arguments";
																(temp->v).push_back($1.node);
																(temp->v).push_back($2.node);
																



																params[g]=($1.node)->id;
																lparams[g][($2.node)->id]=($1.node)->id;
																cout<<"Parameters\n";
																cout << ($2.node)->id<<" "<<($1.node)->id<<"\n";
																

								
																$$.node = temp;
															}
															
																
						
						;

operator: 				assignmentOPERATOR {$$.s = $1.s;}
						| relationalOPERATOR {$$.s = $1.s;}
						| logicalOPERATOR {$$.s = $1.s;}
						| binaryOPERATOR {$$.s = $1.s;}
						| error			{printf(" operator at line  %d\n",lnumber);}			

						;				
assignmentOPERATOR:		 	'=' {$$.s = strdup("=");}
						| MULEQUALS {$$.s = strdup("*=");}
						| EQOPERATOR {$$.s = strdup("==");}
						| DIVEQUALS {$$.s = strdup("/=");}
						| MODEQUALS {$$.s = strdup("%=");}
						| ADDEQUALS {$$.s = strdup("+=");}
						| SUBEQUALS {$$.s = strdup("-=");}
						| ANDEQUALS {$$.s = strdup("&=");}
						| XOREQUALS {$$.s = strdup("^=");}
						| OREQUALS {$$.s = strdup("|=");}
						;
binaryOPERATOR:				'+' {$$.s = strdup("+");}
						| '-' {$$.s = strdup("-");}
						| '*' {$$.s = strdup("*");}
						| '/' {$$.s = strdup("/");}
						| '%' {$$.s = strdup("%");}
						;
relationalOPERATOR:			'<' {$$.s = strdup("<");}
						| '>' {$$.s = strdup(">");}
						| LEOPERATOR {$$.s = strdup("<=");}
						| GEOPERATOR {$$.s = strdup(">=");}
						;
logicalOPERATOR:				'!' {$$.s = strdup("!");}
						| ANDOPERATOR {$$.s = strdup("&&");}
						| OROPERATOR {$$.s = strdup("||");}
						;

semicolon:					';'
						| error		{printf(" Semicolon is missing at line  %d\n",lnumber);}
						;
datatype:				DATATYPE {
										element* temp = new element;
										temp->code = string(yytext,yyleng);
										temp->id = string(yytext,yyleng);	
										$$.node = temp;
										//cout<<"fg";
									}
						| error		{printf(" Data type missing at line  %d\n",lnumber);}
						;
id:						IDENTIFIER{
										element* temp = new element;
										temp->code =string(yytext,yyleng);;
										temp->id = string(yytext,yyleng);
										
										$$.node = temp;
										//cout<<"dfg";
									}
						
						| error		{printf(" Identifier missing at line  %d\n",lnumber);}
						;
integer:				INTEGER    {
										element* temp = new element;
										temp->code = string(yytext,yyleng);
										temp->typeofdata = "int";
										temp->id = string(yytext,yyleng);
										$$.node = temp;
									}
						| error     {printf(" Integer missing at line  %d\n",lnumber);}
						;
character:              CHARACTER{
								element* temp = new element;
										temp->code = CHARACTER;
										temp->typeofdata = "char";
										temp->id = string(yytext,yyleng);
										$$.node = temp;
								}
number:					INTEGER    {
										element* temp = new element;
										temp->code =  string(yytext,yyleng);										

										temp->typeofdata="int";
										temp->id = string(yytext,yyleng);
										$$.node = temp;
									}
						| FLOATING_POINT  {
										element* temp = new element;
										temp->code = "float";
										temp->typeofdata = "float";
										temp->id = string(yytext,yyleng);
										$$.node = temp;
									}
						| error		{printf(" Number missing at line  %d\n",lnumber);}
						;
leftparenthesis:		'('
						| error 	{printf(" ( missing at line  %d\n",lnumber);}
						;
rightparenthesis:		')'
						| error 	{printf(" ) missing at line  %d\n",lnumber);}
						;
leftbrace:				'{'
						| error 	{printf(" { missing at line  %d\n",lnumber);}
						;
rightbrace:			'}'
						| error 	{printf(" } missing at line  %d\n",lnumber);}
						;
leftbracket:			'['
						| error 	{printf(" [ missing at line  %d\n",lnumber);}
						;
rightbracket:			']'
						| error 	{printf(" ] missing at line  %d\n",lnumber);}
						;
comma:					','
						| error 	{printf(" , missing at line  %d\n",lnumber);}
						;
%%
void spaceforabstractsyntaxtree(int n)
{
	for(int i=0;i<n;i++) cout<<". . ";
}
void abstractsyntaxtree(element *n,int count)
{
	spaceforabstractsyntaxtree(count);
	if(n==NULL){
		cout<<"NULL";
		return;
	}
	cout <<n->code<<endl;
	for (int i = 0; i < (n->v).size(); ++i)
	{
		abstractsyntaxtree((n->v)[i],count+1);
	}
}

int main(){
	//map<string,string> y;
	//symtab.push_back(y);
	//cout<<"jainam";
	
	g="global";
	
	yyparse();
	//abstractsyntaxtree(root,0);
	//cout<<root->code;
	return 0 ;
}
