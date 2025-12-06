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
  bool bVar1;
  float fVar2;
  float fVar3;
  CVector3f *pCVar4;
  uint extraout_EDX;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  CMatrix3x3f CStack_7c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  byte local_38 [12];
  float fStack_2c;
  float local_28;
  CVector3f local_24;
  int local_18;
  int local_14;
  int iVar11;
  int iVar12;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffff74,start_position);
                    /* WARNING: Load size is inaccurate */
  local_54 = *light_data - end_position->x;
  local_50 = *(float *)((int)light_data + 4) - end_position->y;
  local_4c = *(float *)((int)light_data + 8) - end_position->z;
  fVar6 = (float10)local_50 / (float10)(this_ptr->adjusted_size).y;
  fVar7 = (float10)local_4c / (float10)(this_ptr->adjusted_size).z;
  fVar8 = (float10)2;
  fVar9 = (float10)1 + ((float10)local_54 / (float10)(this_ptr->adjusted_size).x) * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,this_ptr));
  local_24.y = (float)(int)ROUND(fVar9);
  fVar9 = (float10)local_50 / (float10)(int)local_24.y;
  fVar6 = (float10)1 + fVar6 * fVar8;
  dVar10 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar10 >> 0x20),local_24.y));
  local_18 = (int)ROUND(fVar6);
  fVar6 = (float10)local_48 / (float10)local_18;
  fVar7 = (float10)1 + fVar7 * fVar8;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar10 >> 0x20),local_18));
  fVar2 = local_40 / (float)(int)ROUND(fVar7);
  iVar11 = 0;
  pCVar4 = (CVector3f *)(float)fVar9;
  if (0 < local_18) {
    do {
      iVar12 = 0;
      if (0 < local_14) {
        do {
          iVar5 = 0;
          if (0 < (int)ROUND(fVar7)) {
            do {
              fVar3 = (float)0.5;
              local_38._8_4_ =
                   (float)pCVar4 * fVar3 + (float)iVar11 * (float)pCVar4 + end_position->x;
              fStack_2c = (float)fVar6 * fVar3 + (float)iVar12 * (float)fVar6 + end_position->y;
              local_28 = (float)iVar5 * fVar2 + end_position->z + fVar2 * fVar3;
              pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 (&CStack_7c,&local_24,(CVector3f *)(local_38 + 8));
              local_50 = pCVar4->x + offset_vector->x;
              local_4c = pCVar4->y + offset_vector->y;
              local_48 = pCVar4->z + offset_vector->z;
              if ((float *)local_38 != &local_50) {
                local_38._0_4_ = local_50;
                local_38._4_4_ = local_4c;
                local_38._8_4_ = local_48;
              }
              pCVar4 = (CVector3f *)local_38;
              core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(this_ptr,pCVar4);
              bVar1 = iVar5 + 1 < iVar5;
              iVar5 = iVar5 + 1;
            } while (bVar1);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < local_14);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_18);
  }
  return;
}
