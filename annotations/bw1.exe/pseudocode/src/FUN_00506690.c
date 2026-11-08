// Name: FUN_00506690
// Address: 00506690
// Address Range: [[00506690, 005066e2]]
// Convention: unknown
// Signature: undefined4 FUN_00506690(int param_1,undefined4 *param_2,int param_3)

#include "nocturne.h"

uint FUN_00506690(int param_1,uint *param_2,int param_3)

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
    FUN_004088b0(param_1);
    return 1;
  }
  *(uint *)(param_3 + 0x10) = 0;
  return 0;
}
