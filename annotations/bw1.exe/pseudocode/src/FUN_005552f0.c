// Name: FUN_005552f0
// Address: 005552f0
// Address Range: [[005552f0, 0055535f]]
// Convention: unknown
// Signature: void FUN_005552f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_005552f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (*(int *)(0x01CCF390 + 0x20c) == 0) {
    if (*(int *)(0x01CCF390 + 0x210) != 0) {
      iVar1 = FUN_00483e60(DAT_00612560);
      if (iVar1 == 0) {
        FUN_00554d30(param_1,param_2,param_3,0xffff);
        return;
      }
    }
    FUN_004844f0(DAT_00612560,param_2,param_3,param_4);
  }
  return;
}
