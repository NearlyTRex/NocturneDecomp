// Name: crt_env.c_getenv_FUN_10010c20
// Address: 10010c20
// Address Range: [[10010c20, 10010c47]]
// Convention: __cdecl
// Signature: char * __cdecl crt_env_c_getenv_FUN_10010c20(char *name)

#include "nocturne.h"

char * __cdecl getenv(char *name)

{
  char *pcVar1;
  
  _lock(0xc);
  pcVar1 = getenv(name);
  _unlock(0xc);
  return pcVar1;
}
