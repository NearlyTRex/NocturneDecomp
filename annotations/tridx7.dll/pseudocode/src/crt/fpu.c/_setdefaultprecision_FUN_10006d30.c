// Name: crt_fpu.c__setdefaultprecision_FUN_10006d30
// Address: 10006d30
// Address Range: [[10006d30, 10006d42]]
// Convention: __cdecl
// Signature: void __cdecl crt_fpu_c__setdefaultprecision_FUN_10006d30(void)

#include "nocturne.h"

void __cdecl _setdefaultprecision(void)

{
  _controlfp(0x10000,0x30000);
  return;
}
