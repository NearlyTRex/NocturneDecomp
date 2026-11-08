// Name: FUN_0048c010
// Address: 0048c010
// Address Range: [[0048c010, 0048c227]]
// Convention: unknown
// Signature: float FUN_0048c010(int param_1,float *param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0048c010(int param_1,float *param_2,float param_3,uint *param_4,uint *param_5)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int extraout_ECX;
  float extraout_EDX;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  uint local_64;
  uint local_60;
  uint local_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  float local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c = *param_2;
  local_44 = param_2[2];
  local_58 = *param_2;
  fStack_50 = param_2[2];
  local_48 = (float)((float10)param_2[1] + (float10)_DAT_005db95c);
  fVar1 = 1.0 / *(float *)(param_1 + 0x2c);
  fVar6 = (float10)local_4c - (float10)*(float *)(param_1 + 0x10);
  local_3c = (float)fVar6;
  fVar7 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
  local_54 = param_2[1] + _DAT_005db960;
  fVar8 = (float10)local_44 - (float10)*(float *)(param_1 + 0x18);
  local_38 = (float)fVar8;
  local_30 = 1.0 / *(float *)(param_1 + 0x30);
  fVar9 = (((float10)param_2[1] + (float10)_DAT_005db95c) - (float10)*(float *)(param_1 + 0x14)) *
          (float10)fVar1;
  fVar10 = ((float10)local_54 - (float10)*(float *)(param_1 + 0x14)) * (float10)fVar1;
  fVar6 = (fVar6 - (float10)param_3) * fVar7;
  fVar8 = (fVar8 - (float10)param_3) * (float10)local_30;
  fVar7 = ((float10)local_3c + (float10)param_3) * fVar7;
  fVar11 = ((float10)local_38 + (float10)param_3) * (float10)local_30;
  bVar2 = false;
  FUN_005c03a0();
  FUN_005c03a0();
  local_18 = (int)ROUND(fVar9);
  local_28 = (int)ROUND(fVar10);
  local_40 = extraout_EDX;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  iVar3 = FUN_005c03a0();
  local_24 = (int)ROUND(fVar6);
  local_1c = (int)ROUND(fVar8);
  local_20 = (int)ROUND(fVar7);
  local_14 = (int)ROUND(fVar11);
  if (extraout_ECX <= iVar3) {
    do {
      iVar3 = local_24;
      if (local_24 <= local_20) {
        do {
          iVar5 = local_1c;
          if (local_1c <= local_14) {
            do {
              iVar4 = FUN_0048afe0(param_1,iVar3,local_18,iVar5);
              if (iVar4 != 0) {
                iVar4 = FUN_004584a0(iVar4,&local_4c,param_3,&local_40,&local_64,&local_34);
                if (iVar4 != 0) {
                  bVar2 = true;
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= local_14);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= local_20);
      }
      if (bVar2) {
        if ((param_5 != (uint *)0x0) && (&local_64 != param_5)) {
          *param_5 = local_64;
          param_5[1] = local_60;
          param_5[2] = local_5c;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = local_34;
        }
        return local_40;
      }
      local_18 = local_18 + -1;
    } while (local_28 <= local_18);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 1;
  }
  if (param_5 != (uint *)0x0) {
    param_5[1] = 0x3f800000;
    param_5[2] = 0;
    *param_5 = 0;
  }
  return local_54;
}
