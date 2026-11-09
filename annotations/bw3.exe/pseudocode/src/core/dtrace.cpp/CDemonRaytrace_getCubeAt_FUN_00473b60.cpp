// Name: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_00473b60
// Address: 00473b60
// Address Range: [[00473b60, 00473bbe]]
// Convention: __cdecl
// Signature: CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)

#include "nocturne.h"

CDemonCube * __cdecl core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_00473b60(CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int iVar1;
  
  if ((((-1 < grid_x) && (-1 < grid_y)) && (-1 < grid_z)) &&
     (((grid_x < *(int *)&this_ptr->field_0x40 && (grid_y < *(int *)&this_ptr->field_0x44)) &&
      (iVar1 = *(int *)&this_ptr->field_0x48, grid_z < iVar1)))) {
    return (CDemonCube *)
           (*(int *)&this_ptr->field_0x50 +
           (grid_y * iVar1 + grid_z + grid_x * *(int *)&this_ptr->field_0x44 * iVar1) * 0x34);
  }
  return (CDemonCube *)0x0;
}
