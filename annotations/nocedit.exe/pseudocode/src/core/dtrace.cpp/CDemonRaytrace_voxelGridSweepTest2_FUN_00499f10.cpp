// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
// Address: 00499f10
// Address Range: [[00499f10, 0049a15f]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10(CDemonRaytrace * this_ptr, CVector3f * offset_vector, void * light_data, CVector3f * start_position, CVector3f * end_position)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest2_FUN_00499f10
          (CDemonRaytrace *this_ptr,CVector3f *offset_vector,void *light_data,
          CVector3f *start_position,CVector3f *end_position)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
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
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_8c,light_data);
  local_58 = end_position->x - start_position->x;
  local_54 = end_position->y - start_position->y;
  local_50 = end_position->z - start_position->z;
  fVar5 = (float10)local_54 / (float10)(this_ptr->adjusted_size).y;
  fVar6 = (float10)local_50 / (float10)(this_ptr->adjusted_size).z;
  fVar7 = (float10)2;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)1 +
                             ((float10)local_58 / (float10)(this_ptr->adjusted_size).x) * fVar7));
  local_20 = (int)ROUND(dVar9);
  fVar8 = (float10)local_50 / (float10)local_20;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar5 * fVar7));
  local_20 = (int)ROUND(dVar9);
  fVar5 = (float10)local_50 / (float10)local_20;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar6 * fVar7));
  local_1c = (int)ROUND(dVar9);
  fVar1 = local_50 / (float)local_1c;
  local_20 = 0;
  if (0 < local_28) {
    do {
      local_18 = 0;
      if (0 < local_24) {
        do {
          iVar4 = 0;
          if (0 < local_1c) {
            do {
              fVar2 = (float)0.5;
              local_40.x = (float)fVar8 * fVar2 + (float)local_20 * (float)fVar8 + start_position->x
              ;
              local_40.y = (float)fVar5 * fVar2 + (float)local_18 * (float)fVar5 + start_position->y
              ;
              local_40.z = (float)iVar4 * fVar1 + start_position->z + fVar1 * fVar2;
              local_14 = iVar4;
              pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&local_8c,&local_34,&local_40);
              local_64.x = pCVar3->x + offset_vector->x;
              local_64.y = pCVar3->y + offset_vector->y;
              local_64.z = pCVar3->z + offset_vector->z;
              if (&local_4c != &local_64) {
                local_4c.x = local_64.x;
                local_4c.y = local_64.y;
                local_4c.z = local_64.z;
              }
              core_dtrace_cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(this_ptr,&local_4c)
              ;
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_1c);
          }
          local_18 = local_18 + 1;
        } while (local_18 < local_24);
      }
      local_20 = local_20 + 1;
    } while (local_20 < local_28);
  }
  return;
}
