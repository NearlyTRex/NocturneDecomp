// Name: FUN_004c8e80
// Address: 004c8e80
// Address Range: [[004c8e80, 004c8ff6]]
// Convention: unknown
// Signature: void FUN_004c8e80(undefined4 *param_1,float *param_2,int param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c8e80(uint *param_1,float *param_2,int param_3,uint param_4,uint param_5,uint param_6)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
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
  pfVar4 = (float *)(param_1 + 2);
  do {
    fVar5 = (float10)fsin((float10)*(float *)(param_3 + 4));
    fVar6 = (float10)fcos((float10)*(float *)(param_3 + 4));
    fVar5 = fVar5 * (float10)_DAT_005d9532;
    fVar6 = fVar6 * (float10)_DAT_005d9532;
    local_40 = (float)(fVar5 * (float10)*(float *)((int)&DAT_00617958 + iVar2) +
                       -fVar6 * (float10)*(float *)((int)&DAT_00617948 + iVar2) + (float10)*param_2)
    ;
    local_38 = (float)(fVar6 * (float10)*(float *)((int)&DAT_00617958 + iVar2) +
                      fVar5 * (float10)*(float *)((int)&DAT_00617948 + iVar2)) + param_2[2];
    if (&local_34 != &local_40) {
      local_34 = local_40;
      local_30 = param_2[1];
      local_2c = local_38;
    }
    local_3c = param_2[1] + 1.0;
    local_30 = local_30 + _DAT_005d9542;
    local_18 = (float)FUN_00472c60(&DAT_01fc9c68,&local_40,&local_34,0,0);
    fVar1 = (local_3c - local_18 * (float)_DAT_005d953a) + _DAT_005d9546;
    if (pfVar4 != &local_40) {
      *pfVar4 = local_40;
      pfVar4[1] = fVar1;
      pfVar4[2] = local_38;
    }
    iVar2 = iVar2 + 4;
    pfVar4 = pfVar4 + 3;
  } while (iVar2 != 0x10);
  puVar3 = param_1 + 3;
  do {
    if ((float)_DAT_005d9532 < ABS((float)param_1[3] - (float)puVar3[3])) {
      puVar3[3] = param_1[3];
    }
    puVar3 = puVar3 + 3;
  } while (puVar3 != param_1 + 0xc);
  *param_1 = 0;
  param_1[0xe] = param_5;
  param_1[0xf] = param_4;
  param_1[1] = param_6;
  return;
}
