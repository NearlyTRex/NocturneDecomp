#pragma once

// Function prototypes for crt/env.cpp
// Generated from Ghidra function signatures

// Original: crt_env.c__setenvp_FUN_10007b60
// Address: 10007b60
int __cdecl ::setenvp(void);

// Original: crt_env.c___crtGetEnvironmentStringsW_FUN_100081e0
// Address: 100081e0
LPWSTR __cdecl ::_crtGetEnvironmentStringsW(void);

// Original: crt_env.c___crtGetEnvironmentStringsA_FUN_100083e0
// Address: 100083e0
char * __cdecl ::_crtGetEnvironmentStringsA(void);

// Original: crt_env.c_getenv_FUN_10010c20
// Address: 10010c20
char * __cdecl getenv(char *name);

// Original: crt_env.c_getenv_FUN_10010c50
// Address: 10010c50
char * __cdecl getenv(char *name);

// Original: crt_env.c___env_compare_FUN_10010cf0
// Address: 10010cf0
int __cdecl ::_env_compare(char *s1,char *s2,int len);

// Original: crt_env.c__build_ansi_environ_FUN_10010d30
// Address: 10010d30
int __cdecl ::build_ansi_environ(void);

// Original: crt_env.c___crtsetenv_FUN_10011360
// Address: 10011360
int __cdecl ::_crtsetenv(char *option,int primary);

// Original: crt_env.c_findenv_FUN_100115b0
// Address: 100115b0
int __cdecl findenv(char *name,int len);

// Original: crt_env.c_copy_environ_FUN_10011610
// Address: 10011610
char ** __cdecl copy::environ(char **oldenviron);
