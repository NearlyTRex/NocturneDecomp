// Name: FUN_005a73c0
// Address: 005a73c0
// Address Range: [[005a73c0, 005a741b]]
// Convention: unknown
// Signature: undefined4 FUN_005a73c0(int param_1,int *param_2)

#include "nocturne.h"

uint FUN_005a73c0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 != 2) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
    if (iVar1 < 2) {
      if (((*param_2 == 1) || (*param_2 == 3)) && (*(int *)(param_1 + 0xbe79c) == 2)) {
        param_2[8] = param_1 + 0xc268;
        return 1;
      }
      uVar2 = FUN_004310b0(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}
