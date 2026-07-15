// Name: crt_startup.c__exit_crt_FUN_100075c0
// Address: 100075c0
// Address Range: [[100075c0, 100075d1]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__exit_crt_FUN_100075c0(int code)

#include "nocturne.h"

void __cdecl _exit_crt(int code)

{
  doexit(code,1,0);
  return;
}
