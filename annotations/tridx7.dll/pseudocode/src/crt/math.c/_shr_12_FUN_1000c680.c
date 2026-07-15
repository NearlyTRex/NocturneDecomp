// Name: crt_math.c__shr_12_FUN_1000c680
// Address: 1000c680
// Address Range: [[1000c680, 1000c6b5]]
// Convention: __cdecl
// Signature: void __cdecl crt_math_c__shr_12_FUN_1000c680(uint *p)

#include "nocturne.h"

void __cdecl _shr_12(uint *p)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = p[2];
  uVar2 = p[1];
  p[2] = uVar1 >> 1;
  p[1] = uVar2 >> 1 | uVar1 << 0x1f;
  *p = *p >> 1 | uVar2 << 0x1f;
  return;
}
