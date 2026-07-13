// Name: ___shl_12
// Address: 1000c640
// Address Range: [[1000c640, 1000c67d]]
// Convention: unknown
// Signature: void ___shl_12(uint *param_1)

#include "nocturne.h"

/* Library Function - Single Match
void ___shl_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = uVar1 * 2;
  param_1[1] = uVar2 * 2 | uVar1 >> 0x1f;
  param_1[2] = param_1[2] * 2 | uVar2 >> 0x1f;
  return;
}
