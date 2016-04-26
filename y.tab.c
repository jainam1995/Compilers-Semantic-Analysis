/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "final.y" /* yacc.c:339  */

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
 	

#line 162 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADDEQUALS = 258,
    MULEQUALS = 259,
    DIVEQUALS = 260,
    MODEQUALS = 261,
    ANDEQUALS = 262,
    XOREQUALS = 263,
    OREQUALS = 264,
    ANDOPERATOR = 265,
    OROPERATOR = 266,
    RIGHTOPERATOR = 267,
    LEFTOPERATOR = 268,
    INCOPERATOR = 269,
    DECOPERATOR = 270,
    PTROPERATOR = 271,
    LEOPERATOR = 272,
    GEOPERATOR = 273,
    EQOPERATOR = 274,
    IDENTIFIER = 275,
    DATATYPE = 276,
    NEOPERATOR = 277,
    FLOATING_POINT = 278,
    IF = 279,
    ELSE = 280,
    WHILE = 281,
    FOR = 282,
    DO = 283,
    BREAK = 284,
    CONTINUE = 285,
    RETURN = 286,
    SUBEQUALS = 287,
    INTEGER = 288,
    CHARACTER = 289,
    STRING = 290,
    READ = 291,
    WRITE = 292
  };
#endif
/* Tokens.  */
#define ADDEQUALS 258
#define MULEQUALS 259
#define DIVEQUALS 260
#define MODEQUALS 261
#define ANDEQUALS 262
#define XOREQUALS 263
#define OREQUALS 264
#define ANDOPERATOR 265
#define OROPERATOR 266
#define RIGHTOPERATOR 267
#define LEFTOPERATOR 268
#define INCOPERATOR 269
#define DECOPERATOR 270
#define PTROPERATOR 271
#define LEOPERATOR 272
#define GEOPERATOR 273
#define EQOPERATOR 274
#define IDENTIFIER 275
#define DATATYPE 276
#define NEOPERATOR 277
#define FLOATING_POINT 278
#define IF 279
#define ELSE 280
#define WHILE 281
#define FOR 282
#define DO 283
#define BREAK 284
#define CONTINUE 285
#define RETURN 286
#define SUBEQUALS 287
#define INTEGER 288
#define CHARACTER 289
#define STRING 290
#define READ 291
#define WRITE 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 287 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,     2,     2,    43,     2,     2,
      48,    49,    41,    39,    54,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
      44,    38,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    52,     2,    53,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   104,   104,   111,   116,   125,   132,   140,   147,   156,
     199,   199,   218,   216,   235,   233,   251,   256,   264,   272,
     282,   288,   294,   300,   306,   314,   318,   320,   324,   326,
     334,   345,   352,   361,   365,   377,   381,   405,   436,   436,
     452,   460,   472,   477,   500,   501,   502,   503,   504,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   518,
     519,   520,   521,   522,   524,   525,   526,   527,   529,   530,
     531,   534,   535,   537,   544,   546,   555,   566,   573,   581,
     588,   590,   591,   593,   594,   596,   597,   599,   600
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADDEQUALS", "MULEQUALS", "DIVEQUALS",
  "MODEQUALS", "ANDEQUALS", "XOREQUALS", "OREQUALS", "ANDOPERATOR",
  "OROPERATOR", "RIGHTOPERATOR", "LEFTOPERATOR", "INCOPERATOR",
  "DECOPERATOR", "PTROPERATOR", "LEOPERATOR", "GEOPERATOR", "EQOPERATOR",
  "IDENTIFIER", "DATATYPE", "NEOPERATOR", "FLOATING_POINT", "IF", "ELSE",
  "WHILE", "FOR", "DO", "BREAK", "CONTINUE", "RETURN", "SUBEQUALS",
  "INTEGER", "CHARACTER", "STRING", "READ", "WRITE", "'='", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'<'", "'>'", "'!'", "';'", "'('", "')'", "'{'",
  "'}'", "'['", "']'", "','", "$accept", "startstart", "startstatement",
  "startofdeclaration", "listofdeclaration", "declaration",
  "definationoffunction", "$@1", "compoundstatements", "$@2", "@3",
  "listofstatements", "statement", "readstatement", "writestatement",
  "iterationstatement", "conditionalstatement", "the_expression", "$@4",
  "listofparameters", "listofarguments", "operator", "assignmentOPERATOR",
  "binaryOPERATOR", "relationalOPERATOR", "logicalOPERATOR", "semicolon",
  "datatype", "id", "character", "number", "leftparenthesis",
  "rightparenthesis", "leftbrace", "rightbrace", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    61,    43,
      45,    42,    47,    37,    60,    62,    33,    59,    40,    41,
     123,   125,    91,    93,    44
};
# endif

