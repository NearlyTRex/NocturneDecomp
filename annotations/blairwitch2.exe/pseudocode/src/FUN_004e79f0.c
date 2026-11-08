// Name: FUN_004e79f0
// Address: 004e79f0
// Address Range: [[004e79f0, 004e7a42]]
// Convention: unknown
// Signature: undefined4 FUN_004e79f0(int param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint FUN_004e79f0(int param_1,uint *param_2,int param_3)

{
  if (*(int *)(param_3 + 0xc) != 0) {
    *(uint *)(param_3 + 0xc) = 0;
    return 0;
  }
  if (*(int *)(param_3 + 0x10) == 0) {
    if ((uint *)(param_1 + 0x30) != param_2) {
      *(uint *)(param_1 + 0x30) = *param_2;
      *(uint *)(param_1 + 0x34) = param_2[1];
      *(uint *)(param_1 + 0x38) = param_2[2];
    }
    FUN_00408ae0(param_1);
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
