// Name: core_dtrace.cpp_CDemonRaytrace_commitShadowBuffer_FUN_00499e70
// Address: 00499e70
// MANUAL RECONSTRUCTION
// Address Range: [[00499e70, 00499f06]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_00499e70(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_commitShadowBuffer_FUN_00499e70(CDemonRaytrace *this_ptr)

{
  CDemonCube *pCVar1;
  int grid_z;
  int local_18;
  int local_14;

  local_18 = 0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = 0;
      if (0 < (this_ptr->grid_coord).y) {
        do {
          grid_z = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              pCVar1 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                 (this_ptr,local_18,local_14,grid_z);
              if (((pCVar1 != (CDemonCube *)0x0) && (pCVar1->voxel_buffer1 != (SVoxelGrid *)0x0)) &&
                 (pCVar1->voxel_buffer2 != (SVoxelGrid *)0x0)) {
                memcpy(pCVar1->voxel_buffer1, pCVar1->voxel_buffer2, sizeof(SVoxelGrid));
              }
              grid_z = grid_z + 1;
            } while (grid_z < (this_ptr->grid_coord).z);
          }
          local_14 = local_14 + 1;
        } while (local_14 < (this_ptr->grid_coord).y);
      }
      local_18 = local_18 + 1;
    } while (local_18 < (this_ptr->grid_coord).x);
  }
  return;
}
