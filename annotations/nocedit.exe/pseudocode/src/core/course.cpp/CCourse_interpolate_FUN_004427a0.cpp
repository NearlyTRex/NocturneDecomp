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
  uint *puVar3;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  CCourseFrame *pCVar8;
  byte bVar9;
  double dVar10;
  uint auStackY_1850 [1517];
  double local_90;
  float local_7c;
  float local_78;
  CQuaternion4f local_74;
  CQuaternion4f local_64;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  CVector3f local_3c;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  CQuaternion4f *pCVar4;
  
  bVar9 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar5 = this_ptr->len + -1;
      if (time < (float)iVar5) {
        local_18 = (int)ROUND(ROUND(time));
        local_78 = time - (float)local_18;
        iVar5 = local_18 + 1;
      }
      else {
        local_78 = 0.0;
        local_18 = iVar5;
      }
      goto LAB_004427da;
    }
    local_78 = 0.0;
    local_18 = 0;
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      dVar10 = floor((double)(time / fVar1));
      local_7c = time - (float)dVar10 * fVar1;
    }
    else {
      dVar10 = floor((double)(-time / fVar1));
      local_7c = (float)dVar10 * fVar1 + time;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar1;
      }
    }
    local_18 = (int)ROUND(ROUND(local_7c));
    local_78 = local_7c - (float)local_18;
    iVar5 = local_18 + 1;
    if (iVar5 < this_ptr->len) goto LAB_004427da;
  }
  iVar5 = 0;
LAB_004427da:
  if ((double)local_78 <= 0.001) {
    pCVar8 = this_ptr->frames + local_18;
    if ((CCourseFrame *)&local_3c != pCVar8) {
      local_3c.x = (pCVar8->pos).x;
      local_3c.y = (pCVar8->pos).y;
      local_3c.z = (pCVar8->pos).z;
    }
    pCVar4 = &this_ptr->frames[local_18].orient;
  }
  else {
    pCVar2 = this_ptr->frames + iVar5;
    fVar1 = 1.0 - local_78;
    pCVar8 = this_ptr->frames;
    local_30.x = pCVar8[local_18].pos.x * fVar1 + (pCVar2->pos).x * local_78;
    local_30.y = pCVar8[local_18].pos.y * fVar1 + (pCVar2->pos).y * local_78;
    local_30.z = pCVar8[local_18].pos.z * fVar1 + local_78 * (pCVar2->pos).z;
    if (&local_3c != &local_30) {
      local_3c.x = local_30.x;
      local_3c.y = local_30.y;
      local_3c.z = local_30.z;
    }
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->frames[local_18].orient,&this_ptr->frames[iVar5].orient,local_78,&local_64
              );
    pCVar4 = &local_64;
  }
  puVar3 = (uint *)((int)pCVar4 + (uint)bVar9 * -8 + 4);
  local_74.w = pCVar4->w;
  puVar7 = (uint *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar6 = puVar3 + (uint)bVar9 * -2 + 1;
  *(uint *)((int)&local_74 + (uint)bVar9 * -8 + 4) = *puVar3;
  *puVar7 = *puVar6;
  puVar7[(uint)bVar9 * -2 + 1] = puVar6[(uint)bVar9 * -2 + 1];
  if (out_pos != &local_3c) {
    out_pos->x = local_3c.x;
    out_pos->y = local_3c.y;
    out_pos->z = local_3c.z;
    puVar6 = (uint *)((int)out_orient + (uint)bVar9 * -8 + 4);
    out_orient->w = local_74.w;
    puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
    puVar3 = (uint *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    *puVar6 = *(uint *)((int)&local_74 + (uint)bVar9 * -8 + 4);
    *puVar7 = *puVar3;
    puVar7[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
    return;
  }
  puVar6 = (uint *)((int)out_orient + (uint)bVar9 * -8 + 4);
  out_orient->w = local_74.w;
  puVar7 = puVar6 + (uint)bVar9 * -2 + 1;
  puVar3 = (uint *)((int)&local_74 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *puVar6 = *(uint *)((int)&local_74 + (uint)bVar9 * -8 + 4);
  *puVar7 = *puVar3;
  puVar7[(uint)bVar9 * -2 + 1] = puVar3[(uint)bVar9 * -2 + 1];
  return;
}
