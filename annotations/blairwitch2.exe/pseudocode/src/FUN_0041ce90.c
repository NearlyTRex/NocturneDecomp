// Name: FUN_0041ce90
// Address: 0041ce90
// Address Range: [[0041ce90, 0041cf12]]
// Convention: unknown
// Signature: void FUN_0041ce90(int param_1,undefined4 *param_2,undefined4 *param_3)

#include "nocturne.h"

void FUN_0041ce90(int param_1,uint *param_2,uint *param_3)

{
  *(uint *)(param_1 + 0x20) = *param_2;
  *(uint *)(param_1 + 0x24) = param_2[1];
  *(uint *)(param_1 + 0x28) = param_2[2];
  if ((uint *)(param_1 + 0x30) != param_3) {
    *(uint *)(param_1 + 0x30) = *param_3;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
  }
  FUN_00408ae0(param_1);
  if ((uint *)(param_1 + 0x4f0) != param_2) {
    *(uint *)(param_1 + 0x4f0) = *param_2;
    *(uint *)(param_1 + 0x4f4) = param_2[1];
    *(uint *)(param_1 + 0x4f8) = param_2[2];
  }
  if ((uint *)(param_1 + 0x4fc) != param_3) {
    *(uint *)(param_1 + 0x4fc) = *param_3;
    *(uint *)(param_1 + 0x500) = param_3[1];
    *(uint *)(param_1 + 0x504) = param_3[2];
  }
  FUN_0041bf10(param_1);
  return;
}
