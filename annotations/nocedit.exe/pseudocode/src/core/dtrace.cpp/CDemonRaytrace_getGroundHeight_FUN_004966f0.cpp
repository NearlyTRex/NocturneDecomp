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
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  float *pfStack_14;
  
  local_58.x = pos->x;
  pfStack_14 = &pos->y;
  local_58.z = pos->z;
  local_4c = pos->x;
  local_58.y = *pfStack_14 + 2f;
  local_44 = pos->z;
  local_48 = *pfStack_14 + -10f;
  fVar1 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar2 = ((float10)local_58.z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  fVar3 = ((float10)local_58.y - (float10)(this_ptr->bbox_min).y) * fVar1;
  fVar1 = ((float10)local_48 - (float10)(this_ptr->bbox_min).y) * fVar1;
  fVar4 = (float10)local_4c - (float10)local_58.x;
  fVar5 = (float10)local_44;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)((local_58.x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  local_20 = (int)ROUND(dVar7);
  fVar5 = fVar5 - (float10)local_58.y;
  fVar6 = (float10)local_4c - (float10)local_58.x;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  local_28 = (int)ROUND(dVar7);
  local_40.y = (float)fVar4;
  local_40.z = (float)fVar6;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar2 = (float10)dVar7;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar1);
  local_40.z = (float)(int)ROUND(fVar2);
  local_28 = (int)ROUND(dVar7);
  local_40.y = (float)fVar5;
  if (local_28 <= (int)local_40.z) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,local_1c,local_28,local_20);
      if (this_ptr_00 != (CDemonCube *)0x0) {
        pfStack_14 = (float *)core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                                        (this_ptr_00,&local_58,&local_34,&local_40,(uint *)hit_flag)
        ;
        if ((float)pfStack_14 <= 1.0) {
          if ((normal_out != (CVector3f *)0x0) && (normal_out != &local_40)) {
            normal_out->x = local_40.x;
            normal_out->y = local_40.y;
            normal_out->z = local_40.z;
          }
          return (float)pfStack_14 * local_34.y + local_58.y;
        }
      }
      local_28 = local_28 + -1;
    } while (local_18 <= local_28);
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
  return local_48;
}
