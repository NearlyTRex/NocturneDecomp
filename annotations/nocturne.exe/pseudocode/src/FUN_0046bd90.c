// Name: FUN_0046bd90
// Address: 0046bd90
// Address Range: [[0046bd90, 0046bfdf]]
// Convention: unknown
// Signature: void FUN_0046bd90(int param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046bd90(int param_1,float *param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  byte local_98 [12];
  byte local_8c [28];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [12];
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0(local_8c,param_3);
  local_58 = *param_5 - *param_4;
  local_54 = param_5[1] - param_4[1];
  local_50 = param_5[2] - param_4[2];
  fVar5 = (float10)local_54;
  fVar9 = *(float *)(param_1 + 0x38);
  fVar6 = (float10)local_50;
  fVar10 = *(float *)(param_1 + 0x3c);
  fVar7 = (float10)_DAT_0057e3ce;
  fVar8 = (float10)round
                             ((float10)1 +
                              ((float10)local_58 / (float10)*(float *)(param_1 + 0x34)) * fVar7);
  iStack_2c = (int)ROUND(fVar8);
  fVar1 = local_5c / (float)iStack_2c;
  local_18 = iStack_2c;
  fVar5 = (float10)round((float10)1 + (fVar5 / (float10)fVar9) * fVar7);
  iStack_2c = (int)ROUND(fVar5);
  fVar9 = local_5c / (float)iStack_2c;
  local_1c = iStack_2c;
  fVar5 = (float10)round((float10)1 + (fVar6 / (float10)fVar10) * fVar7);
  local_28 = (int)ROUND(fVar5);
  fVar10 = local_5c / (float)local_28;
  iStack_2c = 0;
  if (0 < local_34) {
    do {
      local_24 = 0;
      if (0 < iStack_30) {
        do {
          iVar4 = 0;
          if (0 < local_28) {
            do {
              fVar2 = (float)_DAT_0057e3d6;
              local_4c = fVar1 * fVar2 + (float)iStack_2c * fVar1 + *param_4;
              local_48 = fVar9 * fVar2 + (float)local_24 * fVar9 + param_4[1];
              local_44 = (float)iVar4 * fVar10 + param_4[2] + fVar10 * fVar2;
              local_20 = iVar4;
              pfVar3 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                          (local_98,local_40,&local_4c);
              fStack_70 = *pfVar3 + *param_2;
              fStack_6c = pfVar3[1] + param_2[1];
              fStack_68 = pfVar3[2] + param_2[2];
              if (&local_58 != &fStack_70) {
                local_58 = fStack_70;
                local_54 = fStack_6c;
                local_50 = fStack_68;
              }
              FUN_0046c100(param_1,&local_58);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_28);
          }
          local_24 = local_24 + 1;
        } while (local_24 < iStack_30);
      }
      iStack_2c = iStack_2c + 1;
    } while (iStack_2c < local_34);
  }
  return;
}
