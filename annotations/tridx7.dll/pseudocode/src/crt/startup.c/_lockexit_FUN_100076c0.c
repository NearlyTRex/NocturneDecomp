// Name: crt_startup.c__lockexit_FUN_100076c0
// Address: 100076c0
// Address Range: [[100076c0, 100076ca]]
// Convention: __cdecl
// Signature: void __cdecl crt_startup_c__lockexit_FUN_100076c0(void)

#include "nocturne.h"

void __cdecl _lockexit(void)

{
  _lock(0xd);
  return;
}
