// Name: FUN_00420290
// Address: 00420290
// Address Range: [[00420290, 00420312]]
// Convention: unknown
// Signature: void FUN_00420290(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_00420290(int param_1,uint *param_2,uint *param_3)

{
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  FUN_004088f0(param_1);
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
  FUN_0041f1e0(param_1);
  return;
}
