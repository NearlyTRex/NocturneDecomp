// Name: core_dtrace.cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20
// Address: 0046ba20
// Address Range: [[0046ba20, 0046ba9a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index)

#include "nocturne.h"

CVector3f * __cdecl core_dtrace_cpp_CDemonRaytrace_convertCubeIndexToPosition_FUN_0046ba20(CDemonRaytrace *this_ptr,CVector3f *output_position,int cube_index)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = cube_index / ((this_ptr->grid_coord).y * (this_ptr->grid_coord).z);
  iVar1 = (this_ptr->grid_coord).z;
  iVar4 = cube_index - (this_ptr->grid_coord).y * iVar2 * iVar1;
  iVar3 = iVar4 / iVar1;
  output_position->x = (float)iVar2 * (this_ptr->cell_size).x + (this_ptr->bbox_min).x;
  output_position->y = (this_ptr->bbox_min).y + (float)iVar3 * (this_ptr->cell_size).y;
  output_position->z =
       (float)(iVar4 - iVar1 * iVar3) * (this_ptr->cell_size).z + (this_ptr->bbox_min).z;
  return output_position;
}
