# Compilers-Semantic-Analysis
---
###Semantic analysis done for a subset of C language

The following properties are checked during semantic analysis :  
* Type checking an coersion (between char & int , float & int).  
* Scoped values of variables within various functions.
* Parameter checking when calling functions (check wether the number and types  of parameters passed is as per the defination and the function is called only after its defination).

---


`lex rules.lex`
`yacc -d final.y`
` c++ lex.yy.c y.tab.c`
`./a.out < (test files)`

