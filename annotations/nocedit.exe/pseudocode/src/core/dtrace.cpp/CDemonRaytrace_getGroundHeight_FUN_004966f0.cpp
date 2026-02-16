// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CDemonCube *this_ptr_00;
  double dVar9;
  double dVar10;
  CVector3f CStack_6c;
  float local_5c;
  float local_58;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float *local_18;
  
  local_5c = pos->x;
  local_18 = &pos->y;
  local_54.x = pos->z;
  local_54.y = pos->x;
  local_58 = *local_18 + 2.0f;
  fVar2 = pos->z;
  local_54.z = *local_18 + -10.0f;
  fVar3 = local_58 - (this_ptr->bbox_min).y;
  fVar5 = 1.0 / (this_ptr->cell_size).y;
  fVar6 = local_54.x - (this_ptr->bbox_min).z;
  fVar1 = (this_ptr->cell_size).z;
  fVar4 = local_54.z - (this_ptr->bbox_min).y;
  fVar7 = local_54.y - local_5c;
  CStack_6c.z = 6.741156e-39;
  local_48.x = fVar2;
  dVar9 = round
                    ((double)((local_5c - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_24 = (int)ROUND(dVar9);
  fVar2 = fVar2 - local_58;
  fVar8 = local_54.y - local_5c;
  CStack_6c.y = 6.741194e-39;
  dVar9 = round((double)(fVar6 / fVar1));
  local_2c = (int)ROUND(dVar9);
  CStack_6c.x = 6.741221e-39;
  local_48.z = fVar7;
  local_3c = fVar8;
  dVar9 = round((double)(fVar3 * fVar5));
  dVar10 = round((double)(fVar4 * fVar5));
  local_3c = (float)(int)ROUND(dVar9);
  local_2c = (int)ROUND(dVar10);
  local_48.z = fVar2;
  if (local_2c <= (int)local_3c) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,local_30,(int)local_3c,local_34);
      if (this_ptr_00 != (CDemonCube *)0x0) {
        local_28 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                             (this_ptr_00,&CStack_6c,&local_48,&local_54,(uint *)hit_flag);
        if (local_28 <= 1.0) {
          if ((normal_out != (CVector3f *)0x0) && (normal_out != &local_54)) {
            normal_out->x = local_54.x;
            normal_out->y = local_54.y;
            normal_out->z = local_54.z;
          }
          return local_28 * local_48.y + CStack_6c.y;
        }
      }
      local_3c = (float)((int)local_3c + -1);
    } while (local_2c <= (int)local_3c);
  }
  if (hit_flag != (int *)0x0) {
    *hit_flag = 1;
  }
  if (normal_out != (CVector3f *)0x0) {
    normal_out->y = 1.0;
    normal_out->z = 0.0;
    normal_out->x = 0.0;
  }
  g_TempNormal2.y = g_ZeroVector.y;
  g_TempNormal2.z = g_ZeroVector.z;
  g_TempNormal2.x = g_ZeroVector.x;
  g_TempNormal1.y = g_ZeroVector.y;
  g_TempNormal1.z = g_ZeroVector.z;
  g_TempNormal1.x = g_ZeroVector.x;
  g_TempNormal0.y = g_ZeroVector.y;
  g_TempNormal0.z = g_ZeroVector.z;
  g_TempNormal0.x = g_ZeroVector.x;
  return local_5c;
}
