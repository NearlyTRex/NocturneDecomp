#pragma once

// Function prototypes for crt/env.cpp
// Generated from Ghidra function signatures

// Original: crt_env.c_getenv_FUN_006013f0
// Address: 006013f0
char * getenv(char * name);

// Original: crt_env.c_putenv_internal_FUN_0060ee80
// Address: 0060ee80
int putenv::internal(char * envstr);

// Original: crt_env.c_updateEnvironTable_FUN_0060f04c
// Address: 0060f04c
int updateEnvironTable(char * envstr);

// Original: crt_env.c_findEnvVar_FUN_0060f1f0
// Address: 0060f1f0
int findEnvVar(char * name, int delete_flag);
