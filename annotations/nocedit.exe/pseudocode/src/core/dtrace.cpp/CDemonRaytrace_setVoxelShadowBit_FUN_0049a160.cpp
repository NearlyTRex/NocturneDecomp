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
  BADSPACEBASE *in_ESP;
  byte bVar2;
  CVector3f *in_stack_0000000c;
  int aiStackY_1028 [1016];
  CVector3i *in_stack_ffffffc0;
  CVector3i *in_stack_ffffffc4;
  int in_stack_ffffffc8;
  int in_stack_ffffffcc;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_14;
  
  bVar2 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,in_stack_ffffffc0);
  *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8);
  *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)((int)&stack0xffffffe4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if ((((-1 < (int)in_stack_ffffffc4) && (-1 < in_stack_ffffffc8)) && (-1 < in_stack_ffffffcc)) &&
     ((((int)in_stack_ffffffc4 < (this_ptr->grid_coord).x &&
       (in_stack_ffffffc8 < (this_ptr->grid_coord).y)) &&
      (in_stack_ffffffcc < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,in_stack_0000000c,in_stack_ffffffc4);
    local_30 = iStack_14;
    *(uint *)((int)&stack0xffffffd4 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff0 + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xfffffff4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    local_2c = local_2c % 8;
    local_28 = local_28 % 8;
    iStack_24 = iStack_24 % 8;
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,in_stack_ffffffc8,in_stack_ffffffcc,local_30);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 0xb19;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_1c] + iStack_20;
    *puVar1 = *puVar1 | g_VoxelYBitMasks[iStack_24];
    return;
  }
  return;
}
