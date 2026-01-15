// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// Address: 00499c20
// Address Range: [[00499c20, 00499e6f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace * this_ptr, CVector3f * offset_vector, CVector3f * start_position, CVector3f * end_position, void * light_data)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
          (CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,
          CVector3f *end_position,void *light_data)

{
  float fVar1;
  CVector3f *pCVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  float local_98;
  float local_94;
  float local_90;
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
  float local_1c;
  float local_18;
  int local_14;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_8c,start_position);
  local_58 = *(float *)light_data - end_position->x;
  local_54 = *(float *)((int)light_data + 4) - end_position->y;
  local_50 = *(float *)((int)light_data + 8) - end_position->z;
  fVar4 = (float10)local_54 / (float10)(this_ptr->adjusted_size).y;
  fVar5 = (float10)local_50 / (float10)(this_ptr->adjusted_size).z;
  fVar6 = (float10)2;
  dVar7 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)1 +
                             ((float10)local_58 / (float10)(this_ptr->adjusted_size).x) * fVar6));
  local_34.z = (float)(int)ROUND(dVar7);
  local_18 = local_34.z;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar4 * fVar6));
  local_34.z = (float)(int)ROUND(dVar7);
  local_1c = local_34.z;
  dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar5 * fVar6));
  local_28 = (int)ROUND(dVar7);
  local_34.z = 0.0;
  local_20 = local_28;
  if (0 < (int)local_34.x) {
    do {
      local_18 = 0.0;
      if (0 < local_24) {
        do {
          iVar3 = 0;
          if (0 < (int)local_1c) {
            do {
              fVar1 = (float)0.5;
              local_40.x = local_98 * fVar1 + (float)local_20 * local_98 + end_position->x;
              local_40.y = local_94 * fVar1 + (float)(int)local_18 * local_94 + end_position->y;
              local_40.z = (float)iVar3 * local_90 + end_position->z + local_90 * fVar1;
              local_14 = iVar3;
              pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&local_8c,&local_34,&local_40);
              local_64.x = pCVar2->x + offset_vector->x;
              local_64.y = pCVar2->y + offset_vector->y;
              local_64.z = pCVar2->z + offset_vector->z;
              if (&local_4c != &local_64) {
                local_4c.x = local_64.x;
                local_4c.y = local_64.y;
                local_4c.z = local_64.z;
              }
              core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(this_ptr,&local_4c);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)local_1c);
          }
          local_18 = (float)((int)local_18 + 1);
        } while ((int)local_18 < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  return;
}
