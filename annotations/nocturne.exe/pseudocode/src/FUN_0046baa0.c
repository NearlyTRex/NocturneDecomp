// Name: FUN_0046baa0
// Address: 0046baa0
// Address Range: [[0046baa0, 0046bcef]]
// Convention: unknown
// Signature: void FUN_0046baa0(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046baa0(int param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  byte local_8c [40];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  byte local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_0044d7a0(local_8c,param_3);
  local_58 = *param_5 - *param_4;
  local_54 = param_5[1] - param_4[1];
  local_50 = param_5[2] - param_4[2];
  fVar5 = (float10)local_54 / (float10)*(float *)(param_1 + 0x38);
  fVar6 = (float10)local_50 / (float10)*(float *)(param_1 + 0x3c);
  fVar7 = (float10)_DAT_0057e3be;
  fVar8 = (float10)1 + ((float10)local_58 / (float10)*(float *)(param_1 + 0x34)) * fVar7;
  FUN_00563a30();
  local_28 = (int)ROUND(fVar8);
  fVar8 = (float10)local_58 / (float10)local_28;
  fVar5 = (float10)1 + fVar5 * fVar7;
  local_14 = local_28;
  FUN_00563a30();
  local_24 = (int)ROUND(fVar5);
  fVar5 = (float10)local_54 / (float10)local_24;
  fVar6 = (float10)1 + fVar6 * fVar7;
  local_14 = local_24;
  FUN_00563a30();
  local_1c = (int)ROUND(fVar6);
  fVar1 = local_50 / (float)local_1c;
  local_20 = 0;
  if (0 < local_28) {
    do {
      local_18 = 0;
      if (0 < local_24) {
        do {
          iVar4 = 0;
          if (0 < local_1c) {
            do {
              fVar2 = (float)_DAT_0057e3c6;
              local_40 = (float)fVar8 * fVar2 + (float)local_20 * (float)fVar8 + *param_4;
              local_3c = (float)fVar5 * fVar2 + (float)local_18 * (float)fVar5 + param_4[1];
              local_38 = (float)iVar4 * fVar1 + param_4[2] + fVar1 * fVar2;
              local_14 = iVar4;
              pfVar3 = (float *)FUN_0044da40(local_8c,local_34,&local_40);
              local_64 = *pfVar3 + *param_2;
              local_60 = pfVar3[1] + param_2[1];
              local_5c = pfVar3[2] + param_2[2];
              if (&local_4c != &local_64) {
                local_4c = local_64;
                local_48 = local_60;
                local_44 = local_5c;
              }
              FUN_0046bfe0(param_1,&local_4c);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_1c);
          }
          local_18 = local_18 + 1;
        } while (local_18 < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  return;
}
