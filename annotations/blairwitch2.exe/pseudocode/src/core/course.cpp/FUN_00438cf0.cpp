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
  CVector3f *pCVar6;
  float *pfVar7;
  uint *puVar9;
  uint *puVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1868 [1513];
  float local_a8;
  float local_a4;
  float local_8c;
  CVector3f local_7c;
  float local_70;
  float local_6c [4];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  double local_28;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  float *pfVar8;
  
  bVar11 = 0;
  if (*(int *)(this_ptr + 8) == 0) {
    if (0.0 < time) {
      iVar5 = *(int *)this_ptr + -1;
      local_14 = iVar5;
      if (time < (float)iVar5) {
        fVar12 = (float10)time;
        fVar13 = fVar12;
        round();
        local_18 = (int)ROUND(fVar12);
        local_14 = local_18;
        iVar5 = local_18 + 1;
        local_a4 = (float)(fVar13 - (float10)local_18);
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
    fVar12 = (float10)local_a8;
    fVar13 = fVar12;
    round();
    local_18 = (int)ROUND(fVar12);
    local_14 = local_18;
    iVar5 = local_18 + 1;
    local_a4 = (float)(fVar13 - (float10)local_18);
    if (*(int *)this_ptr <= iVar5) {
      iVar5 = 0;
    }
  }
  iVar4 = local_18 * 0x1c;
  local_20 = iVar4;
  if ((double)local_a4 <= _DAT_005ce07a) {
    pCVar6 = (CVector3f *)(*(int *)(this_ptr + 4) + iVar4);
    if (&local_7c != pCVar6) {
      local_7c.x = pCVar6->x;
      local_7c.y = pCVar6->y;
      local_7c.z = pCVar6->z;
    }
    pfVar7 = (float *)(*(int *)(this_ptr + 4) + 0xc + local_18 * 0x1c);
  }
  else {
    iVar3 = iVar5 * 0x1c;
    iVar1 = *(int *)(this_ptr + 4);
    local_4c = *(float *)(iVar1 + iVar3) * local_a4;
    fVar2 = 1.0 - local_a4;
    local_48 = *(float *)(iVar1 + 4 + iVar3) * local_a4;
    local_44 = *(float *)(iVar1 + 8 + iVar3) * local_a4;
    local_70 = local_4c;
    local_6c[(uint)bVar11 * -2] = local_6c[(uint)bVar11 * -2 + 9];
    local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
    local_1c = fVar2;
    local_58 = *(float *)(iVar1 + iVar4) * fVar2;
    local_54 = *(float *)(iVar1 + 4 + iVar4) * fVar2;
    local_50 = *(float *)(iVar1 + 8 + iVar4) * fVar2;
    local_34 = local_58;
    local_6c[(uint)bVar11 * -2 + 0xf] = local_6c[(uint)bVar11 * -2 + 6];
    local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
         local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    local_6c[2] = local_34 + local_70;
    local_6c[3] = local_30 + local_6c[0];
    local_5c = local_2c + local_6c[1];
    local_40.x = local_34 + local_70;
    local_6c[(uint)bVar11 * -2 + 0xc] = local_6c[(uint)bVar11 * -2 + 3];
    local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         local_6c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    if (&local_7c != (CVector3f *)(local_6c + 0xb)) {
      local_7c.x = local_40.x;
      local_7c.y = local_40.y;
      local_7c.z = local_40.z;
    }
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (local_18 * 0x1c + *(int *)(this_ptr + 4) + 0xc,
               iVar5 * 0x1c + *(int *)(this_ptr + 4) + 0xc,local_a4);
    pfVar7 = (float *)&stack0xffffff64;
  }
  pfVar8 = pfVar7 + (uint)bVar11 * -2 + 1;
  local_8c = *pfVar7;
  *(float *)(&stack0xffffff78 + (uint)bVar11 * -8) = *pfVar8;
  *(float *)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
       pfVar8[(uint)bVar11 * -2 + 1];
  *(float *)((int)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
            ((uint)bVar11 * -2 + 1) * 4) = (pfVar8 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  if (&local_7c != out_pos) {
    out_pos->x = local_7c.x;
    out_pos->y = local_7c.y;
    out_pos->z = local_7c.z;
    puVar9 = (uint *)((int)out_orient + (uint)bVar11 * -8 + 4);
    out_orient->w = local_8c;
    puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
    *puVar9 = *(uint *)(&stack0xffffff78 + (uint)bVar11 * -8);
    *puVar10 = *(uint *)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
    puVar10[(uint)bVar11 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
          ((uint)bVar11 * -2 + 1) * 4);
    return;
  }
  puVar9 = (uint *)((int)out_orient + (uint)bVar11 * -8 + 4);
  out_orient->w = local_8c;
  puVar10 = puVar9 + (uint)bVar11 * -2 + 1;
  *puVar9 = *(uint *)(&stack0xffffff78 + (uint)bVar11 * -8);
  *puVar10 = *(uint *)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
  puVar10[(uint)bVar11 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff7c + (uint)bVar11 * -8 + (uint)bVar11 * -8) +
        ((uint)bVar11 * -2 + 1) * 4);
  return;
}