#define YYPACT_NINF -56

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-56)))

#define YYTABLE_NINF -43

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      16,   -56,   -56,    18,   -56,    16,   -56,   -56,     6,   -56,
     -56,   -56,   -56,    27,   -56,   -56,    28,   -56,   -56,   -56,
       2,    23,     6,   -56,   -56,    14,   -56,   -56,   -56,   -56,
       1,    20,    88,   -56,   -56,   -56,    33,   -56,    28,    28,
      28,   -56,   -56,     6,     6,   -56,    67,   -56,    20,    88,
     -56,   -56,   -56,   -56,    30,     6,   146,   -56,   195,     7,
       7,     7,    30,    30,   -56,   -56,   -56,   -56,    30,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,    28,     7,   -56,   -56,   -56,   -56,     7,   -56,
      23,    23,    30,   -56,   -56,    24,   -56,   -56,   109,   109,
       7,    23,   -56,    -6,   -56,    30,   -56,   109,     7,   -56,
      23,   109,   -56
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    74,    73,     0,     2,     0,     6,     5,     0,     1,
       4,    76,    75,     0,    72,    71,     0,     9,    82,    81,
       0,     0,     0,    84,    83,     0,    43,    86,    85,    11,
      14,     0,     0,    88,    87,    13,    76,    79,     0,     0,
       0,    78,    77,     0,     0,    20,     0,    21,     0,     0,
      18,    19,    23,    22,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     8,    15,    17,    24,     0,    48,
      54,    50,    52,    53,    56,    57,    58,    69,    70,    66,
      67,    51,    55,    49,    59,    60,    61,    62,    63,    64,
      65,    68,     0,     0,    44,    47,    45,    46,     0,    76,
       0,     0,     0,    25,    27,     0,    37,    36,     0,     0,
       0,     0,    41,    31,    29,     0,    39,     0,     0,    32,
       0,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -56,   -56,    15,   -56,   -24,    45,   -56,   -56,     8,   -56,
     -56,   -17,    59,   -56,   -56,   -56,   -56,   -55,   -56,   -56,
     -56,   -19,   -56,   -56,   -56,   -56,   -53,   161,    -8,   -56,
     -56,   -27,   -15,   -56,    -2
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    45,    46,     7,    16,    47,    31,
      32,    48,    49,    50,    51,    52,    53,    54,    92,   111,
      21,    93,    94,    95,    96,    97,    17,    55,    56,    57,
      58,    20,    25,    30,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      13,    67,   -12,     1,   100,   101,   102,    11,    99,   103,
     104,    59,    60,    61,    26,    27,    -3,     1,     9,   117,
      10,    33,    64,     2,    23,    11,    12,    12,    14,    18,
      37,    14,    66,    29,   -26,    62,    63,     2,   106,    98,
      41,    42,     0,   107,    12,     6,    65,    68,     0,   110,
       6,   -42,   -12,   -26,   -26,   115,   -26,   -26,   -26,   -26,
     -26,     0,   118,   120,    28,   105,   -26,   -26,     1,   -26,
     -26,    34,    24,   -40,    15,   -10,    19,    15,     0,     0,
       0,     0,     0,   -26,   -26,   108,   109,    -7,     2,    36,
      -7,    -7,    -7,    -7,    -7,     0,   116,   112,     0,     0,
      -7,    -7,     0,    -7,    -7,   121,     0,     0,    12,     2,
      36,    37,    38,     0,    39,    40,     0,    -7,    -7,     0,
       0,    41,    42,     0,    43,    44,     0,     0,     0,    12,
       2,     0,    37,    38,     0,    39,    40,     0,    28,   -16,
       0,     0,    41,    42,     0,    43,    44,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    78,     0,    28,
       0,     8,     0,    79,    80,    81,     8,   113,   114,     0,
       0,     0,     0,     0,     0,     0,   119,     0,    82,     0,
     122,    22,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,   -34,   -38,   -34,    69,     0,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,   -33,     0,   -33
};

