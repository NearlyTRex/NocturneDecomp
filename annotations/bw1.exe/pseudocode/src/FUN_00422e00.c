// Name: FUN_00422e00
// Address: 00422e00
// Address Range: [[00422e00, 00422e82]]
// Convention: unknown
// Signature: void FUN_00422e00(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00422e00(int param_1,uint *param_2,uint *param_3)

{
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  FUN_004088b0(param_1);
  if ((uint *)(param_1 + 0x394) != param_2) {
    *(uint *)(param_1 + 0x394) = *param_2;
    *(uint *)(param_1 + 0x398) = param_2[1];
    *(uint *)(param_1 + 0x39c) = param_2[2];
  }
  if ((uint *)(param_1 + 0x3a0) != param_3) {
    *(uint *)(param_1 + 0x3a0) = *param_3;
    *(uint *)(param_1 + 0x3a4) = param_3[1];
    *(uint *)(param_1 + 0x3a8) = param_3[2];
  }
  FUN_00421e80(param_1);
  return;
}
