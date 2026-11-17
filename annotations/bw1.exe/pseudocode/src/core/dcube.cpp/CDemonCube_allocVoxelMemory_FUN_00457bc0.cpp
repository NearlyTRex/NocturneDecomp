// Name: core_dcube.cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0
// Address: 00457bc0
// Address Range: [[00457bc0, 00457c37]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_allocVoxelMemory_FUN_00457bc0(CDemonCube *this_ptr)

{
  SVoxelGrid *pSVar1;
  
  pSVar1 = (SVoxelGrid *)calloc(0x40,1);
  this_ptr->voxel_buffer1 = pSVar1;
  if (pSVar1 == (SVoxelGrid *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dcube.cpp";
    g_INT_01d1d404 = 0x5f3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar1 = (SVoxelGrid *)calloc(0x40,1);
  this_ptr->voxel_buffer2 = pSVar1;
  if (pSVar1 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CHAR_PTR_01d1d400 = "..\\core\\dcube.cpp";
  g_INT_01d1d404 = 0x5f5;
  core_main_c_displayErrorAndQuit_FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
