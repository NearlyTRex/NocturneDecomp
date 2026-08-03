// Name: core_course.cpp_CCourse_interpolate_FUN_0043b890
// Address: 0043b890
// Address Range: [[0043b890, 0043bb73]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_course_cpp_CCourse_interpolate_FUN_0043b890(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  CCourseFrame *pCVar2;
  CQuaternion4f *pCVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  double dVar8;
  float afStackY_1854 [1517];
  uint local_90;
  float local_7c;
  CQuaternion4f CStack_68;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  CCourseFrame local_40;
  ulonglong local_24;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar7 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar5 = this_ptr->len + -1;
      local_14 = iVar5;
      if (time < (float)iVar5) {
        dVar8 = round((double)time);
        local_1c = (int)ROUND(dVar8);
        local_18 = local_1c;
        local_7c = time - (float)local_1c;
        iVar5 = local_1c + 1;
      }
      else {
        local_18 = iVar5;
      }
      goto LAB_0043b8ca;
    }
    local_18 = this_ptr->loop;
  }
  else {
    fVar1 = (float)this_ptr->len;
    if (0.0 <= time) {
      local_24 = floor((double)(time / fVar1));
      local_7c = time - (float)local_24 * fVar1;
    }
    else {
      local_24 = floor((double)(-time / fVar1));
      local_7c = (float)local_24 * fVar1 + time;
      if (local_7c < 0.0) {
        local_7c = local_7c + fVar1;
      }
    }
    dVar8 = round((double)local_7c);
    local_1c = (int)ROUND(dVar8);
    local_18 = local_1c;
    local_7c = local_7c - (float)local_1c;
    iVar5 = local_1c + 1;
    if (iVar5 < this_ptr->len) goto LAB_0043b8ca;
  }
  iVar5 = 0;
LAB_0043b8ca:
  local_90 = (uint)((ulonglong)(double)local_7c >> 0x20);
  if ((double)local_7c <= 0.001) {
    pCVar2 = this_ptr->frames + local_1c;
    if (&local_40 != pCVar2) {
      local_40.pos.x = (pCVar2->pos).x;
      local_40.pos.y = (pCVar2->pos).y;
      local_40.pos.z = (pCVar2->pos).z;
    }
    pCVar3 = &this_ptr->frames[local_1c].orient;
  }
  else {
    pCVar2 = this_ptr->frames + iVar5;
    local_4c = (pCVar2->pos).x * local_7c;
    local_48 = (pCVar2->pos).y * local_7c;
    local_44 = local_7c * (pCVar2->pos).z;
    local_50 = 1.0 - local_7c;
    pCVar2 = this_ptr->frames;
    local_24 = __BITCAST_DOUBLE(CONCAT44(local_50,(uint)local_24));
    fStack_58 = pCVar2[local_1c].pos.x * local_50;
    local_54 = pCVar2[local_1c].pos.y * local_50;
    local_50 = pCVar2[local_1c].pos.z * local_50;
    local_40.orient.w = fStack_58 + local_4c;
    local_40.orient.x = local_54 + local_48;
    local_40.orient.y = local_50 + local_44;
    if (&local_40 != (CCourseFrame *)&local_40.orient) {
      local_40.pos.x = local_40.orient.w;
      local_40.pos.y = local_40.orient.x;
      local_40.pos.z = local_40.orient.y;
    }
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (&this_ptr->frames[local_1c].orient,&this_ptr->frames[iVar5].orient,local_7c,
               &CStack_68);
    pCVar3 = &CStack_68;
  }
  puVar6 = (uint *)((int)pCVar3 + ((uint)bVar7 * -2 + 1) * 4);
  fVar1 = pCVar3->w;
  puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
  *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8) = *puVar6;
  *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) = *puVar4;
  *(uint *)
   ((int)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       puVar4[(uint)bVar7 * -2 + 1];
  if ((CCourseFrame *)out_pos != &local_40) {
    out_pos->x = local_40.pos.x;
    out_pos->y = local_40.pos.y;
    out_pos->z = local_40.pos.z;
    puVar6 = (uint *)((int)out_orient + (uint)bVar7 * -8 + 4);
    out_orient->w = fVar1;
    puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
    *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8);
    *puVar4 = *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    puVar4[(uint)bVar7 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
          ((uint)bVar7 * -2 + 1) * 4);
    return;
  }
  puVar6 = (uint *)((int)out_orient + (uint)bVar7 * -8 + 4);
  out_orient->w = fVar1;
  puVar4 = puVar6 + (uint)bVar7 * -2 + 1;
  *puVar6 = *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8);
  *puVar4 = *(uint *)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  puVar4[(uint)bVar7 * -2 + 1] =
       *(uint *)
        ((int)(&stack0xffffff90 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  return;
}
