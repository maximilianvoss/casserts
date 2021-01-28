/*
 * Copyright 2020 - 2021 Maximilian Voss (maximilian@voss.rocks)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CASSERTS_CASSERTS_H
#define CASSERTS_CASSERTS_H

#include <string.h>
#include <stdio.h>

#define TESTCALL(TESTNAME, TESTMETHOD, DATA)\
    if ( argv[1] == NULL ) {\
        printf("\nTest case:\t%s\n", TESTNAME);\
        TESTMETHOD(DATA);\
    } else {\
        if (!strcmp(argv[1], TESTNAME)) {\
            printf("\nTest case:\t%s\n", TESTNAME);\
            return TESTMETHOD(DATA);\
        }\
    }

#define ASSERTSTR(EXPECTED, ACTUAL)\
    printf("\nExpected: \t%s\nActual: \t%s\n", EXPECTED, ACTUAL);\
    if (strcmp(EXPECTED, ACTUAL))\
        exit(1);

#define ASSERTINT(EXPECTED, ACTUAL)\
    printf("\nExpected: \t%d\nActual: \t%d\n", EXPECTED, ACTUAL);\
    if (EXPECTED != ACTUAL)\
        exit(1);

#define ASSERTLONG(EXPECTED, ACTUAL)\
    printf("\nExpected: \t%ld\nActual: \t%ld\n", EXPECTED, ACTUAL);\
    if (EXPECTED != ACTUAL)\
        exit(1);

#define ASSERTNOTNULL(EXPECTED)\
    if (EXPECTED == NULL) {\
        printf("\nExpected to be NOT NULL\n");\
        exit(1);\
    }

#define ASSERTNULL(EXPECTED)\
    if (EXPECTED != NULL) {\
        printf("\nExpected to be NULL\n");\
        exit(1);\
    }

#define ASSERTFILEEXISTS(PATH)\
    if ( ! file_exists(PATH) ) {\
        printf("\nFile: %s doesn't exist\n", PATH);\
        exit(1);\
    }

#define ASSERTPTRNOTEQUAL(VALUE1, VALUE2)\
    if ( VALUE1 == VALUE2 ) {\
        printf("\nExpected that %p is not %p\n", VALUE1, VALUE2);\
        exit(1);\
    }

#define ASSERTPTREQUAL(VALUE1, VALUE2)\
    if ( VALUE1 != VALUE2 ) {\
        printf("\'nExpected that %p is %p\n", VALUE1, VALUE2);\
        exit(1);\
    }

#endif
