// Name: core_dtrace.cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280
// Address: 0049a280
// Address Range: [[0049a280, 0049a3ad]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_restoreShadowBitFromBuffer_FUN_0049a280(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  uchar *puVar1;
  CDemonCube *this_ptr_00;
  int iVar1;
  uchar *puVar2;
  byte bVar3;
  int aiStackY_1028 [1014];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i local_28;
  CVector3i local_1c;
  
  bVar3 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,&local_28);
  local_34 = local_28.x;
  (&local_30)[(uint)bVar3 * -2] = *(int *)((int)&local_28 + (uint)bVar3 * -8 + 4);
  (&local_2c)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       *(int *)((int)&local_28 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  if ((((-1 < local_34) && (-1 < local_30)) && (-1 < local_2c)) &&
     (((local_34 < (this_ptr->grid_coord).x && (local_30 < (this_ptr->grid_coord).y)) &&
      (local_2c < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,world_position,&local_1c);
    iVar1 = local_1c.x;
    (&local_3c)[(uint)bVar3 * -2] = *(int *)((int)&local_1c + (uint)bVar3 * -8 + 4);
    (&local_38)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
         *(int *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
    iVar1 = iVar1 % 8;
    local_3c = local_3c % 8;
    local_38 = local_38 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,local_34,local_30,local_2c);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb55;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_38] + local_3c;
    *puVar1 = *puVar1 & (g_VoxelYBitMasks[iVar1] ^ 0xff);
    puVar2 = this_ptr_00->voxel_buffer1->voxels[local_38] + local_3c;
    *puVar2 = *puVar2 | this_ptr_00->voxel_buffer2->voxels[local_38][local_3c] &
                        g_VoxelYBitMasks[iVar1];
    return;
  }
  return;
}
