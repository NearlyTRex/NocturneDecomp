// Name: core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
// Address: 0049a280
// Address Range: [[0049a280, 0049a3ad]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280(CDemonRaytrace * this_ptr, CVector3f * world_position)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_transferVoxelShadowBit_FUN_0049a280
          (CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  BADSPACEBASE *in_ESP;
  uchar *puVar1;
  byte bVar2;
  CVector3f *in_stack_0000000c;
  int aiStackY_1024 [1015];
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,in_stack_ffffffc0);
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < local_30) && (-1 < local_2c)) && (-1 < local_28)) &&
     (((local_30 < (this_ptr->grid_coord).x && (local_2c < (this_ptr->grid_coord).y)) &&
      (local_28 < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,in_stack_0000000c,in_stack_ffffffc4);
    *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffffcc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_30 = local_30 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,local_2c,local_28,iStack_24);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb55;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_28] + local_2c;
    *puVar1 = *puVar1 & (g_VoxelYBitMasks[local_30] ^ 0xff);
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_28] + local_2c;
    *puVar1 = *puVar1 | this_ptr_00->voxel_buffer2->voxels[local_28][local_2c] &
                        g_VoxelYBitMasks[local_30];
    return;
  }
  return;
}
