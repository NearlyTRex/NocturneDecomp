// Name: FUN_004687e0
// Address: 004687e0
// Address Range: [[004687e0, 00468a11]]
// Convention: unknown
// Signature: float FUN_004687e0(int param_1,float *param_2,float param_3,undefined4 *param_4,undefined4 *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_004687e0(int param_1,float *param_2,float param_3,uint *param_4,uint *param_5)

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
  float fVar12;
  uint local_58;
  uint local_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  float local_2c;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_4c = *param_2;
  local_44 = param_2[2];
  fVar6 = (float10)param_2[1] + (float10)_DAT_0057e1ea;
  local_48 = (float)fVar6;
  fVar12 = param_2[1] + _DAT_0057e1ee;
  fVar1 = 1.0 / *(float *)(param_1 + 0x2c);
  fVar7 = (float10)local_4c - (float10)*(float *)(param_1 + 0x10);
  local_38 = (float)fVar7;
  fVar8 = (float10)1 / (float10)*(float *)(param_1 + 0x28);
  fVar9 = (float10)local_44 - (float10)*(float *)(param_1 + 0x18);
  local_34 = (float)fVar9;
  local_2c = 1.0 / *(float *)(param_1 + 0x30);
  fVar6 = (fVar6 - (float10)*(float *)(param_1 + 0x14)) * (float10)fVar1;
  fVar10 = ((float10)fVar12 - (float10)*(float *)(param_1 + 0x14)) * (float10)fVar1;
  fVar7 = (fVar7 - (float10)param_3) * fVar8;
  fVar9 = (fVar9 - (float10)param_3) * (float10)local_2c;
  fVar8 = ((float10)local_38 + (float10)param_3) * fVar8;
  fVar11 = ((float10)local_34 + (float10)param_3) * (float10)local_2c;
  bVar2 = false;
  FUN_00563a30(*param_2,fVar12,param_2[2]);
  FUN_00563a30();
  local_18 = (int)ROUND(fVar6);
  local_24 = (int)ROUND(fVar10);
  local_3c = extraout_EDX;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30();
  iVar3 = FUN_00563a30();
  local_40 = (int)ROUND(fVar7);
  local_1c = (int)ROUND(fVar9);
  local_20 = (int)ROUND(fVar8);
  local_14 = (int)ROUND(fVar11);
  if (extraout_ECX <= iVar3) {
    do {
      iVar3 = local_40;
      if (local_40 <= local_20) {
        do {
          iVar5 = local_1c;
          if (local_1c <= local_14) {
            do {
              iVar4 = FUN_004678d0(param_1,iVar3,local_18,iVar5);
              if (iVar4 != 0) {
                iVar4 = FUN_0044b500(iVar4,&local_4c,param_3,&local_3c,&local_58,&local_30);
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
        if ((param_5 != (uint *)0x0) && (&local_58 != param_5)) {
          *param_5 = local_58;
          param_5[1] = local_54;
          param_5[2] = local_50;
        }
        if (param_4 != (uint *)0x0) {
          *param_4 = local_30;
        }
        return local_3c;
      }
      local_18 = local_18 + -1;
    } while (local_24 <= local_18);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 1;
  }
  if (param_5 != (uint *)0x0) {
    param_5[1] = 0x3f800000;
    param_5[2] = 0;
    *param_5 = 0;
  }
  return fVar12;
}
