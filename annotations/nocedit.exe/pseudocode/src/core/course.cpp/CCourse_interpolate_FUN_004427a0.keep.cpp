// Name: core_course.cpp_CCourse_interpolate_FUN_004427a0
// Address: 004427a0
// MANUAL RECONSTRUCTION
// Address Range: [[004427a0, 00442a83] [006054e4, 0060554e]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_interpolate_FUN_004427a0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CCourseFrame *pCVar5;
  CQuaternion4f *pCVar6;
  int iVar7;
  CCourseFrame *pCVar8;
  double dVar9;
  float local_7c;
  float local_78;
  CQuaternion4f local_64;
  CVector3f local_3c;
  CVector3f local_30;
  int local_18;
  
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar7 = this_ptr->len + -1;
      if (time < (float)iVar7) {
        local_18 = (int)ROUND(ROUND(time));
        local_78 = time - (float)local_18;
        iVar7 = local_18 + 1;
      }
      else {
        local_78 = 0.0;
        local_18 = iVar7;
      }
      goto LAB_004427da;
    }
    local_78 = 0.0;
    local_18 = 0;
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      dVar9 = floor((double)(time / fVar1));
      local_7c = time - (float)dVar9 * fVar1;
    }
    else {
      dVar9 = floor((double)(-time / fVar1));
      local_7c = (float)dVar9 * fVar1 + time;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar1;
      }
    }
    local_18 = (int)ROUND(ROUND(local_7c));
    local_78 = local_7c - (float)local_18;
    // Float rounding can push local_7c to exactly len, giving local_18 == len (OOB).
    // Asm only wraps iVar7; clamp local_18 here to catch that edge.
    if (local_18 >= this_ptr->len) {
      local_18 = 0;
      local_78 = 0.0;
    }
    iVar7 = local_18 + 1;
    if (iVar7 < this_ptr->len) goto LAB_004427da;
  }
  iVar7 = 0;
LAB_004427da:
  if ((double)local_78 <= 0.001) {
    pCVar8 = this_ptr->frames + local_18;
    if ((CCourseFrame *)&local_3c != pCVar8) {
      local_3c.x = (pCVar8->pos).x;
      local_3c.y = (pCVar8->pos).y;
      local_3c.z = (pCVar8->pos).z;
    }
    pCVar6 = &this_ptr->frames[local_18].orient;
  }
  else {
    pCVar5 = this_ptr->frames + iVar7;
    fVar1 = 1.0 - local_78;
    pCVar8 = this_ptr->frames;
    local_30.x = pCVar8[local_18].pos.x * fVar1 + (pCVar5->pos).x * local_78;
    local_30.y = pCVar8[local_18].pos.y * fVar1 + (pCVar5->pos).y * local_78;
    local_30.z = pCVar8[local_18].pos.z * fVar1 + local_78 * (pCVar5->pos).z;
    if (&local_3c != &local_30) {
      local_3c.x = local_30.x;
      local_3c.y = local_30.y;
      local_3c.z = local_30.z;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->frames[local_18].orient,&this_ptr->frames[iVar7].orient,local_78,&local_64
              );
    pCVar6 = &local_64;
  }
  fVar1 = pCVar6->w;
  fVar2 = pCVar6->x;
  fVar3 = pCVar6->y;
  fVar4 = pCVar6->z;
  if (out_pos != &local_3c) {
    out_pos->x = local_3c.x;
    out_pos->y = local_3c.y;
    out_pos->z = local_3c.z;
    out_orient->w = fVar1;
    out_orient->x = fVar2;
    out_orient->y = fVar3;
    out_orient->z = fVar4;
    return;
  }
  out_orient->w = fVar1;
  out_orient->x = fVar2;
  out_orient->y = fVar3;
  out_orient->z = fVar4;
  return;
}
