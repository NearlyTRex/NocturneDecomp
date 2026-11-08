// Name: FUN_00463460
// Address: 00463460
// Address Range: [[00463460, 0046381e]]
// Convention: unknown
// Signature: void FUN_00463460(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463460(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_107c [998];
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  float local_d8;
  byte local_d4 [4];
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float afStack_90 [5];
  uint local_7c;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c [4];
  float local_2c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
  FUN_004837b0(DAT_00612560,param_1 + 4);
  FUN_0045f840(param_1 + 0x10);
  uVar9 = 0;
  pfVar8 = afStack_90 + 2;
  afStack_90[2] = (float)local_7c;
  afStack_90[(uint)bVar4 * -2 + 3] = afStack_90[(uint)bVar4 * -2 + 6];
  piVar7 = DAT_00612560;
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  FUN_00483850(piVar7,pfVar8,uVar9);
  local_d8 = ((float)_DAT_005d915c / *(float *)(param_1 + 0x38)) * *(float *)(param_1 + 0x140);
  iVar3 = 0;
  local_98 = *(float *)(param_1 + 0x140);
  iVar2 = 0;
  do {
    fVar5 = (float10)iVar3 * (float10)_DAT_005d9164 * (float10)_DAT_005d916c;
    fVar6 = (float10)fcos(fVar5);
    fVar5 = (float10)fsin(fVar5);
    local_a0 = (float)(fVar6 * (float10)local_d8);
    local_9c = (float)(fVar5 * (float10)local_d8);
    local_4c = (int)ROUND(local_a0 * _DAT_005febd0);
    local_48 = (int)ROUND(local_9c * _DAT_005febd0);
    local_44 = (int)ROUND(local_98 * _DAT_005febd0);
    local_14 = iVar3;
    FUN_00580173(*DAT_00612560 + iVar2,&local_4c);
    piVar7 = DAT_00612560;
    iVar3 = iVar3 + 1;
    *(uint *)(iVar2 + 0x20 + *DAT_00612560) = 0;
    iVar2 = iVar2 + 0x30;
  } while (iVar3 < 0x10);
  local_ac = (int)ROUND(_DAT_01b2ee3c * _DAT_005febd0);
  local_a8 = (int)ROUND(_DAT_01b2ee40 * _DAT_005febd0);
  local_a4 = (int)ROUND(_DAT_01b2ee44 * _DAT_005febd0);
  FUN_00580173(*piVar7 + 0x300,&local_ac);
  piVar7 = DAT_00612560;
  *(uint *)(*DAT_00612560 + 800) = 0xffff;
  FUN_00483d80(piVar7,1);
  FUN_00483ae0(DAT_00612560);
  bVar1 = false;
  local_70 = local_58;
  afStack_90[(uint)bVar4 * -2 + 9] = afStack_90[(uint)bVar4 * -2 + 0xf];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10];
  local_3c[2] = local_70 - *(float *)(param_1 + 4);
  pfVar8 = afStack_90 + 0xb;
  local_3c[3] = local_6c - *(float *)(param_1 + 8);
  local_2c = local_68 - *(float *)(param_1 + 0xc);
  local_64 = local_3c[2];
  afStack_90[(uint)bVar4 * -2 + 0xc] = local_3c[(uint)bVar4 * -2 + 3];
  afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd] =
       local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  FUN_0045f700(param_1 + 0x10,pfVar8);
  local_40 = local_94;
  local_3c[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
  local_3c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (afStack_90 + 0xb != &local_40) {
    local_64 = local_40;
    local_60 = local_3c[0];
    local_5c = local_3c[1];
  }
  local_64 = *(float *)(param_1 + 0x38) * (float)_DAT_005d9174 * local_64;
  local_60 = (float)_DAT_005d9174 * *(float *)(param_1 + 0x38) * local_60;
  if ((((local_64 < local_5c) && (local_18 = -local_5c, local_18 < local_64)) &&
      (local_60 < local_5c)) && ((local_18 < local_60 && (local_5c < *(float *)(param_1 + 0x140)))))
  {
    bVar1 = true;
  }
  local_c0 = 0;
  local_c4 = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d0 = 3;
  if (bVar1) {
    FUN_00450ee0();
  }
  else {
    local_b4 = 0x10;
    iVar2 = 0;
    do {
      if (iVar2 == 0xf) {
        local_bc = 0;
      }
      else {
        local_bc = iVar2 + 1;
      }
      iVar3 = iVar2 + 1;
      local_b8 = iVar2;
      FUN_00483c50(DAT_00612560,local_d4,&LAB_00450f20);
      iVar2 = iVar3;
    } while (iVar3 < 0x10);
  }
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0xffff;
  fVar5 = (float10)*(float *)(param_1 + 0x140) * (float10)_DAT_005d917c;
  FUN_005c03a0();
  local_c0 = (int)ROUND(fVar5);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    local_bc = 0;
    local_b8 = iVar2;
    local_b4 = iVar3;
    FUN_00483c50(DAT_00612560,local_d4,&LAB_00450f20);
    iVar2 = iVar3;
  } while (iVar3 < 0xe);
  thunk_FUN_005084b0(DAT_00612560);
  FUN_00483d80(DAT_00612560,0);
  FUN_00465060(param_1);
  return;
}
