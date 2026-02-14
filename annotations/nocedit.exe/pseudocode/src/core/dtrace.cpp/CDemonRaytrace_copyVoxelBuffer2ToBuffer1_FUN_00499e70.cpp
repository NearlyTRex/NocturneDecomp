// Name: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
// Address: 00499e70
// Address Range: [[00499e70, 00499f06]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace *this_ptr)

{
  CDemonCube *pCVar1;
  int iVar2;
  int grid_z;
  SVoxelGrid *pSVar3;
  SVoxelGrid *pSVar4;
  byte bVar5;
  int local_18;
  int local_14;
  
  bVar5 = 0;
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
                pSVar3 = pCVar1->voxel_buffer2;
                pSVar4 = pCVar1->voxel_buffer1;
                for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *(uint *)pSVar4->voxels[0] = *(uint *)pSVar3->voxels[0];
                  pSVar3 = (SVoxelGrid *)((int)pSVar3 + (uint)bVar5 * -8 + 4);
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -8 + 4);
                }
                for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
                  pSVar4->voxels[0][0] = pSVar3->voxels[0][0];
                  pSVar3 = (SVoxelGrid *)((int)pSVar3 + (uint)bVar5 * -2 + 1);
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar5 * -2 + 1);
                }
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
