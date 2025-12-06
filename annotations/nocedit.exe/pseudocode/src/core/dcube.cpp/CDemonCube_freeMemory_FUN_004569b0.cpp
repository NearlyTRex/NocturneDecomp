// Name: core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0
// Address: 004569b0
// Address Range: [[004569b0, 00456a8a]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube * this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_004569b0(CDemonCube *this_ptr)

{
  CVector3f *pCVar1;
  
  pCVar1 = this_ptr->vertex_buffer;
  if (pCVar1 != (CVector3f *)0x0) {
    g_CurrentDebugLine = 0x614;
    g_CurrentDebugFilename = "..\\core\\dcube.cpp";
    if (pCVar1 != (CVector3f *)0x0) {
      crt_memory_c_free_FUN_005fe659(&pCVar1[-1].z);
    }
    this_ptr->vertex_buffer = (CVector3f *)0x0;
  }
  if (this_ptr->triangle_buffer != (CDemonCubeTriangle *)0x0) {
    g_CurrentDebugFilename = "..\\core\\dcube.cpp";
    g_CurrentDebugLine = 0x618;
    crt_memory_c_free_FUN_005fe659(this_ptr->triangle_buffer);
    this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  }
  if (this_ptr->ground_type_memory != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (this_ptr->ground_type_memory,"..\\core\\dcube.cpp",0x61c);
    this_ptr->ground_type_memory = (void *)0x0;
  }
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->voxel_buffer1,"..\\core\\dcube.cpp",0x620)
    ;
    this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  }
  if (this_ptr->voxel_buffer2 == (SVoxelGrid *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->voxel_buffer2,"..\\core\\dcube.cpp",0x624);
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  return;
}
