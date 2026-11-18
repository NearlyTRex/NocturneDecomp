// Name: core_course.cpp_CCourse_interpolate_FUN_00447fb0
// Address: 00447fb0
// Address Range: [[00447fb0, 00448334]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_interpolate_FUN_00447fb0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_course_cpp_CCourse_interpolate_FUN_00447fb0(CCourse *this_ptr,float time,CVector3f *out_pos,CQuaternion4f *out_orient)

{
  float fVar1;
  int iVar2;
  int iVar3;
  CCourseFrame *pCVar4;
  CQuaternion4f *pCVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  double dVar9;
  float afStackY_186c [1513];
  uint local_b8;
  float local_a8;
  CQuaternion4f local_a0;
  float fStack_90;
  float local_8c [3];
  CCourseFrame CStack_80;
  float local_64 [4];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  CCourseFrame local_44;
  ulonglong local_28;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (this_ptr->loop == 0) {
    if (0.0 < time) {
      iVar3 = this_ptr->len + -1;
      local_14 = iVar3;
      if (time < (float)iVar3) {
        dVar9 = round((double)time);
        local_1c = (int)ROUND(dVar9);
        local_18 = local_1c;
        local_a8 = time - (float)local_1c;
        iVar3 = local_1c + 1;
      }
      else {
        local_18 = iVar3;
      }
    }
    else {
      local_18 = this_ptr->loop;
      iVar3 = 0;
    }
  }
  else {
    local_a0.w = (float)this_ptr->len;
    if (0.0 <= time) {
      local_28 = floor((double)(time / local_a0.w));
      local_a8 = time - (float)local_28 * local_a0.w;
    }
    else {
      local_28 = floor((double)(-time / local_a0.w));
      local_a8 = (float)local_28 * local_a0.w + time;
      if (local_a8 < 0.0) {
        local_a8 = local_a8 + local_a0.w;
      }
    }
    dVar9 = round((double)local_a8);
    local_1c = (int)ROUND(dVar9);
    local_18 = local_1c;
    iVar3 = local_1c + 1;
    local_a8 = local_a8 - (float)local_1c;
    if (this_ptr->len <= iVar3) {
      iVar3 = 0;
    }
  }
  iVar2 = local_1c;
  local_b8 = (uint)((ulonglong)(double)local_a8 >> 0x20);
  local_28 = __BITCAST_DOUBLE(CONCAT44(local_1c * 0x1c,(uint)local_28));
  if ((double)local_a8 <= _DAT_005d71e6) {
    pCVar4 = this_ptr->frames + local_1c;
    if (&CStack_80 != pCVar4) {
      CStack_80.pos.x = (pCVar4->pos).x;
      CStack_80.pos.y = (pCVar4->pos).y;
      CStack_80.pos.z = (pCVar4->pos).z;
    }
    pCVar5 = &this_ptr->frames[local_1c].orient;
  }
  else {
    pCVar4 = this_ptr->frames;
    local_50 = pCVar4[iVar3].pos.x * local_a8;
    fVar1 = 1.0 - local_a8;
    local_4c = pCVar4[iVar3].pos.y * local_a8;
    local_48 = pCVar4[iVar3].pos.z * local_a8;
    CStack_80.orient.w = local_50;
    local_64[(uint)bVar8 * -2 + -3] = local_64[(uint)bVar8 * -2 + 6];
    local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -2] =
         local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    local_20 = fVar1;
    local_64[2] = pCVar4[iVar2].pos.x * fVar1;
    local_64[3] = pCVar4[iVar2].pos.y * fVar1;
    local_54 = pCVar4[iVar2].pos.z * fVar1;
    local_44.orient.w = local_64[2];
    local_64[(uint)bVar8 * -2 + 0xc] = local_64[(uint)bVar8 * -2 + 3];
    local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    CStack_80.orient.z = local_44.orient.w + CStack_80.orient.w;
    local_64[0] = local_44.orient.x + CStack_80.orient.x;
    local_64[1] = local_44.orient.y + CStack_80.orient.y;
    local_44.pos.x = local_44.orient.w + CStack_80.orient.w;
    local_64[(uint)bVar8 * -2 + 9] = local_64[(uint)bVar8 * -2];
    local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         local_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (&CStack_80 != (CCourseFrame *)(local_64 + 8)) {
      CStack_80.pos.x = local_44.pos.x;
      CStack_80.pos.y = local_44.pos.y;
      CStack_80.pos.z = local_44.pos.z;
    }
    core_xform_cpp_slerpQuaternion_FUN_005b7940
              (&this_ptr->frames[local_1c].orient,&this_ptr->frames[iVar3].orient,local_a8,&local_a0
              );
    pCVar5 = &local_a0;
  }
  pfVar7 = (float *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
  fStack_90 = pCVar5->w;
  pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
  local_8c[(uint)bVar8 * -2] = *pfVar7;
  local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] = *pfVar6;
  (local_8c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
       pfVar6[(uint)bVar8 * -2 + 1];
  if (&CStack_80 != (CCourseFrame *)out_pos) {
    out_pos->x = CStack_80.pos.x;
    out_pos->y = CStack_80.pos.y;
    out_pos->z = CStack_80.pos.z;
    pfVar7 = (float *)((int)out_orient + (uint)bVar8 * -8 + 4);
    out_orient->w = fStack_90;
    pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
    *pfVar7 = local_8c[(uint)bVar8 * -2];
    *pfVar6 = local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    pfVar6[(uint)bVar8 * -2 + 1] =
         (local_8c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
    return;
  }
  pfVar7 = (float *)((int)out_orient + (uint)bVar8 * -8 + 4);
  out_orient->w = fStack_90;
  pfVar6 = pfVar7 + (uint)bVar8 * -2 + 1;
  *pfVar7 = local_8c[(uint)bVar8 * -2];
  *pfVar6 = local_8c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  pfVar6[(uint)bVar8 * -2 + 1] =
       (local_8c + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1];
  return;
}