static const yytype_int8 yycheck[] =
{
       8,    54,     1,     1,    59,    60,    61,     1,     1,    62,
      63,    38,    39,    40,    22,     1,     0,     1,     0,    25,
       5,     1,    46,    21,     1,     1,    20,    20,     1,     1,
      23,     1,    49,    25,     1,    43,    44,    21,    93,    58,
      33,    34,    -1,    98,    20,     0,    48,    55,    -1,   102,
       5,    49,    51,    20,    21,   110,    23,    24,    25,    26,
      27,    -1,   115,   118,    50,    92,    33,    34,     1,    36,
      37,    51,    49,    49,    47,    48,    48,    47,    -1,    -1,
      -1,    -1,    -1,    50,    51,   100,   101,    20,    21,     1,
      23,    24,    25,    26,    27,    -1,   111,   105,    -1,    -1,
      33,    34,    -1,    36,    37,   120,    -1,    -1,    20,    21,
       1,    23,    24,    -1,    26,    27,    -1,    50,    51,    -1,
      -1,    33,    34,    -1,    36,    37,    -1,    -1,    -1,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    50,    51,
      -1,    -1,    33,    34,    -1,    36,    37,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    50,
      -1,     0,    -1,    17,    18,    19,     5,   108,   109,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    32,    -1,
     121,    20,    -1,    -1,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    21,    56,    57,    58,    60,    61,    82,     0,
      57,     1,    20,    83,     1,    47,    62,    81,     1,    48,
      86,    75,    82,     1,    49,    87,    83,     1,    50,    63,
      88,    64,    65,     1,    51,    89,     1,    23,    24,    26,
      27,    33,    34,    36,    37,    59,    60,    63,    66,    67,
      68,    69,    70,    71,    72,    82,    83,    84,    85,    86,
      86,    86,    83,    83,    59,    89,    66,    81,    83,     1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    17,
      18,    19,    32,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    73,    76,    77,    78,    79,    80,    76,     1,
      72,    72,    72,    81,    81,    86,    72,    72,    87,    87,
      81,    74,    83,    67,    67,    72,    87,    25,    81,    67,
      72,    87,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    60,
      62,    61,    64,    63,    65,    63,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    69,    69,    70,
      70,    71,    71,    72,    72,    72,    72,    72,    73,    72,
      74,    74,    75,    75,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     2,     3,
       0,     7,     0,     3,     0,     4,     0,     2,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     3,     1,     5,
       9,     5,     7,     1,     1,     1,     3,     3,     0,     5,
       0,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 104 "final.y" /* yacc.c:1646  */
    {
												root = (yyvsp[0]).node;
												root->code = "startstart";
												
												//cout<<g;
											}
#line 1495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 111 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code="epsilon";
																(yyval).node = temp;
													}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 116 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "startstatement";
																(temp->v).push_back((yyvsp[-1]).node);
																(temp->v).push_back((yyvsp[0]).node);
																(yyval).node = temp;
																//cout<<"dgf1";
															}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 125 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "startofdeclaration";
																(temp->v).push_back((yyvsp[0]).node);
																(yyval).node = temp;
																//cout<<"df2";
															}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 132 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "startofdeclaration";
																(temp->v).push_back((yyvsp[0]).node);
																(yyval).node = temp;	
															}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 140 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "listofdeclaration";
																(temp->v).push_back((yyvsp[0]).node);
																(yyval).node = temp;

															}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 147 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "listofdeclaration";
																(temp->v).push_back((yyvsp[-1]).node);
																(temp->v).push_back((yyvsp[0]).node);
																(yyval).node = temp;
															}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 156 "final.y" /* yacc.c:1646  */
    {int flag=1;//cout<<"enter declaration \n\n";
																element* temp = new element;
																temp->code = "declaration";
																(temp->v).push_back((yyvsp[-2]).node);
																(temp->v).push_back((yyvsp[-1]).node);
																map<string,string> y;//cout<<"---- "<<scope<<" "<<g<<" --- \n";
																//cout<<symtab[g].size()<<"\n";
																if(scope==1)
																{map<string,string>::iterator tt=params.find(g);

																if(tt!=params.end()){
																map<string,string >::iterator pp=(lparams[g]).find(((yyvsp[-1]).node)->id);
																if(pp!=(lparams[g]).end())
																	{cout << "Already declared " << ((yyvsp[-1]).node)->id << "as a parameter at line no. " << lnumber << endl;
																flag=0;}}
																}
																if(symtab[g].size()<=scope )
																{int p=symtab[g].size();
																	for(int h=0;h<=scope-p;h++){//cout<<scope-symtab[g].size()<<" ";
																		symtab[g].push_back(y);}
															//cout<<symtab[g].size()<<"\n";
															symtab[g][scope][((yyvsp[-1]).node)->id] = ((yyvsp[-2]).node)->id;
																	//cout<<"Hello1\n";
																	symprint();
																	cout<<"\n";
																	symtab[g][scope][((yyvsp[-1]).node)->id] = ((yyvsp[-2]).node)->id;
																	}
																else {if(symtab[g][scope].find(((yyvsp[-1]).node)->id)!=symtab[g][scope].end())
																{cout << "Already declared " << ((yyvsp[-1]).node)->id << " at line no. " << lnumber << endl;
																}

								
																 else if(flag==1) 
																{//cout<<($2.node)->id<<"d----d"<<($1.node)->id<<"\n";
																	symtab[g][scope][((yyvsp[-1]).node)->id] = ((yyvsp[-2]).node)->id;
																	//cout<<"Hello2\n";
																	symprint();
																	cout<<"\n";
																}
																(yyval).node = temp;
															}
															}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 199 "final.y" /* yacc.c:1646  */
    {g=((yyvsp[0]).node)->id;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "definationoffunction";
																//cout<<($2.node)->id<<"ddddd\n";
																g="global";
																
																(temp->v).push_back((yyvsp[-6]).node);
																(temp->v).push_back((yyvsp[-5]).node);
																(temp->v).push_back((yyvsp[-3]).node);
																(temp->v).push_back((yyvsp[-1]).node);
																(yyval).node = temp;
															}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 218 "final.y" /* yacc.c:1646  */
    {
													//map<string,string>	t;
													//symtab[g].push_back(t);
													scope++;
												}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 224 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "compoundstatement";
																(yyval).node = temp;
																if(!symtab[g].empty()&&g!="global")
																symtab[g].pop_back();
																	scope--;
																
															}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 235 "final.y" /* yacc.c:1646  */
    {
													//map<string,string>	t;
													//symtab[g].push_back(t);
													scope++;
												}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "compoundsatement";
													(temp->v).push_back((yyvsp[-2]).node);
													(yyval).node = temp;
													if(!symtab[g].empty()&&g!="global")
													symtab[g].pop_back();
																	scope--;
														
															}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 251 "final.y" /* yacc.c:1646  */
    {
															element* temp = new element;
															temp->code="epsilon";
															(yyval).node = temp;	
															}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 256 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "listofstatements";
													(temp->v).push_back((yyvsp[-1]).node);
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;	
												}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 264 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;
	

											}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 272 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;




										}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 282 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;
												}
