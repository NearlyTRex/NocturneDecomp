// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  CDemonCube *this_ptr_00;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  CVector3f local_38;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  
  local_5c.x = pos->x;
  local_18 = &pos->y;
  local_5c.z = pos->z;
  local_50 = pos->x;
  local_5c.y = *local_18 + 2.0f;
  local_48 = pos->z;
  local_4c = *local_18 + -10.0f;
  fVar1 = 1.0 / (this_ptr->cell_size).y;
  local_38.x = local_50 - local_5c.x;
  local_20 = (int)ROUND(ROUND((local_5c.x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_38.z = local_48 - local_5c.z;
  local_38.y = local_4c - local_5c.y;
  local_24 = (int)ROUND(ROUND((local_5c.z - (this_ptr->bbox_min).z) / (this_ptr->cell_size).z));
  local_2c = (int)ROUND(ROUND((local_5c.y - (this_ptr->bbox_min).y) * fVar1));
  local_1c = (int)ROUND(ROUND((local_4c - (this_ptr->bbox_min).y) * fVar1));
  if (local_1c <= local_2c) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,local_20,local_2c,local_24);
      if (this_ptr_00 != (CDemonCube *)0x0) {
        local_18 = (float *)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                      (this_ptr_00,&local_5c,&local_38,&local_44,(uint *)hit_flag);
        if ((float)local_18 <= 1.0) {
          if ((normal_out != (CVector3f *)0x0) && (normal_out != &local_44)) {
            normal_out->x = local_44.x;
            normal_out->y = local_44.y;
            normal_out->z = local_44.z;
          }
          return (float)local_18 * local_38.y + local_5c.y;
        }
      }
      local_2c = local_2c + -1;
    } while (local_1c <= local_2c);
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
  return local_4c;
}
