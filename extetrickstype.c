#include "extetrickstype.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <error.h>
#include <errno.h>

extern ExtetricksSType NewSymbol(char *lexeme, enum yytokentype token) {
	ExtetricksSType newSymbol = (ExtetricksSType) malloc(sizeof(xtetricksSType));
	newSymbol->literalName = (char*) malloc(strlen(lexeme)+1);
	strcpy(newSymbol->literalName,lexeme);
	newSymbol->value.StringValue = newSymbol->literalName;
	return newSymbol;
}
