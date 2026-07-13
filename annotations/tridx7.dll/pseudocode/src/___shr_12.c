// Name: ___shr_12
// Address: 1000c680
// Address Range: [[1000c680, 1000c6b5]]
// Convention: unknown
// Signature: void ___shr_12(uint *param_1)

#include "nocturne.h"

/* Library Function - Single Match
void ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = uVar1 >> 1;
  param_1[1] = uVar2 >> 1 | uVar1 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar2 << 0x1f;
  return;
}
