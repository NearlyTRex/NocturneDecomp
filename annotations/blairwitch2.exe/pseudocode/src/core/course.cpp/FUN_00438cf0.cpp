// Name: core_course.cpp_FUN_00438cf0
// Address: 00438cf0
// Address Range: [[00438cf0, 00439074]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00438cf0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_FUN_00438cf0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CCourseFrame *pCVar4;
  CQuaternion4f *pCVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float10 fVar10;
  float afStackY_1868 [1513];
  float local_a8;
  float local_a4;
  CQuaternion4f local_9c;
  float local_8c;
  float afStack_88 [3];
  CCourseFrame local_7c;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  byte local_40 [32];
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar3 = this_ptr->len + -1;
      local_14 = iVar3;
      if (time < (float)iVar3) {
        fVar9 = (float10)time;
        fVar10 = fVar9;
        round();
        local_18 = (int)ROUND(fVar9);
        local_14 = local_18;
        iVar3 = local_18 + 1;
        local_a4 = (float)(fVar10 - (float10)local_18);
      }
      else {
        local_18 = iVar3;
        local_a4 = 0.0;
      }
    }
    else {
      local_18 = this_ptr->loop;
      iVar3 = 0;
      local_a4 = 0.0;
    }
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      local_40._24_8_ = floor((double)(time / fVar1));
      local_a8 = time - (float)(double)local_40._24_8_ * fVar1;
    }
    else {
      local_40._24_8_ = floor((double)(-time / fVar1));
      local_a8 = (float)(double)local_40._24_8_ * fVar1 + time;
      if (local_a8 < 0.0) {
        local_a8 = local_a8 + fVar1;
      }
    }
    fVar9 = (float10)local_a8;
    fVar10 = fVar9;
    round();
    local_18 = (int)ROUND(fVar9);
    local_14 = local_18;
    iVar3 = local_18 + 1;
    local_a4 = (float)(fVar10 - (float10)local_18);
    if (this_ptr->len <= iVar3) {
      iVar3 = 0;
    }
  }
  iVar2 = local_18;
  local_20 = local_18 * 0x1c;
  if ((double)local_a4 <= _DAT_005ce07a) {
    pCVar4 = this_ptr->frames + local_18;
    if (&local_7c != pCVar4) {
      local_7c.pos.x = (pCVar4->pos).x;
      local_7c.pos.y = (pCVar4->pos).y;
      local_7c.pos.z = (pCVar4->pos).z;
    }
    pCVar5 = &this_ptr->frames[local_18].orient;
  }
  else {
    pCVar4 = this_ptr->frames;
    local_4c = pCVar4[iVar3].pos.x * local_a4;
    fVar1 = 1.0 - local_a4;
    local_48 = pCVar4[iVar3].pos.y * local_a4;
    local_44 = pCVar4[iVar3].pos.z * local_a4;
    local_7c.orient.w = local_4c;
    local_60[(uint)bVar8 * -2 + -3] = local_60[(uint)bVar8 * -2 + 6];
    local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2] =
         local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    local_1c = fVar1;
    local_60[2] = pCVar4[iVar2].pos.x * fVar1;
    local_60[3] = pCVar4[iVar2].pos.y * fVar1;
    local_50 = pCVar4[iVar2].pos.z * fVar1;
    local_40._12_4_ = local_60[2];
    local_60[(uint)bVar8 * -2 + 0xc] = local_60[(uint)bVar8 * -2 + 3];
    local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    local_7c.orient.z = (float)local_40._12_4_ + local_7c.orient.w;
    local_60[0] = (float)local_40._16_4_ + local_7c.orient.x;
    local_60[1] = (float)local_40._20_4_ + local_7c.orient.y;
    local_40._0_4_ = (float)local_40._12_4_ + local_7c.orient.w;
    local_60[(uint)bVar8 * -2 + 9] = local_60[(uint)bVar8 * -2];
    local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         local_60[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&local_7c != (CCourseFrame *)(local_60 + 8)) {
      local_7c.pos.x = (float)local_40._0_4_;
      local_7c.pos.y = (float)local_40._4_4_;
      local_7c.pos.z = (float)local_40._8_4_;
    }
    core_xform_cpp_slerpQuaternion_FUN_00593df0
              (&this_ptr->frames[local_18].orient,&this_ptr->frames[iVar3].orient,local_a4);
    pCVar5 = &local_9c;
  }
  pfVar7 = (float *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
  local_8c = pCVar5->w;
  pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
  afStack_88[(uint)bVar8 * -2] = *pfVar7;
  afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = *pfVar6;
  (afStack_88 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       pfVar6[(uint)bVar8 * -2 + 1];
  if (&local_7c != (CCourseFrame *)out_pos) {
    out_pos->x = local_7c.pos.x;
    out_pos->y = local_7c.pos.y;
    out_pos->z = local_7c.pos.z;
    pfVar7 = (float *)((int)out_orient + (uint)bVar8 * -8 + 4);
    out_orient->w = local_8c;
    pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
    *pfVar7 = afStack_88[(uint)bVar8 * -2];
    *pfVar6 = afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pfVar6[(uint)bVar8 * -2 + 1] =
         (afStack_88 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    return;
  }
  pfVar7 = (float *)((int)out_orient + (uint)bVar8 * -8 + 4);
  out_orient->w = local_8c;
  pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
  *pfVar7 = afStack_88[(uint)bVar8 * -2];
  *pfVar6 = afStack_88[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  pfVar6[(uint)bVar8 * -2 + 1] =
       (afStack_88 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  return;
}
