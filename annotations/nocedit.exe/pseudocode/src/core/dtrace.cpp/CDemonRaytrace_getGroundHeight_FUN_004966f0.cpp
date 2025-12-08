// Name: core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
// Address: 004966f0
// Address Range: [[004966f0, 00496943]]
// Convention: __cdecl
// Signature: float core_dtrace.cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0(CDemonRaytrace * this_ptr, CVector3f * pos, int * hit_flag, CVector3f * normal_out)

#include "nocturne.h"

float __cdecl
core_dtrace_cpp_CDemonRaytrace_getGroundHeight_FUN_004966f0
          (CDemonRaytrace *this_ptr,CVector3f *pos,int *hit_flag,CVector3f *normal_out)

{
  CDemonCube *this_ptr_00;
  BADSPACEBASE *in_ESP;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  CVector3f CStack_70;
  uint uStack_64;
  float local_5c;
  byte local_58 [8];
  float local_50;
  CVector3f local_4c;
  float local_40;
  float local_3c;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  int local_24;
  float *local_18;
  
  local_5c = pos->x;
  local_18 = &pos->y;
  local_58._4_4_ = pos->z;
  local_50 = pos->x;
  local_58._0_4_ = *local_18 + 2f;
  local_4c.y = pos->z;
  local_4c.x = *local_18 + -10f;
  fVar1 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar2 = ((float10)(float)local_58._4_4_ - (float10)(this_ptr->bbox_min).z) /
          (float10)(this_ptr->cell_size).z;
  fVar3 = ((float10)(float)local_58._0_4_ - (float10)(this_ptr->bbox_min).y) * fVar1;
  fVar1 = ((float10)local_4c.x - (float10)(this_ptr->bbox_min).y) * fVar1;
  fVar4 = (float10)local_50 - (float10)local_5c;
  fVar5 = (float10)local_4c.y;
  uStack_64 = 0x49679a;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)((local_5c - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_24 = (int)ROUND(dVar7);
  fVar5 = fVar5 - (float10)(float)local_58._0_4_;
  fVar6 = (float10)local_50 - (float10)local_5c;
  CStack_70.z = 6.741194e-39;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  local_2c = (int)ROUND(dVar7);
  local_40 = (float)fVar4;
  local_3c = (float)fVar6;
  CStack_70.y = 6.741221e-39;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar2 = (float10)dVar7;
  CStack_70.x = 6.741231e-39;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  local_3c = (float)(int)ROUND(fVar2);
  local_2c = (int)ROUND(dVar7);
  local_40 = (float)fVar5;
  if (local_2c <= (int)local_3c) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,local_30,(int)local_3c,local_34);
      if (this_ptr_00 != (CDemonCube *)0x0) {
        CStack_70.x = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                (this_ptr_00,&CStack_70,&local_4c,(CVector3f *)local_58,
                                 (uint *)hit_flag);
        local_28 = CStack_70.x;
        if (CStack_70.x <= 1.0) {
          if ((normal_out != (CVector3f *)0x0) && (normal_out != (CVector3f *)(local_58 + 4))) {
            normal_out->x = (float)local_58._4_4_;
            normal_out->y = local_50;
            normal_out->z = local_4c.x;
          }
          return CStack_70.x * local_4c.z + CStack_70.z;
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
