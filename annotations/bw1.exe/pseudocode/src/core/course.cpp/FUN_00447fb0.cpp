// Name: core_course.cpp_FUN_00447fb0
// Address: 00447fb0
// Address Range: [[00447fb0, 00448334]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00447fb0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_FUN_00447fb0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3f *pCVar5;
  CCourseFrame *pCVar6;
  float *pfVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float afStackY_1868 [1513];
  float local_a8;
  float local_a4;
  CCourseFrame local_9c [16];
  float local_8c;
  float afStack_88 [3];
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
  CCourseFrame *pCVar7;
  
  bVar10 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar4 = this_ptr->len + -1;
      local_14 = iVar4;
      if (time < (float)iVar4) {
        fVar11 = (float10)time;
        fVar12 = fVar11;
        round();
        local_18 = (int)ROUND(fVar11);
        local_14 = local_18;
        iVar4 = local_18 + 1;
        local_a4 = (float)(fVar12 - (float10)local_18);
      }
      else {
        local_18 = iVar4;
        local_a4 = 0.0;
      }
    }
    else {
      local_18 = this_ptr->loop;
      iVar4 = 0;
      local_a4 = 0.0;
    }
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      local_28 = floor((double)(time / fVar1));
      local_a8 = time - (float)local_28 * fVar1;
    }
    else {
      local_28 = floor((double)(-time / fVar1));
      local_a8 = (float)local_28 * fVar1 + time;
      if (local_a8 < 0.0) {
        local_a8 = local_a8 + fVar1;
      }
    }
    fVar11 = (float10)local_a8;
    fVar12 = fVar11;
    round();
    local_18 = (int)ROUND(fVar11);
    local_14 = local_18;
    iVar4 = local_18 + 1;
    local_a4 = (float)(fVar12 - (float10)local_18);
    if (this_ptr->len <= iVar4) {
      iVar4 = 0;
    }
  }
  iVar3 = local_18 * 0x1c;
  local_20 = iVar3;
  if ((double)local_a4 <= _DAT_005d71e6) {
    pCVar5 = (CVector3f *)(this_ptr->frames + iVar3);
    if (&local_7c != pCVar5) {
      local_7c.x = pCVar5->x;
      local_7c.y = pCVar5->y;
      local_7c.z = pCVar5->z;
    }
    pCVar7 = this_ptr->frames + local_18 * 0x1c + 0xc;
  }
  else {
    iVar2 = iVar4 * 0x1c;
    pCVar7 = this_ptr->frames;
    fVar1 = 1.0 - local_a4;
    local_4c = *(float *)(pCVar7 + iVar2) * local_a4;
    local_48 = *(float *)(pCVar7 + iVar2 + 4) * local_a4;
    local_44 = *(float *)(pCVar7 + iVar2 + 8) * local_a4;
    local_70 = *(float *)(pCVar7 + iVar2) * local_a4;
    local_6c[(uint)bVar10 * -2] = local_6c[(uint)bVar10 * -2 + 9];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    local_1c = fVar1;
    local_58 = *(float *)(pCVar7 + iVar3) * fVar1;
    local_54 = *(float *)(pCVar7 + iVar3 + 4) * fVar1;
    local_50 = *(float *)(pCVar7 + iVar3 + 8) * fVar1;
    local_34 = *(float *)(pCVar7 + iVar3) * fVar1;
    local_6c[(uint)bVar10 * -2 + 0xf] = local_6c[(uint)bVar10 * -2 + 6];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    local_6c[2] = local_34 + local_70;
    local_6c[3] = local_30 + local_6c[0];
    local_5c = local_2c + local_6c[1];
    local_40.x = local_34 + local_70;
    local_6c[(uint)bVar10 * -2 + 0xc] = local_6c[(uint)bVar10 * -2 + 3];
    local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    if (&local_7c != (CVector3f *)(local_6c + 0xb)) {
      local_7c.x = local_40.x;
      local_7c.y = local_40.y;
      local_7c.z = local_40.z;
    }
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              (this_ptr->frames + local_18 * 0x1c + 0xc,this_ptr->frames + iVar4 * 0x1c + 0xc,
               local_a4);
    pCVar7 = local_9c;
  }
  pCVar6 = pCVar7 + (uint)bVar10 * -8 + 4;
  local_8c = *(float *)pCVar7;
  afStack_88[(uint)bVar10 * -2] = *(float *)pCVar6;
  afStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = *(float *)(pCVar6 + (uint)bVar10 * -8 + 4)
  ;
  (afStack_88 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1] =
       *(float *)(pCVar6 + (uint)bVar10 * -8 + 4 + (uint)bVar10 * -8 + 4);
  if (&local_7c != out_pos) {
    out_pos->x = local_7c.x;
    out_pos->y = local_7c.y;
    out_pos->z = local_7c.z;
    pfVar8 = (float *)((int)out_orient + (uint)bVar10 * -8 + 4);
    out_orient->w = local_8c;
    pfVar9 = pfVar8 + (uint)bVar10 * -2 + 1;
    *pfVar8 = afStack_88[(uint)bVar10 * -2];
    *pfVar9 = afStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    pfVar9[(uint)bVar10 * -2 + 1] =
         (afStack_88 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
    return;
  }
  pfVar8 = (float *)((int)out_orient + (uint)bVar10 * -8 + 4);
  out_orient->w = local_8c;
  pfVar9 = pfVar8 + (uint)bVar10 * -2 + 1;
  *pfVar8 = afStack_88[(uint)bVar10 * -2];
  *pfVar9 = afStack_88[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  pfVar9[(uint)bVar10 * -2 + 1] =
       (afStack_88 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
  return;
}
