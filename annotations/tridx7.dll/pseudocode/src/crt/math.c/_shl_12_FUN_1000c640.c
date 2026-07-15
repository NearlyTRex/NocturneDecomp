// Name: crt_math.c__shl_12_FUN_1000c640
// Address: 1000c640
// Address Range: [[1000c640, 1000c67d]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__shl_12_FUN_1000c640(uint *p)

#include "nocturne.h"

void __cdecl _shl_12(uint *p)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *p;
  uVar2 = p[1];
  *p = uVar1 * 2;
  p[1] = uVar2 * 2 | uVar1 >> 0x1f;
  p[2] = p[2] * 2 | uVar2 >> 0x1f;
  return;
}
