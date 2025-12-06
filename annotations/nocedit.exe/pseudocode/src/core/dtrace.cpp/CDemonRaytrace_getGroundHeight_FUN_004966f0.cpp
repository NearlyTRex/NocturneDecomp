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
  float *pfVar1;
  CDemonCube *this_ptr_00;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  CVector3f local_50;
  float local_3c;
  byte local_38 [8];
  float local_30;
  CVector3f local_2c;
  float local_20;
  int local_1c;
  float *local_18;
  int iStack_14;
  
  local_18 = &pos->y;
  pfVar1 = &pos->z;
  fVar9 = *pfVar1;
  local_50.x = pos->x;
  local_50.z = *pfVar1;
  local_50.y = *local_18 + -10f;
  fVar2 = ((float10)pos->x - (float10)(this_ptr->bbox_min).x) / (float10)(this_ptr->cell_size).x;
  fVar3 = (float10)1 / (float10)(this_ptr->cell_size).y;
  fVar4 = ((float10)fVar9 - (float10)(this_ptr->bbox_min).z) / (float10)(this_ptr->cell_size).z;
  fVar5 = ((float10)(*local_18 + 2f) - (float10)(this_ptr->bbox_min).y) *
          fVar3;
  fVar3 = ((float10)local_50.y - (float10)(this_ptr->bbox_min).y) * fVar3;
  fVar6 = (float10)local_50.x - (float10)pos->x;
  fVar7 = (float10)local_50.z;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(pfVar1,local_50.z));
  local_1c = (int)ROUND(fVar2);
  fVar7 = fVar7 - (float10)local_50.x;
  fVar2 = (float10)local_50.z - (float10)fVar9;
  dVar8 = crt_math_c_round_FUN_005fe6b0(dVar8);
  local_1c = (int)ROUND(fVar4);
  local_30 = (float)fVar6;
  local_2c.x = (float)fVar2;
  dVar8 = crt_math_c_round_FUN_005fe6b0(dVar8);
  crt_math_c_round_FUN_005fe6b0(dVar8);
  local_1c = (int)ROUND(fVar5);
  local_20 = (float)fVar7;
  while( true ) {
    if (local_1c < (int)ROUND(fVar3)) {
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
      return local_3c;
    }
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,unaff_EBP,local_1c,iStack_14);
    if ((this_ptr_00 != (CDemonCube *)0x0) &&
       (local_50.x = core_dcube_cpp_CDemonCube_rayIntersectTriangles_FUN_004578f0
                               (this_ptr_00,&local_50,&local_2c,(CVector3f *)local_38,
                                (uint *)hit_flag), local_50.x <= 1.0)) break;
    local_1c = local_1c + -1;
  }
  if ((normal_out != (CVector3f *)0x0) && (normal_out != (CVector3f *)(local_38 + 4))) {
    normal_out->x = (float)local_38._4_4_;
    normal_out->y = local_30;
    normal_out->z = local_2c.x;
  }
  return local_50.x * local_2c.z + local_50.z;
}
