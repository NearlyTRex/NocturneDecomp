// Name: core_course.cpp_CCourse_interpolate_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar2;
  CCourseFrame *pCVar2;
  CQuaternion4f *pCVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  CCourseFrame *pCVar4;
  float *pfVar5;
  float *pfVar6;
  byte bVar7;
  float afStackY_1850 [1517];
  float local_7c;
  float local_78;
  float afStack_70 [3];
  CQuaternion4f local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [32];
  float local_1c;
  int local_18;
  int local_14;
  float fVar1;
  
  bVar7 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar5 = this_ptr->len + -1;
      local_14 = iVar5;
      if (time < (float)iVar5) {
        local_18 = (int)ROUND(ROUND(time));
        local_14 = local_18;
        local_78 = time - (float)local_18;
        iVar5 = local_18 + 1;
      }
      else {
        local_18 = iVar5;
        local_78 = 0.0;
      }
      goto LAB_004427da;
    }
    local_18 = this_ptr->loop;
    local_78 = 0.0;
  }
  else {
    fVar2 = (float)this_ptr->len;
    if (0.0 <= time) {
      local_3c._24_8_ = floor((double)(time / fVar2));
      local_7c = time - (float)(double)local_3c._24_8_ * fVar2;
    }
    else {
      local_3c._24_8_ = floor((double)(-time / fVar2));
      local_7c = (float)(double)local_3c._24_8_ * fVar2 + time;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar2;
      }
    }
    local_18 = (int)ROUND(ROUND(local_7c));
    local_14 = local_18;
    local_78 = local_7c - (float)local_18;
    iVar5 = local_18 + 1;
    if (iVar5 < this_ptr->len) goto LAB_004427da;
  }
  iVar5 = 0;
LAB_004427da:
  if ((double)local_78 <= 0.001) {
    pCVar4 = this_ptr->frames + local_18;
    if ((CCourseFrame *)local_3c != pCVar4) {
      local_3c._0_4_ = (pCVar4->pos).x;
      local_3c._4_4_ = (pCVar4->pos).y;
      local_3c._8_4_ = (pCVar4->pos).z;
    }
    pCVar3 = &this_ptr->frames[local_18].orient;
  }
  else {
    pCVar2 = this_ptr->frames + iVar5;
    local_1c = 1.0 - local_78;
    pCVar4 = this_ptr->frames;
    local_3c._12_4_ = pCVar4[local_18].pos.x * local_1c + (pCVar2->pos).x * local_78;
    local_3c._16_4_ = pCVar4[local_18].pos.y * local_1c + (pCVar2->pos).y * local_78;
    local_3c._20_4_ = pCVar4[local_18].pos.z * local_1c + local_78 * (pCVar2->pos).z;
    if (local_3c != local_3c + 0xc) {
      local_3c._0_4_ = local_3c._12_4_;
      local_3c._4_4_ = local_3c._16_4_;
      local_3c._8_4_ = local_3c._20_4_;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->frames[local_18].orient,&this_ptr->frames[iVar5].orient,local_78,&local_64
              );
    pCVar3 = &local_64;
  }
  pCVar3 = (CQuaternion4f *)((int)pCVar3 + (uint)bVar7 * -8 + 4);
  fVar1 = pCVar3->w;
  puVar4 = (uint *)((int)pCVar3 + (uint)bVar7 * -8 + 4);
  afStack_70[(uint)bVar7 * -2] = pCVar3->w;
  afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = (float)*puVar4;
  (afStack_70 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (float)puVar4[(uint)bVar7 * -2 + 1];
  if (out_pos != (CVector3f *)local_3c) {
    out_pos->x = (float)local_3c._0_4_;
    out_pos->y = (float)local_3c._4_4_;
    out_pos->z = (float)local_3c._8_4_;
    pfVar5 = (float *)((int)out_orient + (uint)bVar7 * -8 + 4);
    out_orient->w = fVar1;
    pfVar6 = pfVar5 + (uint)bVar7 * -2 + 1;
    *pfVar5 = afStack_70[(uint)bVar7 * -2];
    *pfVar6 = afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
    pfVar6[(uint)bVar7 * -2 + 1] =
         (afStack_70 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
    return;
  }
  puVar6 = (uint *)((int)out_orient + (uint)bVar7 * -8 + 4);
  out_orient->w = fVar1;
  *puVar6 = afStack_70[(uint)bVar7 * -2];
  puVar6[(uint)bVar7 * -2 + 1] = afStack_70[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  (puVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       (afStack_70 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  return;
}
