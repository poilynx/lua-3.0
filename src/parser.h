/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int luaY_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum luaY_tokentype
  {
    WRONGTOKEN = 258,
    NIL = 259,
    IF = 260,
    THEN = 261,
    ELSE = 262,
    ELSEIF = 263,
    WHILE = 264,
    DO = 265,
    REPEAT = 266,
    UNTIL = 267,
    END = 268,
    RETURN = 269,
    LOCAL = 270,
    FUNCTION = 271,
    DOTS = 272,
    NUMBER = 273,
    STRING = 274,
    NAME = 275,
    AND = 276,
    OR = 277,
    EQ = 278,
    NE = 279,
    LE = 280,
    GE = 281,
    CONC = 282,
    UNARY = 283,
    NOT = 284
  };
#endif
/* Tokens.  */
#define WRONGTOKEN 258
#define NIL 259
#define IF 260
#define THEN 261
#define ELSE 262
#define ELSEIF 263
#define WHILE 264
#define DO 265
#define REPEAT 266
#define UNTIL 267
#define END 268
#define RETURN 269
#define LOCAL 270
#define FUNCTION 271
#define DOTS 272
#define NUMBER 273
#define STRING 274
#define NAME 275
#define AND 276
#define OR 277
#define EQ 278
#define NE 279
#define LE 280
#define GE 281
#define CONC 282
#define UNARY 283
#define NOT 284

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 413 "lua.y" /* yacc.c:1909  */

 int   vInt;
 float vFloat;
 char *pChar;
 Word  vWord;
 Long  vLong;
 TFunc *pFunc;
 TaggedString *pTStr;

#line 122 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE luaY_lval;

int luaY_parse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
