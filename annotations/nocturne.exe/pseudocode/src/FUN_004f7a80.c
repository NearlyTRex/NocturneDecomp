// Name: FUN_004f7a80
// Address: 004f7a80
// Address Range: [[004f7a80, 004f7ab6]]
// Convention: unknown
// Signature: void FUN_004f7a80(undefined4 *param_1)

#include "nocturne.h"

void FUN_004f7a80(uint *param_1)

{
  param_1[0x83] = 0;
  *(byte *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x82] = 0;
  return;
}
