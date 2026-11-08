// Name: FUN_004a09f0
// Address: 004a09f0
// Address Range: [[004a09f0, 004a0aeb]]
// Convention: unknown
// Signature: void FUN_004a09f0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a09f0(float *param_1)

{
  uint uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < param_1[9]) {
    uVar1 = *DAT_005f2afc;
    iStack_1c = (int)ROUND(*param_1 * _DAT_005df8e4);
    iStack_18 = (int)ROUND(param_1[1] * _DAT_005df8e4);
    iStack_14 = (int)ROUND(param_1[2] * _DAT_005df8e4);
    FUN_0056356c(uVar1,&iStack_1c);
    iVar2 = FUN_0046e6b0(DAT_005f2afc,uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_0046d540(DAT_005f2afc);
      if (iVar2 == 0) {
        (**(code **)(*(int *)(DAT_007e2a54 + 0x3c) + 4))(DAT_007e2a54,param_1,0);
      }
      FUN_005375c0(0x01ED78C8,param_1,param_1 + 0x10,&DAT_02cfd900,&DAT_02cfd900,0);
      FUN_0046ce90(DAT_005f2afc,param_1);
      FUN_0046cf30(DAT_005f2afc,param_1 + 0x10,0);
      FUN_00460f20(param_1[0x17],0,0,0xffffffff);
      thunk_FUN_004e5ef0(DAT_005f2afc);
      return;
    }
  }
  return;
}
