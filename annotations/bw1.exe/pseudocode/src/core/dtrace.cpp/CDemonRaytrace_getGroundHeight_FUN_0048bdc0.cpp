// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_0048bdc0
// Address: 0048bdc0
// Address Range: [[0048bdc0, 0048c008]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_0048bdc0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_0048bdc0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

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
  local_60 = pos->y + 2.0f;
  local_5c.y = pos->x;
  local_50 = pos->z;
  fVar3 = local_60 - (this_ptr->bbox_min).y;
  fVar4 = 1.0 / (this_ptr->cell_size).y;
  fVar2 = local_5c.x - (this_ptr->bbox_min).z;
  fVar1 = (this_ptr->cell_size).z;
  local_5c.z = pos->y + -10.0f;
  fVar5 = local_5c.z - (this_ptr->bbox_min).y;
  CStack_44.y = local_5c.y - local_64;
  local_38 = local_50 - local_5c.x;
  CStack_44.z = local_5c.z - local_60;
  CStack_74.z = 6.68046e-39;
  dVar7 = round
                    ((double)((local_64 - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  CStack_74.y = 6.68047e-39;
  dVar8 = round((double)(fVar2 / fVar1));
  local_2c = (int)ROUND(dVar7);
  local_28 = (int)ROUND(dVar8);
  CStack_74.x = 6.680494e-39;
  dVar7 = round((double)(fVar3 * fVar4));
  fStack_78 = 6.680504e-39;
  dVar8 = round((double)(fVar5 * fVar4));
  local_28 = (int)ROUND(dVar7);
  local_2c = (int)ROUND(dVar8);
  local_4c = CStack_44.y;
  (&local_48)[(uint)bVar6 * -2] = *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + 8);
  *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       (&local_38)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
  if ((int)ROUND(dVar8) <= (int)ROUND(dVar7)) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_0048afe0
                              (this_ptr,local_34,local_28,local_30);
      if ((this_ptr_00 != (CDemonCube *)0x0) &&
         (fStack_78 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_00458210
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
  g_INT_0152c2c4 = (int)g_ZeroVector.y;
  g_FLOAT_0152c2c8 = g_ZeroVector.z;
  g_FLOAT_0152c2c0 = g_ZeroVector.x;
  g_INT_0152c2b8 = (int)g_ZeroVector.y;
  g_FLOAT_0152c2bc = g_ZeroVector.z;
  g_FLOAT_0152c2b4 = g_ZeroVector.x;
  g_INT_0152c2ac = (int)g_ZeroVector.y;
  g_FLOAT_0152c2b0 = g_ZeroVector.z;
  g_FLOAT_0152c2a8 = g_ZeroVector.x;
  return local_64;
}
