// Name: FUN_0054a890
// Address: 0054a890
// Address Range: [[0054a890, 0054a8f0]]
// Convention: unknown
// Signature: undefined4 FUN_0054a890(int param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint FUN_0054a890(int param_1,uint *param_2,int param_3)

{
  if (*(int *)(param_3 + 0x10) == 0) {
    if ((uint *)(param_1 + 0x30) != param_2) {
      *(uint *)(param_1 + 0x30) = *param_2;
      *(uint *)(param_1 + 0x34) = param_2[1];
      *(uint *)(param_1 + 0x38) = param_2[2];
    }
    FUN_0040a000(param_1);
    if (*(int *)(param_3 + 0xc) != 0) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xdc))(param_1);
    }
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
