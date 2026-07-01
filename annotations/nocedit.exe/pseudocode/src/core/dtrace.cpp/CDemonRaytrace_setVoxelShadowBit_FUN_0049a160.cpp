// Name: core_dtrace.cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160
// Address: 0049a160
// Address Range: [[0049a160, 0049a27c] [0060a5c7, 0060a603]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace *this_ptr,CVector3f *world_position)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_setVoxelShadowBit_FUN_0049a160(CDemonRaytrace *this_ptr,CVector3f *world_position)

{
  CDemonCube *this_ptr_00;
  uchar *puVar1;
  byte bVar2;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  CVector3i local_28;
  CVector3i local_1c;
  
  core_dtrace_cpp_CDemonRaytrace_worldPositionToGridCoords_FUN_004997d0
            (this_ptr,world_position,&local_28);
  if ((((-1 < local_28.x) && (-1 < local_28.y)) && (-1 < local_28.z)) &&
     (((local_28.x < (this_ptr->grid_coord).x && (local_28.y < (this_ptr->grid_coord).y)) &&
      (local_28.z < (this_ptr->grid_coord).z)))) {
    core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
              (this_ptr,world_position,&local_1c);
    this_ptr_00 = core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004952b0
                            (this_ptr,local_28.x,local_28.y,local_28.z);
    if (this_ptr_00 == (CDemonCube *)0x0) {
      g_CurrentFilename = "..\\core\\dtrace.cpp";
      g_CurrentLineNumber = 2841;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Parity Check 999");
    }
    if (this_ptr_00->voxel_buffer1 == (SVoxelGrid *)0x0) {
      core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(this_ptr_00);
    }
    puVar1 = this_ptr_00->voxel_buffer1->voxels[local_1c.z % 8] + local_1c.y % 8;
    *puVar1 = *puVar1 | g_VoxelYBitMasks[local_1c.x % 8];
    return;
  }
  return;
}
