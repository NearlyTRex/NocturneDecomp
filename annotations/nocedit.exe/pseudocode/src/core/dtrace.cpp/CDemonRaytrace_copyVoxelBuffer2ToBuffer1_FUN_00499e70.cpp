// Name: core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70
// Address: 00499e70
// Address Range: [[00499e70, 00499f06]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_copyVoxelBuffer2ToBuffer1_FUN_00499e70(CDemonRaytrace *this_ptr)

{
  uchar *puVar1;
  CDemonCube *pCVar2;
  int iVar3;
  int grid_z;
  SVoxelGrid *pSVar4;
  uchar *puVar5;
  byte bVar6;
  uchar *local_18;
  int local_14;
  
  bVar6 = 0;
  local_18 = (uchar *)0x0;
  if (0 < (this_ptr->grid_coord).x) {
    do {
      local_14 = 0;
      if (0 < (this_ptr->grid_coord).y) {
        do {
          grid_z = 0;
          if (0 < (this_ptr->grid_coord).z) {
            do {
              pCVar2 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                                 (this_ptr,(int)local_18,local_14,grid_z);
              if (((pCVar2 != (CDemonCube *)0x0) &&
                  (puVar1 = (uchar *)pCVar2->voxel_buffer1,
                  (SVoxelGrid *)puVar1 != (SVoxelGrid *)0x0)) &&
                 (pCVar2->voxel_buffer2 != (SVoxelGrid *)0x0)) {
                pSVar4 = pCVar2->voxel_buffer2;
                puVar5 = puVar1;
                for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(uint *)((SVoxelGrid *)puVar5)->voxels[0] =
                       *(uint *)pSVar4->voxels[0];
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar6 * -8 + 4);
                  puVar5 = (uchar *)((int)puVar5 + (uint)bVar6 * -8 + 4);
                }
                for (iVar3 = 0; local_18 = puVar1, iVar3 != 0; iVar3 = iVar3 + -1) {
                  ((SVoxelGrid *)puVar5)->voxels[0][0] = pSVar4->voxels[0][0];
                  pSVar4 = (SVoxelGrid *)((int)pSVar4 + (uint)bVar6 * -2 + 1);
                  puVar5 = (uchar *)((int)puVar5 + (uint)bVar6 * -2 + 1);
                }
              }
              grid_z = grid_z + 1;
            } while (grid_z < (this_ptr->grid_coord).z);
          }
          local_14 = local_14 + 1;
        } while (local_14 < (this_ptr->grid_coord).y);
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < (this_ptr->grid_coord).x);
  }
  return;
}
