// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0
// Address: 004738d0
// Address Range: [[004738d0, 00473b18]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CDemonCube *this_ptr_00;
  byte bVar6;
  double dVar7;
  double dVar8;
  float afStackY_1034 [1002];
  float fStack_78;
  CVector3f CStack_74;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f CStack_44;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  
  bVar6 = 0;
  local_64 = pos->x;
  local_5c.x = pos->z;
  local_60 = pos->y + _DAT_005d1b5b;
  local_5c.y = pos->x;
  local_50 = pos->z;
  fVar3 = local_60 - (this_ptr->bbox_min).y;
  fVar4 = 1.0 / (this_ptr->cell_size).y;
  fVar2 = local_5c.x - (this_ptr->bbox_min).z;
  fVar1 = (this_ptr->cell_size).z;
  local_5c.z = pos->y + _DAT_005d1b5f;
  fVar5 = local_5c.z - (this_ptr->bbox_min).y;
  CStack_44.y = local_5c.y - local_64;
  local_38 = local_50 - local_5c.x;
  CStack_44.z = local_5c.z - local_60;
  CStack_74.z = 6.540936e-39;
  dVar7 = round
                    ((double)((local_64 - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  CStack_74.y = 6.540946e-39;
  dVar8 = round((double)(fVar2 / fVar1));
  local_2c = (int)ROUND(dVar7);
  local_28 = (int)ROUND(dVar8);
  CStack_74.x = 6.54097e-39;
  dVar7 = round((double)(fVar3 * fVar4));
  fStack_78 = 6.54098e-39;
  dVar8 = round((double)(fVar5 * fVar4));
  local_28 = (int)ROUND(dVar7);
  local_2c = (int)ROUND(dVar8);
  local_4c = CStack_44.y;
  (&local_48)[(uint)bVar6 * -2] = *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       (&local_38)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
  if ((int)ROUND(dVar8) <= (int)ROUND(dVar7)) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                              (this_ptr,local_34,local_28,local_30);
      if ((this_ptr_00 != (CDemonCube *)0x0) &&
         (fStack_78 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00446b60
                                (this_ptr_00,&CStack_74,&local_5c,&CStack_44,(uint *)hit_flag),
         local_24 = fStack_78, fStack_78 <= 1.0)) {
        if ((normal_out != (CVector3f *)0x0) && (&CStack_44 != normal_out)) {
          normal_out->x = CStack_44.x;
          normal_out->y = CStack_44.y;
          normal_out->z = CStack_44.z;
        }
        return fStack_78 * local_5c.y + CStack_74.y;
      }
      local_28 = local_28 + -1;
    } while (local_2c <= local_28);
  }
  if (hit_flag != (int *)0x0) {
    *hit_flag = 1;
  }
  if (normal_out != (CVector3f *)0x0) {
    normal_out->y = 1.0;
    normal_out->z = 0.0;
    normal_out->x = 0.0;
  }
  _DAT_01510dc4 = _DAT_02653710;
  _DAT_01510dc8 = _DAT_02653714;
  _DAT_01510dc0 = _DAT_0265370c;
  _DAT_01510db8 = _DAT_02653710;
  _DAT_01510dbc = _DAT_02653714;
  _DAT_01510db4 = _DAT_0265370c;
  _DAT_01510dac = _DAT_02653710;
  _DAT_01510db0 = _DAT_02653714;
  _DAT_01510da8 = _DAT_0265370c;
  return local_64;
}
