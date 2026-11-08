// Name: FUN_004a3860
// Address: 004a3860
// Address Range: [[004a3860, 004a38d2]]
// Convention: unknown
// Signature: void FUN_004a3860(undefined4 *param_1)

#include "nocturne.h"

void FUN_004a3860(uint *param_1)

{
  *param_1 = 0;
  param_1[0x27] = 0;
  FUN_0040d540(param_1 + 0x1c);
  FUN_0040d540(param_1 + 0x22);
  param_1[0x259] = 0xffffffff;
  param_1[0x25a] = 0xffffffff;
  param_1[0x25b] = 1;
  *(byte *)(param_1 + 1) = 0;
  if (param_1[0x21] == 0) {
    return;
  }
  FUN_005b86a0(param_1[0x21]);
  param_1[0x21] = 0;
  return;
}
