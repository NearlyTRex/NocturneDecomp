#pragma once

// Function prototypes for crt/env.cpp
// Generated from Ghidra function signatures

// Original: crt_env.c_getenv_FUN_00566e10
// Address: 00566e10
char * __cdecl getenv(char *name);

// Original: crt_env.c_putenv_internal_FUN_00573930
// Address: 00573930
int __cdecl putenv::internal(char *envstr);

// Original: crt_env.c_updateEnvironTable_FUN_00573afc
// Address: 00573afc
int __cdecl updateEnvironTable(char *envstr);

// Original: crt_env.c_findEnvVar_FUN_00573ca0
// Address: 00573ca0
int __cdecl findEnvVar(char *name,int delete_flag);
