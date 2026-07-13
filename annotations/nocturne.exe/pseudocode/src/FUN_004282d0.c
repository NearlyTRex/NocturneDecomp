// Name: FUN_004282d0
// Address: 004282d0
// Address Range: [[004282d0, 0042850a]]
// Convention: unknown
// Signature: undefined4 FUN_004282d0(int param_1,float *param_2,float *param_3,int param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004282d0(int param_1,float *param_2,float *param_3,int param_4,uint *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint *puVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  byte auStack_6c [12];
  byte local_60 [12];
  float local_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  byte auStack_24 [12];
  int iStack_18;
  
  FUN_0040a290(param_1,&local_48,param_2);
  FUN_0040a290(param_1,&local_54,param_3);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0xa8))(param_1,&local_48,&local_54,local_60);
  if (iVar4 != 0) {
    if (param_5 != (uint *)0x0) {
      puVar5 = (uint *)FUN_0040a240(param_1,auStack_6c,local_60);
      if (param_5 != puVar5) {
        *param_5 = *puVar5;
        param_5[1] = puVar5[1];
        param_5[2] = puVar5[2];
      }
    }
    if (0.0 < *(float *)(param_4 + 4)) {
      fVar1 = *param_3;
      fVar2 = *param_2;
      fStack_74 = (float)((float10)param_3[1] - (float10)param_2[1]);
      fVar6 = (float10)(fVar1 - fVar2);
      fStack_70 = (float)((float10)param_3[2] - (float10)param_2[2]);
      fVar6 = SQRT(((float10)param_3[2] - (float10)param_2[2]) * (float10)fStack_70 +
                   fVar6 * fVar6 + ((float10)param_3[1] - (float10)param_2[1]) * (float10)fStack_74)
      ;
      fVar7 = (float10)*(float *)(param_4 + 4) * (float10)_DAT_0057a03a;
      FUN_00563a30();
      iStack_18 = (int)ROUND(fVar7);
      iVar4 = iStack_18 + 1;
      if (fVar6 <= (float10)0) {
        fStack_74 = 0.0;
        fStack_78 = 0.0;
        fStack_70 = 0.0;
      }
      else {
        fVar3 = 1.0 / (float)fVar6;
        fStack_78 = (fVar1 - fVar2) * fVar3;
        fStack_74 = fStack_74 * fVar3;
        fStack_70 = fStack_70 * fVar3;
      }
      fStack_3c = fStack_78 * _DAT_0057a042;
      fStack_38 = fStack_74 * _DAT_0057a042;
      fStack_34 = fStack_70 * _DAT_0057a042;
      FUN_0040a240(param_1,auStack_24,local_60);
      FUN_004b0200(0x01C78C7C,auStack_24,&fStack_3c,iVar4,*(uint *)(param_1 + 0x2608));
    }
    fStack_30 = (local_48 + local_54) * _DAT_0057a046;
    fStack_2c = (fStack_44 + fStack_50) * _DAT_0057a046;
    fStack_28 = (fStack_40 + fStack_4c) * _DAT_0057a046;
    if ((float *)(param_4 + 0x1c) != &fStack_30) {
      *(float *)(param_4 + 0x1c) = fStack_30;
      *(float *)(param_4 + 0x20) = fStack_2c;
      *(float *)(param_4 + 0x24) = fStack_28;
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,param_4);
    return 1;
  }
  *(uint *)(param_4 + 4) = 0;
  return 0;
}
