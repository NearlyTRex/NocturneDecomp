// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0
// Address: 004738d0
// Address Range: [[004738d0, 00473b18]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004738d0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  CDemonCube *this_ptr_00;
  byte bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1034 [1006];
  float local_68;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  float local_40;
  float local_3c [2];
  CVector3f local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar1 = 0;
  local_64.x = pos->x;
  local_64.z = pos->z;
  local_64.y = pos->y + _DAT_005d1b5b;
  local_58 = pos->x;
  local_50 = pos->z;
  fVar2 = ((float10)local_64.x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x
  ;
  fVar3 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar4 = ((float10)local_64.z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  fVar5 = (float10)pos->y + (float10)_DAT_005d1b5f;
  local_54 = (float)fVar5;
  fVar6 = ((float10)local_64.y - (float10)(this_ptr->bbox_min).y) * fVar3;
  fVar3 = (fVar5 - (float10)(this_ptr->bbox_min).y) * fVar3;
  local_40 = local_58 - local_64.x;
  local_3c[1] = local_50 - local_64.z;
  local_3c[0] = local_54 - local_64.y;
  round();
  round();
  local_24 = (int)ROUND(fVar2);
  local_20 = (int)ROUND(fVar4);
  round();
  round();
  local_18 = (int)ROUND(fVar6);
  local_1c = (int)ROUND(fVar3);
  local_4c.x = local_40;
  *(float *)((int)&local_4c + (uint)bVar1 * -8 + 4) = local_3c[(uint)bVar1 * -2];
  *(float *)((int)&local_4c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       local_3c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if ((int)ROUND(fVar3) <= (int)ROUND(fVar6)) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00472af0
                              (this_ptr,local_24,local_18,local_20);
      if ((this_ptr_00 != (CDemonCube *)0x0) &&
         (local_68 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00446b60
                               (this_ptr_00,&local_64,&local_4c,&local_34,(uint *)hit_flag),
         local_14 = local_68, local_68 <= 1.0)) {
        if ((normal_out != (CVector3f *)0x0) && (&local_34 != normal_out)) {
          normal_out->x = local_34.x;
          normal_out->y = local_34.y;
          normal_out->z = local_34.z;
        }
        return local_68 * local_4c.y + local_64.y;
      }
      local_18 = local_18 + -1;
    } while (local_1c <= local_18);
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
  return local_54;
}
