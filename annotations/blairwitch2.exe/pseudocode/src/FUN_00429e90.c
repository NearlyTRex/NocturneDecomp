// Name: FUN_00429e90
// Address: 00429e90
// Address Range: [[00429e90, 00429f16]]
// Convention: unknown
// Signature: void FUN_00429e90(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00429e90(int param_1,uint param_2)

{
  int iVar1;
  
  FUN_004291f0(param_1);
  FUN_00429b40(param_1);
  FUN_00546ae0(param_1 + 0x2b4);
  FUN_00429390(param_1);
  FUN_00428e30(param_1,param_2);
  if (*(int *)(param_1 + 0x2828) == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x114))(param_1);
    if (iVar1 != 1) {
      return;
    }
  }
  FUN_005b1780(param_1 + 0x2d0c,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x2574),param_1 + 0x2b4);
  return;
}
