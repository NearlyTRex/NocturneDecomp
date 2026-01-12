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
  float fVar1;
  BADSPACEBASE *in_ESP;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  CVector3f local_58;
  float local_4c;
  float local_48;
  float local_44;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
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
  fVar2 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar3 = ((float10)local_58.z - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z
  ;
  fVar4 = ((float10)local_58.y - (float10)(this_ptr->bbox_min).y) * fVar2;
  fVar2 = ((float10)local_48 - (float10)(this_ptr->bbox_min).y) * fVar2;
  fVar5 = (float10)local_4c - (float10)local_58.x;
  fVar6 = (float10)local_44;
  crt_math_c_round_FUN_005fe6b0
            ((double)((local_58.x - (this_ptr->bbox_min).x) / (this_ptr->cell_size).x));
  fVar6 = fVar6 - (float10)local_44;
  fVar7 = (float10)local_40.y - (float10)local_48;
  local_58.y = 6.741194e-39;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  local_18 = (int)ROUND(dVar8);
  local_34.z = (float)fVar5;
  local_28 = (float)fVar7;
  local_58.x = 6.741221e-39;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  fVar3 = (float10)dVar8;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  local_28 = (float)(int)ROUND(fVar3);
  local_18 = (int)ROUND(dVar8);
  local_34.z = (float)fVar6;
  if (local_18 <= (int)local_28) {
    do {
      this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                              (this_ptr,local_1c,(int)local_28,local_20);
      if (this_ptr_00 != (CDemonCube *)0x0) {
        fVar1 = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                          (this_ptr_00,&local_58,&local_34,&local_40,(uint *)hit_flag);
        if (fVar1 <= 1.0) {
          if ((normal_out != (CVector3f *)0x0) && (normal_out != &local_40)) {
            normal_out->x = local_40.x;
            normal_out->y = local_40.y;
            normal_out->z = local_40.z;
          }
          return fVar1 * local_34.y + local_58.y;
        }
      }
      local_28 = (float)((int)local_28 + -1);
    } while (local_18 <= (int)local_28);
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
