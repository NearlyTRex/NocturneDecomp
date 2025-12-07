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
  float fVar10;
  byte local_94 [44];
  float fStack_68;
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  byte local_50 [12];
  float local_44;
  float local_40;
  CVector3f local_3c;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(local_94 + 8),(CVector3f *)light_data);
  local_54 = end_position->x - start_position->x;
  local_50._0_4_ = end_position->y - start_position->y;
  local_50._4_4_ = end_position->z - start_position->z;
  fVar5 = (float10)(float)local_50._0_4_ / (float10)(this_ptr->adjusted_size).y;
  fVar6 = (float10)(float)local_50._4_4_ / (float10)(this_ptr->adjusted_size).z;
  fVar7 = (float10)2;
  dVar9 = crt_math_c_round_FUN_005fe6b0
                    ((double)((float10)1 +
                             ((float10)local_54 / (float10)(this_ptr->adjusted_size).x) * fVar7));
  local_28 = (int)ROUND(dVar9);
  fVar8 = (float10)local_58 / (float10)local_28;
  local_14 = local_28;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar5 * fVar7));
  local_28 = (int)ROUND(dVar9);
  fVar5 = (float10)local_58 / (float10)local_28;
  local_18 = local_28;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)1 + fVar6 * fVar7));
  local_24 = (int)ROUND(dVar9);
  fVar1 = (float)local_24;
  local_28 = 0;
  pCVar3 = (CVector3f *)(float)fVar8;
  fVar10 = (float)fVar5;
  if (0 < iStack_30) {
    do {
      local_20 = 0;
      if (0 < iStack_2c) {
        do {
          iVar4 = 0;
          if (0 < local_24) {
            do {
              fVar2 = (float)0.5;
              local_50._8_4_ =
                   (float)pCVar3 * fVar2 + (float)local_28 * (float)pCVar3 + start_position->x;
              local_44 = fVar10 * fVar2 + (float)local_20 * fVar10 + start_position->y;
              local_40 = (float)iVar4 * (local_58 / fVar1) + start_position->z +
                         (local_58 / fVar1) * fVar2;
              local_1c = iVar4;
              pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 ((CMatrix3x3f *)local_94,&local_3c,(CVector3f *)(local_50 + 8));
              fStack_68 = pCVar3->x + offset_vector->x;
              local_64 = pCVar3->y + offset_vector->y;
              local_60 = pCVar3->z + offset_vector->z;
              if ((float *)local_50 != &fStack_68) {
                local_50._0_4_ = fStack_68;
                local_50._4_4_ = local_64;
                local_50._8_4_ = local_60;
              }
              pCVar3 = (CVector3f *)local_50;
              core_dtrace_cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(this_ptr,pCVar3);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_1c);
          }
          local_20 = local_20 + 1;
        } while (local_20 < iStack_2c);
      }
      local_28 = local_28 + 1;
    } while (local_28 < iStack_30);
  }
  return;
}
