// Name: FUN_00479990
// Address: 00479990
// Address Range: [[00479990, 00479a27]]
// Convention: unknown
// Signature: undefined4 FUN_00479990(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00479990(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  byte local_20 [12];
  int iStack_14;
  
  iVar1 = *(int *)(param_1 + 0xbca4);
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x14c) + 0xfc))(iVar1,param_2,param_3,param_4,local_20);
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar2 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_0057f34f * (float10)_DAT_0057f357;
      FUN_00563a30(0);
      iStack_14 = (int)ROUND(fVar2);
      FUN_004b0200(0x01C78C7C,local_20,0,iStack_14);
      return 1;
    }
  }
  return 0;
}
