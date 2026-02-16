// Name: core_dtrace.cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20
// Address: 00499c20
// Address Range: [[00499c20, 00499e6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,CVector3f *end_position,void *light_data)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_voxelGridSweepTest_FUN_00499c20(CDemonRaytrace *this_ptr,CVector3f *offset_vector,CVector3f *start_position,CVector3f *end_position,void *light_data)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  byte local_98 [40];
  CVector3f CStack_70;
  float local_5c;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)(local_98 + 0xc),start_position);
  local_58.x = *(float *)light_data - end_position->x;
  local_58.y = *(float *)((int)light_data + 4) - end_position->y;
  local_58.z = *(float *)((int)light_data + 8) - end_position->z;
  fVar6 = local_58.y / (this_ptr->adjusted_size).y;
  fVar2 = local_58.z / (this_ptr->adjusted_size).z;
  fVar7 = (float)2;
  dVar5 = round
                    ((double)((local_58.x / (this_ptr->adjusted_size).x) * fVar7 + 1.0));
  iStack_2c = (int)ROUND(dVar5);
  fVar1 = local_5c / (float)iStack_2c;
  local_18 = iStack_2c;
  dVar5 = round((double)(fVar6 * fVar7 + 1.0));
  iStack_2c = (int)ROUND(dVar5);
  fVar6 = local_5c / (float)iStack_2c;
  local_1c = iStack_2c;
  dVar5 = round((double)(fVar2 * fVar7 + 1.0));
  local_28 = (int)ROUND(dVar5);
  fVar7 = local_5c / (float)local_28;
  iStack_2c = 0;
  if (0 < local_34) {
    do {
      local_24 = 0;
      if (0 < iStack_30) {
        do {
          iVar4 = 0;
          if (0 < local_28) {
            do {
              fVar2 = (float)0.5;
              local_4c.x = fVar1 * fVar2 + (float)iStack_2c * fVar1 + end_position->x;
              local_4c.y = fVar6 * fVar2 + (float)local_24 * fVar6 + end_position->y;
              local_4c.z = (float)iVar4 * fVar7 + end_position->z + fVar7 * fVar2;
              local_20 = iVar4;
              pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                                 ((CMatrix3x3f *)local_98,&local_40,&local_4c);
              CStack_70.x = pCVar3->x + offset_vector->x;
              CStack_70.y = pCVar3->y + offset_vector->y;
              CStack_70.z = pCVar3->z + offset_vector->z;
              if (&local_58 != &CStack_70) {
                local_58.x = CStack_70.x;
                local_58.y = CStack_70.y;
                local_58.z = CStack_70.z;
              }
              core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(this_ptr,&local_58);
              iVar4 = iVar4 + 1;
            } while (iVar4 < local_28);
          }
          local_24 = local_24 + 1;
        } while (local_24 < iStack_30);
      }
      iStack_2c = iStack_2c + 1;
    } while (iStack_2c < local_34);
  }
  return;
}
