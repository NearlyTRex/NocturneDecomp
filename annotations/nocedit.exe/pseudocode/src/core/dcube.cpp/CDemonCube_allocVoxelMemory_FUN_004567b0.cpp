// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0
// Address: 004567b0
// Address Range: [[004567b0, 0045683b]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube * this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_004567b0(CDemonCube *this_ptr)

{
  SVoxelGrid *pSVar1;
  
  pSVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350(0x40,1,"..\\core\\dcube.cpp",0x5f2);
  this_ptr->voxel_buffer1 = pSVar1;
  if (pSVar1 == (SVoxelGrid *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x5f3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar1 = shape_memdbg_cpp_debugCalloc_FUN_0050f350(0x40,1,"..\\core\\dcube.cpp",0x5f4);
  this_ptr->voxel_buffer2 = pSVar1;
  if (pSVar1 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dcube.cpp";
  g_CurrentLineNumber = 0x5f5;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
