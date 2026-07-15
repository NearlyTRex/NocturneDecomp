// Name: crt_math.c__addl_FUN_1000c5a0
// Address: 1000c5a0
// Address Range: [[1000c5a0, 1000c5c2]]
// Convention: __cdecl
// Signature: uint __cdecl crt_math_c__addl_FUN_1000c5a0(uint a,uint b,uint *result)

#include "nocturne.h"

uint __cdecl _addl(uint a,uint b,uint *result)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = a + b;
  if ((uVar1 < a) || (uVar1 < b)) {
    uVar2 = 1;
  }
  *result = uVar1;
  return uVar2;
}
