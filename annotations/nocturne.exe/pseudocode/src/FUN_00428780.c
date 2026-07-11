// Name: FUN_00428780
// Address: 00428780
// Address Range: [[00428780, 00428aa7]]
// Convention: unknown
// Signature: void FUN_00428780(int param_1,int param_2,float param_3,float param_4,int *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00428780(int param_1,int param_2,float param_3,float param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float local_50;
  float local_4c;
  float local_48;
  byte local_44 [12];
  byte local_38 [12];
  float local_2c;
  float local_20;
  uint local_1c;
  float local_18;
  
  if (param_2 == 0) {
    FUN_0043ac60(PTR_DAT_005ad350,"%s tried to follow NULL actor!\n",param_1);
    *param_5 = 3;
    return;
  }
  local_50 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  local_4c = *(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24);
  local_48 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  if (0.0 <= param_3) {
    if ((((float)_DAT_0057a0ca < ABS(local_4c)) || ((float)_DAT_0057a0d2 < ABS(local_50))) ||
       ((float)_DAT_0057a0d2 < ABS(local_48))) {
      FUN_0043ac60(PTR_DAT_005ad350,"%s confused while following %s\n",param_1,param_2);
      *param_5 = 3;
      return;
    }
    local_2c = SQRT(local_48 * local_48 + local_50 * local_50);
    local_4c = 0.0;
    if (param_4 < 0.0) {
      param_4 = 1e+30;
    }
    local_20 = param_3 * (float)_DAT_0057a0da;
    iVar4 = *param_5;
    if (iVar4 == 0) {
      param_3 = param_3 + local_20;
    }
    else if (iVar4 == 1) {
      param_4 = param_4 + local_20;
      param_3 = param_3 - local_20;
    }
    else if (iVar4 == 2) {
      param_4 = param_4 - local_20;
    }
    if (param_3 < (float)_DAT_0057a0e2) {
      param_3 = 0.01;
    }
    if (param_3 <= local_2c) {
      uVar3 = (**(code **)(*(int *)(param_2 + 0x14c) + 0xbc))(param_2,&DAT_02dd1184,0,0);
      iVar4 = FUN_004247f0(param_1,param_2 + 0x20,uVar3);
      if (iVar4 < 0) {
        FUN_0043ac60(PTR_DAT_005ad350,"%s confused after pathmap call while following %s\n",param_1,param_2);
        *param_5 = 3;
        return;
      }
      if (local_2c <= param_4) {
        *param_5 = 1;
        return;
      }
      *param_5 = 2;
      return;
    }
    *param_5 = 0;
    return;
  }
  local_4c = 0.0;
  uVar3 = FUN_0040a220(param_1,local_44,&local_50);
  iVar4 = FUN_0054e4a0(local_38,uVar3);
  *(uint *)(param_1 + 0x2410) = *(uint *)(iVar4 + 4);
  if (*param_5 == 0) {
    if ((float)_DAT_0057a0f2 < ABS(*(float *)(param_1 + 0x2410))) goto LAB_00428901;
    if (*param_5 != 1) goto LAB_0042899e;
  }
  else {
    if (ABS(*(float *)(param_1 + 0x2410)) < (float)_DAT_0057a0ea) {
      *param_5 = 0;
LAB_0042899e:
      *(uint *)(param_1 + 0x2410) = 0;
      goto LAB_0042895c;
    }
LAB_00428901:
    *param_5 = 1;
  }
  local_1c = *(uint *)(param_1 + 0x2410);
  local_18 = *(float *)(param_1 + 0x2430);
  fVar1 = (float)FUN_0040df00(local_1c);
  fVar2 = -local_18;
  if ((fVar2 <= fVar1) && (fVar2 = fVar1, local_18 < fVar1)) {
    fVar2 = local_18;
  }
  *(float *)(param_1 + 0x2410) = fVar2;
LAB_0042895c:
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  return;
}
