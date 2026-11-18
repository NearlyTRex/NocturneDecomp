// Name: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00477dd0
// Address: 00477dd0
// Address Range: [[00477dd0, 00477e5e]]
// Convention: __stack2_esi
// Signature: CVector3f * __stack2_esi core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00477dd0(CDemonRaytrace *this_ptr,int cube_index,CVector3f *output_position)

#include "nocturne.h"

CVector3f * __stack2_esi core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_00477dd0(CDemonRaytrace *this_ptr,int cube_index,CVector3f *output_position)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = cube_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar5 = (this_ptr->grid_coord).z;
  iVar8 = cube_index - (this_ptr->grid_coord).y * iVar6 * iVar5;
  iVar7 = iVar8 / iVar5;
  fVar1 = (this_ptr->cell_size).y;
  fVar2 = (this_ptr->cell_size).z;
  fVar3 = (this_ptr->bbox_min).y;
  fVar4 = (this_ptr->bbox_min).z;
  output_position->x = (float)iVar6 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  output_position->y = (float)iVar7 * fVar1 + fVar3;
  output_position->z = (float)(iVar8 - iVar5 * iVar7) * fVar2 + fVar4;
  return output_position;
}