#line 1745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 288 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;
												}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 294 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;
												}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 300 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;
												}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 306 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "statement";
													(temp->v).push_back((yyvsp[-1]).node);
													(yyval).node = temp;
												}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 314 "final.y" /* yacc.c:1646  */
    {element* temp = new element;
													temp->code = "readstatement";
													(temp->v).push_back((yyvsp[-1]).node);
													(yyval).node = temp;}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 318 "final.y" /* yacc.c:1646  */
    {printf(" Wrong read syntax at line  %d\n",lnumber);}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 320 "final.y" /* yacc.c:1646  */
    {element* temp = new element;
													temp->code = "writestatement";
													(temp->v).push_back((yyvsp[-1]).node);
													(yyval).node = temp;}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 324 "final.y" /* yacc.c:1646  */
    {printf(" Wrong write syntax at line  %d\n",lnumber);}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 326 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "whilestatement";
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;								
												}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 334 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "forstatement";
													(temp->v).push_back((yyvsp[-6]).node);
													(temp->v).push_back((yyvsp[-4]).node);
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;								
												}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 345 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "ifstatement";
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;								
												}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 352 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													temp->code = "ifthenelsestatement";
													(temp->v).push_back((yyvsp[-4]).node);
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													(yyval).node = temp;								
												}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 361 "final.y" /* yacc.c:1646  */
    {
													(yyval).node = (yyvsp[0]).node;
													((yyval).node)->typeofdata="int";
												}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 365 "final.y" /* yacc.c:1646  */
    {						int fsc = scopefinding(((yyvsp[0]).node)->id);
													if(fsc == -1)
													{
														
														cout << "Variable not declared " << ((yyvsp[0]).node)->id << " line no. " << lnumber << endl;	
													}
													else
													{
														((yyval).node)->typeofdata = symtab[g][fsc][((yyvsp[0]).node)->id];
													} 
													(yyval).node = (yyvsp[0]).node;
												}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 377 "final.y" /* yacc.c:1646  */
    {
													(yyval).node = (yyvsp[0]).node;
													((yyval).node)->typeofdata="char";
												}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 381 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													if((yyvsp[-1]).s == NULL)
														temp->code = "" ;
													else{
														temp->code = string((yyvsp[-1]).s);
													}
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													if(((yyvsp[-2]).node)->typeofdata!= ((yyvsp[0]).node)->typeofdata)
													{	
														if(coersion(((yyvsp[-2]).node)->typeofdata,((yyvsp[0]).node)->typeofdata))
														{
														
														printf("Datatypes dont match at %d\n",lnumber);
														}

													}
													else
													{
														temp->typeofdata = ((yyvsp[0]).node)->typeofdata;
													}
													(yyval).node = temp;
												}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 405 "final.y" /* yacc.c:1646  */
    {
													element* temp = new element;
													if((yyvsp[-1]).s == NULL)
														temp->code = "" ;
													else{
														temp->code = string((yyvsp[-1]).s);
													}
													(temp->v).push_back((yyvsp[-2]).node);
													(temp->v).push_back((yyvsp[0]).node);
													int fsc = scopefinding(((yyvsp[-2]).node)->id);
													
													if(fsc == -1)
													{
														
														cout << "Variable not declared " << ((yyvsp[-2]).node)->id << " line no. " << lnumber << endl;	
													}
													else if(symtab[g][fsc][((yyvsp[-2]).node)->id] != ((yyvsp[0]).node)->typeofdata)
													{
														if(coersion(symtab[g][fsc][((yyvsp[-2]).node)->id],((yyvsp[0]).node)->typeofdata))
														{

														
														printf("Datatypes do not match at %d\n",lnumber);
														}
													}
													else
													{
														temp->typeofdata = ((yyvsp[0]).node)->typeofdata;
													}
													(yyval).node = temp;
												}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 436 "final.y" /* yacc.c:1646  */
    {callfunction=((yyvsp[0]).node)->id;}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 436 "final.y" /* yacc.c:1646  */
    {
													map<string,vector< map<string,string> > >::iterator yy=symtab.find(((yyvsp[-4]).node)->id);
													if(yy==symtab.end())
														cout<<"Function "<<((yyvsp[-4]).node)->id<<" not defined. \n";

													element* temp = new element;
													temp->code = "calltofunction";
													if((yyvsp[-4]).s == NULL)
														temp->code = "" ;
													else{
														temp->id = string((yyvsp[-4]).s);
													}
													(yyval).node = temp;
													//cout<<"*****\n";symprint();cout<<"\n";
												}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 452 "final.y" /* yacc.c:1646  */
    {
															element* temp = new element;
															temp->code="epsilon";
															(yyval).node = temp;	
															map<string, string>:: iterator it=params.find(callfunction);
															if(it!=params.end())
															cout<<"Number of Parameters do not match at "<<lnumber<<".\n";
															}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 460 "final.y" /* yacc.c:1646  */
    {(yyval).node=(yyvsp[0]).node;int fsc = scopefinding(((yyvsp[0]).node)->id);
							if(fsc==-1)
								{cout<<"\n"; cout<<"Identifier not declared at "<<lnumber<< ".\n";}
							else{
							map<string, string>:: iterator it=params.find(callfunction);
							if(it==params.end())
								cout<<"Number of Parameters do not match at "<<lnumber<< ".\n";
							string type=symtab[g][fsc][((yyvsp[0]).node)->id];
							string paratype=params[callfunction];//cout << type<<" "<<" ---"<<paratype<<"\n";
							if(coersion(paratype,type))printf("Datatypes do not match at %d\n",lnumber);}}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 472 "final.y" /* yacc.c:1646  */
    {
															element* temp = new element;
															temp->code="epsilon";
															(yyval).node = temp;	
															}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 477 "final.y" /* yacc.c:1646  */
    {
																element* temp = new element;
																temp->code = "arguments";
																(temp->v).push_back((yyvsp[-1]).node);
																(temp->v).push_back((yyvsp[0]).node);
																



																params[g]=((yyvsp[-1]).node)->id;
																lparams[g][((yyvsp[0]).node)->id]=((yyvsp[-1]).node)->id;
																cout<<"Parameters\n";
																cout << ((yyvsp[0]).node)->id<<" "<<((yyvsp[-1]).node)->id<<"\n";
																

								
																(yyval).node = temp;
															}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 500 "final.y" /* yacc.c:1646  */
    {(yyval).s = (yyvsp[0]).s;}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 501 "final.y" /* yacc.c:1646  */
    {(yyval).s = (yyvsp[0]).s;}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 502 "final.y" /* yacc.c:1646  */
    {(yyval).s = (yyvsp[0]).s;}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 503 "final.y" /* yacc.c:1646  */
    {(yyval).s = (yyvsp[0]).s;}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 504 "final.y" /* yacc.c:1646  */
    {printf(" operator at line  %d\n",lnumber);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 507 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("=");}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 508 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("*=");}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 509 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("==");}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 510 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("/=");}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 511 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("%=");}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 512 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("+=");}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 513 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("-=");}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 514 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("&=");}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 515 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("^=");}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 516 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("|=");}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 518 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("+");}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 519 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("-");}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 520 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("*");}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 521 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("/");}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 522 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("%");}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 524 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("<");}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 525 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup(">");}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 526 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("<=");}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 527 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup(">=");}
