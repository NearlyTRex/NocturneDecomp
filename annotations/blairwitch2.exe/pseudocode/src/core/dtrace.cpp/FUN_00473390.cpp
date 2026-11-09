// Name: core_dtrace.cpp_FUN_00473390
// Address: 00473390
// Address Range: [[00473390, 004738c9]]
// Convention: __cdecl
// Signature: int __cdecl core_dtrace_cpp_FUN_00473390(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dtrace_cpp_FUN_00473390(CDemonRaytrace *this_ptr,CVector3f *start_pos,CVector3f *end_pos)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CDemonCube *pCVar5;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1080 [1007];
  byte local_a4 [12];
  float local_98;
  float local_94 [4];
  float local_84;
  double local_80;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_18;
  
  bVar7 = 0;
  fVar8 = (float10)1 / (float10)*(float *)&this_ptr->field_0x28;
  fVar9 = ((float10)*(float *)&start_pos->field_0x4 - (float10)*(float *)&this_ptr->field_0x14) /
          (float10)*(float *)&this_ptr->field_0x2c;
  fVar10 = ((float10)*(float *)&start_pos->field_0x8 - (float10)*(float *)&this_ptr->field_0x18) /
           (float10)*(float *)&this_ptr->field_0x30;
  fVar11 = ((float10)*(float *)start_pos - (float10)*(float *)&this_ptr->field_0x10) * fVar8;
  fVar8 = ((float10)*(float *)end_pos - (float10)*(float *)&this_ptr->field_0x10) * fVar8;
  local_6c = (float)fVar11;
  round();
  local_34 = (int)ROUND(fVar11);
  local_50 = (float)fVar9;
  round();
  local_30 = (int)ROUND(fVar9);
  local_58 = (float)fVar10;
  round();
  local_2c = (int)ROUND(fVar10);
  local_80 = floor((double)fVar8);
  fVar11 = (float10)local_80;
  fVar8 = ((float10)*(float *)&end_pos->field_0x4 - (float10)*(float *)&this_ptr->field_0x14) /
          (float10)*(float *)&this_ptr->field_0x2c;
  round();
  local_64 = (int)ROUND(fVar11);
  local_80 = floor((double)fVar8);
  fVar11 = (float10)local_80;
  fVar8 = ((float10)*(float *)&end_pos->field_0x8 - (float10)*(float *)&this_ptr->field_0x18) /
          (float10)*(float *)&this_ptr->field_0x30;
  round();
  local_60 = (int)ROUND(fVar11);
  iVar6 = 1;
  local_80 = floor((double)fVar8);
  fVar8 = (float10)*(float *)end_pos;
  fVar11 = (float10)*(float *)&end_pos->field_0x4;
  fVar9 = (float10)*(float *)&end_pos->field_0x8;
  fVar10 = (float10)local_80;
  round();
  iVar4 = local_34;
  iVar3 = local_64;
  local_5c = (int)ROUND(fVar10);
  local_98 = (float)(fVar8 - (float10)*(float *)start_pos);
  local_94[0] = (float)(fVar11 - (float10)*(float *)&start_pos->field_0x4);
  local_94[1] = (float)(fVar9 - (float10)*(float *)&start_pos->field_0x8);
  local_94[2] = (float)(fVar8 - (float10)*(float *)start_pos);
  local_94[(uint)bVar7 * -2 + 3] = local_94[(uint)bVar7 * -2];
  local_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       local_94[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  if (((iVar4 != iVar3) || (local_30 != local_60)) ||
     (iVar3 = local_2c, iVar4 = local_24, iVar2 = local_20, local_2c != local_5c)) {
    fVar1 = SQRT(local_84 * local_84 + local_94[2] * local_94[2] + local_94[3] * local_94[3]);
    if (fVar1 <= 0.0) {
      return 0;
    }
    fVar11 = (float10)local_94[2];
    fVar10 = (float10)_DAT_005d1b57 / (float10)fVar1;
    fVar8 = ABS(fVar11) * fVar10;
    fVar9 = ABS((float10)local_94[3]) * fVar10;
    fVar10 = ABS((float10)local_84) * fVar10;
    round();
    local_3c = (int)ROUND(fVar8);
    fVar8 = (float10)0;
    round();
    round();
    local_40 = (int)ROUND(fVar9);
    local_38 = (float)(int)ROUND(fVar10);
    if (fVar11 < fVar8) {
      iVar3 = local_34 - local_64;
      local_54 = local_6c - (float)local_34;
      local_48 = -1;
    }
    else {
      iVar3 = local_64 - local_34;
      local_54 = (float)(local_34 + 1) - local_6c;
      local_48 = 1;
    }
    if (local_94[3] < 0.0) {
      iVar4 = local_30 - local_60;
      local_70 = local_50 - (float)local_30;
      local_4c = -1;
    }
    else {
      iVar4 = local_60 - local_30;
      local_70 = (float)(local_30 + 1) - local_50;
      local_4c = 1;
    }
    if (local_84 < 0.0) {
      iVar6 = local_2c - local_5c;
      local_68 = local_58 - (float)local_2c;
      local_44 = -1;
    }
    else {
      iVar6 = local_5c - local_2c;
      local_68 = (float)(local_2c + 1) - local_58;
      local_44 = 1;
    }
    iVar6 = iVar3 + 1 + iVar4 + iVar6;
    fVar9 = (float10)local_40 * (float10)local_68;
    fVar10 = (float10)(int)local_38 * (float10)local_54;
    fVar8 = (float10)(int)local_38 * (float10)local_70;
    fVar11 = (float10)local_40 * (float10)local_54 - (float10)local_3c * (float10)local_70;
    fVar12 = (float10)local_3c * (float10)local_68;
    local_18 = local_38;
    round();
    fVar9 = fVar9 - fVar8;
    local_28 = (int)ROUND(fVar11);
    round();
    fVar10 = fVar10 - fVar12;
    local_24 = (int)ROUND(fVar9);
    round();
    iVar3 = local_2c;
    iVar4 = local_24;
    iVar2 = (int)ROUND(fVar10);
  }
  while (((local_20 = iVar2, local_24 = iVar4, local_2c = iVar3,
          pCVar5 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                             (this_ptr,local_34,local_30,local_2c), pCVar5 == (CDemonCube *)0x0 ||
          (local_18 = (float)core_dcube_cpp_FUN_00446b60(pCVar5,start_pos,local_94 + 2,local_a4),
          local_18 < 0.0)) || (1.0 < local_18))) {
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    iVar3 = local_2c + local_44;
    iVar4 = local_24 + local_40;
    iVar2 = local_20 - local_3c;
    if (local_28 < 0) {
      if (local_20 < 0) {
        local_34 = local_34 + local_48;
        local_28 = local_28 + local_40;
        iVar3 = local_2c;
        iVar4 = local_24;
        iVar2 = local_20 + (int)local_38;
      }
    }
    else if (-1 < local_24) {
      local_30 = local_30 + local_4c;
      local_28 = local_28 - local_3c;
      iVar3 = local_2c;
      iVar4 = local_24 - (int)local_38;
      iVar2 = local_20;
    }
  }
  return 1;
}
