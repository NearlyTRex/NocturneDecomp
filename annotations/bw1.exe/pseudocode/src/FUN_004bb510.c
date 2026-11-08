// Name: FUN_004bb510
// Address: 004bb510
// Address Range: [[004bb510, 004bb56f]]
// Convention: unknown
// Signature: undefined4 FUN_004bb510(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint FUN_004bb510(int param_1,uint *param_2)

{
  int iVar1;
  
  FUN_004bb570(param_1);
  iVar1 = FUN_004bbad0(param_1,param_2[2],param_2[3]);
  if (iVar1 != 0) {
    param_2[1] = *(uint *)(param_1 + 0x18);
    *param_2 = *(uint *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + param_2[2];
    FUN_004bb5f0(param_1,param_2);
    return 1;
  }
  FUN_004bb6c0(param_1);
  return 0;
}
