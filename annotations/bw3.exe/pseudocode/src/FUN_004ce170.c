// Name: FUN_004ce170
// Address: 004ce170
// Address Range: [[004ce170, 004ce300]]
// Convention: unknown
// Signature: void FUN_004ce170(float *param_1,float *param_2,int param_3,float param_4,float param_5,float param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce170(float *param_1,float *param_2,int param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  
  iVar2 = 0;
  pfVar3 = param_1;
  do {
    pfVar4 = pfVar3 + 3;
    fVar5 = (float10)fsin((float10)*(float *)(param_3 + 4));
    fVar6 = (float10)fcos((float10)*(float *)(param_3 + 4));
    fVar5 = fVar5 * (float10)_DAT_005c4739;
    fVar6 = fVar6 * (float10)_DAT_005c4739;
    local_34 = (float)(fVar5 * (float10)*(float *)((int)&DAT_005ffe9c + iVar2) +
                       -fVar6 * (float10)*(float *)((int)&DAT_005ffe8c + iVar2) + (float10)*param_2)
    ;
    local_2c = (float)(fVar6 * (float10)*(float *)((int)&DAT_005ffe9c + iVar2) +
                      fVar5 * (float10)*(float *)((int)&DAT_005ffe8c + iVar2)) + param_2[2];
    if (&local_40 != &local_34) {
      local_40 = local_34;
      local_3c = param_2[1];
      local_38 = local_2c;
    }
    local_30 = param_2[1] + 1.0;
    local_3c = local_3c + _DAT_005c4749;
    local_18 = (float)FUN_00473cd0(&DAT_0203b37c,&local_34,&local_40,0,0);
    fVar1 = (local_30 - local_18 * (float)_DAT_005c4741) + _DAT_005c474d;
    if (pfVar4 != &local_34) {
      *pfVar4 = local_34;
      pfVar3[4] = fVar1;
      pfVar3[5] = local_2c;
    }
    iVar2 = iVar2 + 4;
    pfVar3 = pfVar4;
  } while (iVar2 != 0x10);
  pfVar3 = param_1 + 3;
  do {
    if ((float)_DAT_005c4739 < ABS(param_1[4] - pfVar3[4])) {
      pfVar3[4] = param_1[4];
    }
    pfVar3 = pfVar3 + 3;
  } while (pfVar3 != param_1 + 0xc);
  *param_1 = 0.0;
  param_1[0xf] = param_5;
  param_1[0x10] = param_4;
  param_1[1] = param_6;
  param_1[2] = *(float *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x2c);
  return;
}