#line 2201 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 529 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("!");}
#line 2207 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 530 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("&&");}
#line 2213 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 531 "final.y" /* yacc.c:1646  */
    {(yyval).s = strdup("||");}
#line 2219 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 535 "final.y" /* yacc.c:1646  */
    {printf(" Semicolon is missing at line  %d\n",lnumber);}
#line 2225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 537 "final.y" /* yacc.c:1646  */
    {
										element* temp = new element;
										temp->code = string(yytext,yyleng);
										temp->id = string(yytext,yyleng);	
										(yyval).node = temp;
										//cout<<"fg";
									}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 544 "final.y" /* yacc.c:1646  */
    {printf(" Data type missing at line  %d\n",lnumber);}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 546 "final.y" /* yacc.c:1646  */
    {
										element* temp = new element;
										temp->code =string(yytext,yyleng);;
										temp->id = string(yytext,yyleng);
										
										(yyval).node = temp;
										//cout<<"dfg";
									}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 555 "final.y" /* yacc.c:1646  */
    {printf(" Identifier missing at line  %d\n",lnumber);}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 566 "final.y" /* yacc.c:1646  */
    {
								element* temp = new element;
										temp->code = CHARACTER;
										temp->typeofdata = "char";
										temp->id = string(yytext,yyleng);
										(yyval).node = temp;
								}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 573 "final.y" /* yacc.c:1646  */
    {
										element* temp = new element;
										temp->code =  string(yytext,yyleng);										

										temp->typeofdata="int";
										temp->id = string(yytext,yyleng);
										(yyval).node = temp;
									}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 581 "final.y" /* yacc.c:1646  */
    {
										element* temp = new element;
										temp->code = "float";
										temp->typeofdata = "float";
										temp->id = string(yytext,yyleng);
										(yyval).node = temp;
									}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 588 "final.y" /* yacc.c:1646  */
    {printf(" Number missing at line  %d\n",lnumber);}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 591 "final.y" /* yacc.c:1646  */
    {printf(" ( missing at line  %d\n",lnumber);}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 594 "final.y" /* yacc.c:1646  */
    {printf(" ) missing at line  %d\n",lnumber);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 597 "final.y" /* yacc.c:1646  */
    {printf(" { missing at line  %d\n",lnumber);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 600 "final.y" /* yacc.c:1646  */
    {printf(" } missing at line  %d\n",lnumber);}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2333 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 611 "final.y" /* yacc.c:1906  */

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
