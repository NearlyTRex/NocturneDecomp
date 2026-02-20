// Name: core_course.cpp_CCourse_interpolate_FUN_004427a0
// Address: 004427a0
// Address Range: [[004427a0, 00442a83]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  CCourseFrame *pCVar2;
  CQuaternion4f *pCVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_1850 [1517];
  float local_7c;
  float local_78;
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
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      local_3c._24_8_ = floor((double)(time / fVar1));
      local_7c = time - (float)(double)local_3c._24_8_ * fVar1;
    }
    else {
      local_3c._24_8_ = floor((double)(-time / fVar1));
      local_7c = (float)(double)local_3c._24_8_ * fVar1 + time;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar1;
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
    pCVar2 = this_ptr->frames + local_18;
    if ((CCourseFrame *)local_3c != pCVar2) {
      local_3c._0_4_ = (pCVar2->pos).x;
      local_3c._4_4_ = (pCVar2->pos).y;
      local_3c._8_4_ = (pCVar2->pos).z;
    }
    pCVar3 = &this_ptr->frames[local_18].orient;
  }
  else {
    pCVar2 = this_ptr->frames + iVar5;
    local_48 = (pCVar2->pos).x * local_78;
    local_44 = (pCVar2->pos).y * local_78;
    local_40 = local_78 * (pCVar2->pos).z;
    local_1c = 1.0 - local_78;
    pCVar2 = this_ptr->frames;
    local_54 = pCVar2[local_18].pos.x * local_1c;
    local_50 = pCVar2[local_18].pos.y * local_1c;
    local_4c = pCVar2[local_18].pos.z * local_1c;
    local_3c._12_4_ = local_54 + local_48;
    local_3c._16_4_ = local_50 + local_44;
    local_3c._20_4_ = local_4c + local_40;
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
  puVar6 = (uint *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  fVar1 = pCVar3->w;
  puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
  *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8) = *puVar6;
  *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar4;
  *(uint *)
   ((int)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       puVar4[(uint)bVar7 * -2 + 1];
  if (out_pos != (CVector3f *)local_3c) {
    out_pos->x = (float)local_3c._0_4_;
    out_pos->y = (float)local_3c._4_4_;
    out_pos->z = (float)local_3c._8_4_;
    puVar6 = (uint *)((int)out_orient + (uint)bVar7 * -8 + 4);
    out_orient->w = fVar1;
    puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
    *puVar6 = *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8);
    *puVar4 = *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar4[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    return;
  }
  puVar6 = (uint *)((int)out_orient + (uint)bVar7 * -8 + 4);
  out_orient->w = fVar1;
  puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
  *puVar6 = *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8);
  *puVar4 = *(uint *)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  puVar4[(uint)bVar7 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff94 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  return;
}
