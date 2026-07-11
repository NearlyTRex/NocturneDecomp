// Name: FUN_004798e0
// Address: 004798e0
// Address Range: [[004798e0, 00479987]]
// Convention: unknown
// Signature: undefined4 FUN_004798e0(int param_1,undefined4 *param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004798e0(int param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 0xf8))(iVar1,param_2,param_3,param_4);
    if (0.0 < *(float *)(param_4 + 4)) {
      uStack_20 = *param_2;
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_0057f33f * (float10)_DAT_0057f347;
      uStack_1c = FUN_00563a30(0);
      iStack_14 = (int)ROUND(fVar2);
      uStack_18 = param_2[2];
      FUN_004b0200(0x01C78C7C,&uStack_20,0,iStack_14);
      return 1;
    }
  }
  return 0;
}
