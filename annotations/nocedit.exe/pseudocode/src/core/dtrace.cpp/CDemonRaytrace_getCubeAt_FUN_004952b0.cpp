// Name: core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
// Address: 004952b0
// Address Range: [[004952b0, 0049530e]]
// Convention: __cdecl
// Signature: CDemonCube * core_dtrace.cpp_CDemonRaytrace_getCubeAt_FUN_004952b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z)

#include "nocturne.h"

CDemonCube * __cdecl
core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
          (CDemonRaytrace *this_ptr,int grid_x,int grid_y,int grid_z)

{
  int iVar1;
  int iVar2;
  
  if ((((-1 < grid_x) && (-1 < grid_y)) && (-1 < grid_z)) &&
     (((grid_x < (this_ptr->grid_coord).x && (iVar1 = (this_ptr->grid_coord).y, grid_y < iVar1)) &&
      (iVar2 = (this_ptr->grid_coord).z, grid_z < iVar2)))) {
    return this_ptr->cube_data + grid_y * iVar2 + grid_z + grid_x * iVar1 * iVar2;
  }
  return (CDemonCube *)0x0;
}
