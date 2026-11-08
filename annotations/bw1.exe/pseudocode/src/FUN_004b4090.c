// Name: FUN_004b4090
// Address: 004b4090
// Address Range: [[004b4090, 004b418b]]
// Convention: unknown
// Signature: void FUN_004b4090(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b4090(float *param_1)

{
  uint uVar1;
  int iVar2;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (0.0 < param_1[9]) {
    uVar1 = *DAT_00612560;
    iStack_1c = (int)ROUND(*param_1 * _DAT_005fff94);
    iStack_18 = (int)ROUND(param_1[1] * _DAT_005fff94);
    iStack_14 = (int)ROUND(param_1[2] * _DAT_005fff94);
    FUN_0058043c(uVar1,&iStack_1c);
    iVar2 = FUN_00484fd0(DAT_00612560,uVar1);
    if (iVar2 != 0) {
      iVar2 = FUN_00483e60(DAT_00612560);
      if (iVar2 == 0) {
        (**(code **)(*(int *)(DAT_007c6120 + 0x3c) + 4))(DAT_007c6120,param_1,0);
      }
      FUN_00551c30(0x01E82168,param_1,param_1 + 0x10,&DAT_02c8af28,&DAT_02c8af28,0);
      FUN_004837b0(DAT_00612560,param_1);
      FUN_00483850(DAT_00612560,param_1 + 0x10,0);
      FUN_00467270(param_1[0x17],0,0,0xffffffff);
      thunk_FUN_005084b0(DAT_00612560);
      return;
    }
  }
  return;
}
