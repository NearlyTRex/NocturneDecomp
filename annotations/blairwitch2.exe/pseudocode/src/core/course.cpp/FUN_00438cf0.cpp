// Name: core_course.cpp_FUN_00438cf0
// Address: 00438cf0
// Address Range: [[00438cf0, 00439074]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00438cf0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_FUN_00438cf0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  CQuaternion4f *pCVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1868 [1513];
  float local_a8;
  float local_a4;
  uint local_8c;
  byte local_7c [8];
  float local_74;
  float local_70;
  float local_6c [4];
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
  float local_34;
  float local_30;
  float local_2c;
  double local_28;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  uint *puVar8;
  
  bVar10 = 0;
  if (*(int *)(this_ptr + 8) == 0) {
    if (0.0 < time) {
      iVar5 = *(int *)this_ptr + -1;
      local_14 = iVar5;
      if (time < (float)iVar5) {
        fVar11 = (float10)time;
        fVar12 = fVar11;
        round();
        local_18 = (int)ROUND(fVar11);
        local_14 = local_18;
        iVar5 = local_18 + 1;
        local_a4 = (float)(fVar12 - (float10)local_18);
      }
      else {
        local_18 = iVar5;
        local_a4 = 0.0;
      }
    }
    else {
      local_18 = *(int *)(this_ptr + 8);
      iVar5 = 0;
      local_a4 = 0.0;
    }
  }
  else {
    fVar2 = (float)*(int *)this_ptr;
    if (0.0 <= time) {
      local_28 = floor((double)(time / fVar2));
      local_a8 = time - (float)local_28 * fVar2;
    }
    else {
      local_28 = floor((double)(-time / fVar2));
      local_a8 = (float)local_28 * fVar2 + time;
      if (local_a8 < 0.0) {
        local_a8 = local_a8 + fVar2;
      }
    }
    fVar11 = (float10)local_a8;
    fVar12 = fVar11;
    round();
    local_18 = (int)ROUND(fVar11);
    local_14 = local_18;
    iVar5 = local_18 + 1;
    local_a4 = (float)(fVar12 - (float10)local_18);
    if (*(int *)this_ptr <= iVar5) {
      iVar5 = 0;
    }
  }
  iVar4 = local_18 * 0x1c;
  local_20 = iVar4;
  if ((double)local_a4 <= _DAT_005ce07a) {
    pfVar6 = (float *)(*(int *)(this_ptr + 4) + iVar4);
    if ((float *)local_7c != pfVar6) {
      local_7c._0_4_ = *pfVar6;
      local_7c._4_4_ = pfVar6[1];
      local_74 = pfVar6[2];
    }
    puVar7 = (uint *)(*(int *)(this_ptr + 4) + 0xc + local_18 * 0x1c);
  }
  else {
    iVar3 = iVar5 * 0x1c;
    iVar1 = *(int *)(this_ptr + 4);
    local_4c = *(float *)(iVar1 + iVar3) * local_a4;
    fVar2 = 1.0 - local_a4;
    local_48 = *(float *)(iVar1 + 4 + iVar3) * local_a4;
    local_44 = *(float *)(iVar1 + 8 + iVar3) * local_a4;
    local_70 = local_4c;
    local_6c[(uint)bVar10 * -2] = local_6c[(uint)bVar10 * -2 + 9];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    local_1c = fVar2;
    local_58 = *(float *)(iVar1 + iVar4) * fVar2;
    local_54 = *(float *)(iVar1 + 4 + iVar4) * fVar2;
    local_50 = *(float *)(iVar1 + 8 + iVar4) * fVar2;
    local_34 = local_58;
    local_6c[(uint)bVar10 * -2 + 0xf] = local_6c[(uint)bVar10 * -2 + 6];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    local_6c[2] = local_34 + local_70;
    local_6c[3] = local_30 + local_6c[0];
    local_5c = local_2c + local_6c[1];
    local_40 = local_34 + local_70;
    local_6c[(uint)bVar10 * -2 + 0xc] = local_6c[(uint)bVar10 * -2 + 3];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if ((float *)local_7c != local_6c + 0xb) {
      local_7c._0_4_ = local_40;
      local_7c._4_4_ = local_3c;
      local_74 = local_38;
    }
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (local_18 * 0x1c + *(int *)(this_ptr + 4) + 0xc,
               iVar5 * 0x1c + *(int *)(this_ptr + 4) + 0xc,local_a4);
    puVar7 = (uint *)&stack0xffffff64;
  }
  puVar8 = puVar7 + (uint)bVar10 * -2 + 1;
  local_8c = *puVar7;
  *(uint *)(&stack0xffffff78 + (uint)bVar10 * -8) = *puVar8;
  *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       puVar8[(uint)bVar10 * -2 + 1];
  *(uint *)
   ((int)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8) + ((uint)bVar10 * -2 + 1) * 4) =
       (puVar8 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  if ((CVector3f *)local_7c != out_pos) {
    *(uint *)out_pos = local_7c._0_4_;
    *(uint *)&out_pos->field_0x4 = local_7c._4_4_;
    *(float *)&out_pos->field_0x8 = local_74;
    pCVar9 = out_orient + (uint)bVar10 * -8 + 4;
    *(uint *)out_orient = local_8c;
    *(uint *)pCVar9 = *(uint *)(&stack0xffffff78 + (uint)bVar10 * -8);
    *(uint *)(pCVar9 + (uint)bVar10 * -8 + 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
    *(uint *)(pCVar9 + (uint)bVar10 * -8 + 4 + (uint)bVar10 * -8 + 4) =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
          ((uint)bVar10 * -2 + 1) * 4);
    return;
  }
  pCVar9 = out_orient + (uint)bVar10 * -8 + 4;
  *(uint *)out_orient = local_8c;
  *(uint *)pCVar9 = *(uint *)(&stack0xffffff78 + (uint)bVar10 * -8);
  *(uint *)(pCVar9 + (uint)bVar10 * -8 + 4) =
       *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
  *(uint *)(pCVar9 + (uint)bVar10 * -8 + 4 + (uint)bVar10 * -8 + 4) =
       *(uint *)
        ((int)(&stack0xffffff7c + (uint)bVar10 * -8 + (uint)bVar10 * -8) +
        ((uint)bVar10 * -2 + 1) * 4);
  return;
}
