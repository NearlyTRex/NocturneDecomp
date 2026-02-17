// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// Address: 00499c20
// Address Range: [[00499c20, 00499e6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,CVector3f *end_position,void *light_data)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,CVector3f *end_position,void *light_data)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  int iVar6;
  CMatrix3x3f local_8c;
  CVector3f local_64;
  float local_58;
  float local_54;
  float local_50;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_8c,start_position);
  local_58 = *(float *)light_data - end_position->x;
  local_54 = *(float *)((int)light_data + 4) - end_position->y;
  local_50 = *(float *)((int)light_data + 8) - end_position->z;
  fVar3 = (float)2;
  local_28 = (int)ROUND(ROUND((local_58 / (this_ptr->adjusted_size).x) * fVar3 + 1.0));
  fVar1 = local_58 / (float)local_28;
  local_24 = (int)ROUND(ROUND((local_54 / (this_ptr->adjusted_size).y) * fVar3 + 1.0));
  fVar2 = local_54 / (float)local_24;
  local_1c = (int)ROUND(ROUND((local_50 / (this_ptr->adjusted_size).z) * fVar3 + 1.0));
  fVar3 = local_50 / (float)local_1c;
  local_20 = 0;
  if (0 < local_28) {
    do {
      local_18 = 0;
      if (0 < local_24) {
        do {
          iVar6 = 0;
          if (0 < local_1c) {
            do {
              fVar4 = (float)0.5;
              local_40.x = fVar1 * fVar4 + (float)local_20 * fVar1 + end_position->x;
              local_40.y = fVar2 * fVar4 + (float)local_18 * fVar2 + end_position->y;
              local_40.z = (float)iVar6 * fVar3 + end_position->z + fVar3 * fVar4;
              local_14 = iVar6;
              pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&local_8c,&local_34,&local_40);
              local_64.x = pCVar5->x + offset_vector->x;
              local_64.y = pCVar5->y + offset_vector->y;
              local_64.z = pCVar5->z + offset_vector->z;
              if (&local_4c != &local_64) {
                local_4c.x = local_64.x;
                local_4c.y = local_64.y;
                local_4c.z = local_64.z;
              }
              core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(this_ptr,&local_4c);
              iVar6 = iVar6 + 1;
            } while (iVar6 < local_1c);
          }
          local_18 = local_18 + 1;
        } while (local_18 < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  return;
}
