// Name: FUN_004a9eb0
// Address: 004a9eb0
// Address Range: [[004a9eb0, 004a9f22]]
// Convention: unknown
// Signature: void FUN_004a9eb0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004a9eb0(uint *param_1)

{
  *param_1 = 0;
  param_1[0x27] = 0;
  FUN_0040d400(param_1 + 0x1c);
  FUN_0040d400(param_1 + 0x22);
  param_1[0x498] = 0xffffffff;
  param_1[0x499] = 0xffffffff;
  param_1[0x49a] = 1;
  *(byte *)(param_1 + 1) = 0;
  if (param_1[0x21] == 0) {
    return;
  }
  FUN_005a3770(param_1[0x21]);
  param_1[0x21] = 0;
  return;
}
