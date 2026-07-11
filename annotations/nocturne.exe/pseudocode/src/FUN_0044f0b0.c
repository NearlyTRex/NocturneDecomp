// Name: FUN_0044f0b0
// Address: 0044f0b0
// Address Range: [[0044f0b0, 0044f426]]
// Convention: unknown
// Signature: void FUN_0044f0b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044f0b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  byte local_a4 [4];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_7c;
  int local_78;
  int local_74;
  byte local_70 [12];
  int local_64;
  int local_60;
  int local_5c;
  byte local_58 [12];
  byte local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_18;
  int local_14;
  
  FUN_00460a00(DAT_005ae704,param_1 + 0x104);
  FUN_0044dbd0(param_1 + 0x110,local_4c);
  FUN_00460aa0(DAT_005ae704,local_4c,0);
  fVar1 = *(float *)(param_1 + 0x138);
  fVar3 = (float)_DAT_0057c7b6;
  fVar2 = *(float *)(param_1 + 0x100);
  iVar8 = 0;
  local_38 = *(float *)(param_1 + 0x100);
  iVar7 = 0;
  do {
    fVar9 = (float10)iVar8 * (float10)_DAT_0057c7be * (float10)_DAT_0057c7c6;
    fVar10 = (float10)fcos(fVar9);
    fVar9 = (float10)fsin(fVar9);
    fVar11 = (float10)((fVar3 / fVar1) * fVar2);
    local_40 = (float)(fVar10 * fVar11);
    local_3c = (float)(fVar9 * fVar11);
    local_64 = (int)ROUND(local_40 * _DAT_0059c030);
    local_60 = (int)ROUND(local_3c * _DAT_0059c030);
    local_5c = (int)ROUND(local_38 * _DAT_0059c030);
    local_14 = iVar8;
    FUN_0053075c(*DAT_005ae704 + iVar7,&local_64);
    piVar4 = DAT_005ae704;
    iVar8 = iVar8 + 1;
    *(uint *)(iVar7 + 0x20 + *DAT_005ae704) = 0;
    iVar7 = iVar7 + 0x30;
  } while (iVar8 < 0x10);
  local_7c = (int)ROUND(_DAT_01abb4b8 * _DAT_0059c030);
  local_78 = (int)ROUND(_DAT_01abb4bc * _DAT_0059c030);
  local_74 = (int)ROUND(_DAT_01abb4c0 * _DAT_0059c030);
  FUN_0053075c(*piVar4 + 0x300,&local_7c);
  piVar4 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 800) = 0xffff;
  FUN_00460fb0(piVar4,1);
  pfVar5 = (float *)FUN_00460d30(DAT_005ae704,local_58);
  local_34 = *pfVar5 - *(float *)(param_1 + 0x104);
  local_30 = pfVar5[1] - *(float *)(param_1 + 0x108);
  bVar6 = false;
  local_2c = pfVar5[2] - *(float *)(param_1 + 0x10c);
  pfVar5 = (float *)FUN_0044daa0(param_1 + 0x110,local_70,&local_34);
  if (&local_34 != pfVar5) {
    local_34 = *pfVar5;
    local_30 = pfVar5[1];
    local_2c = pfVar5[2];
  }
  local_34 = *(float *)(param_1 + 0x138) * (float)_DAT_0057c7ce * local_34;
  local_30 = (float)_DAT_0057c7ce * *(float *)(param_1 + 0x138) * local_30;
  if ((((local_34 < local_2c) && (local_18 = -local_2c, local_18 < local_34)) &&
      (local_30 < local_2c)) && ((local_18 < local_30 && (local_2c < *(float *)(param_1 + 0x100)))))
  {
    bVar6 = true;
  }
  local_90 = 0;
  local_94 = 0;
  local_98 = 0;
  local_9c = 0;
  local_a0 = 3;
  if (bVar6) {
    FUN_00444140();
  }
  else {
    local_84 = 0x10;
    iVar7 = 0;
    do {
      if (iVar7 == 0xf) {
        local_8c = 0;
      }
      else {
        local_8c = iVar7 + 1;
      }
      iVar8 = iVar7 + 1;
      local_88 = iVar7;
      FUN_00460e80(DAT_005ae704,local_a4,&LAB_00444180);
      iVar7 = iVar8;
    } while (iVar8 < 0x10);
  }
  local_9c = 0;
  local_98 = 0;
  local_94 = 0xffff;
  fVar9 = (float10)*(float *)(param_1 + 0x100) * (float10)_DAT_0057c7d6;
  FUN_00563a30();
  local_90 = (int)ROUND(fVar9);
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    local_8c = 0;
    local_88 = iVar7;
    local_84 = iVar8;
    FUN_00460e80(DAT_005ae704,local_a4,&LAB_00444180);
    iVar7 = iVar8;
  } while (iVar8 < 0xe);
  thunk_FUN_004cdbc0(DAT_005ae704);
  FUN_00460fb0(DAT_005ae704,0);
  FUN_00451350(param_1);
  return;
}
