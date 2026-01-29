// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0 (CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
          (CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  float fVar1;
  CDemonCube *this_ptr_00;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
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
  local_48.x = pos->z;
  local_54.z = *local_18 + -10.0f;
  fVar2 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar3 = ((float10)local_54.x - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  fVar4 = ((float10)local_58 - (float10)(this_ptr->bbox_min).y) * fVar2;
  fVar2 = ((float10)local_54.z - (float10)(this_ptr->bbox_min).y) * fVar2;
  fVar1 = local_54.y - local_5c;
  fVar5 = (float10)local_48.x;
  CStack_6c.z = 6.741156e-39;
  dVar7 = round
                    ((double)((local_5c - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_24 = (int)ROUND(dVar7);
  fVar5 = fVar5 - (float10)local_58;
  fVar6 = (float10)local_54.y - (float10)local_5c;
  CStack_6c.y = 6.741194e-39;
  dVar7 = round((double)fVar3);
  local_2c = (int)ROUND(dVar7);
  local_3c = (float)fVar6;
  CStack_6c.x = 6.741221e-39;
  local_48.z = fVar1;
  dVar7 = round((double)fVar4);
  dVar8 = round((double)fVar2);
  local_3c = (float)(int)ROUND(dVar7);
  local_2c = (int)ROUND(dVar8);
  local_48.z = (float)fVar5;
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
