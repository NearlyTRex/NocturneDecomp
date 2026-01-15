// Name: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// Address: 0049a160
// Address Range: [[0049a160, 0049a27c]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace * this_ptr, CVector3f * world_position)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  uchar *puVar1;
  byte bVar2;
  int aiStackY_1028 [1014];
  CVector3i *in_stack_ffffffc0;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i *local_28;
  int aiStack_24 [5];
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,in_stack_ffffffc0);
  *(int *)((int)&stack0xffffffc4 + (uint)bVar2 * -8) = aiStack_24[(uint)bVar2 * -2];
  *(int *)((int)&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
  if ((((-1 < (int)local_28) && (-1 < local_3c)) && (-1 < local_38)) &&
     ((((int)local_28 < (this_ptr->grid_coord).x && (local_3c < (this_ptr->grid_coord).y)) &&
      (local_38 < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,world_position,local_28);
    local_34 = aiStack_24[2];
    *(int *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) = aiStack_24[(uint)bVar2 * -2 + 3];
    *(int *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         aiStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4];
    local_34 = local_34 % 8;
    local_30 = local_30 % 8;
    local_2c = local_2c % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,(int)local_28,local_3c,local_38);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb19;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_2c] + local_30;
    *puVar1 = *puVar1 | g_VoxelYBitMasks[local_34];
    return;
  }
  return;
}
