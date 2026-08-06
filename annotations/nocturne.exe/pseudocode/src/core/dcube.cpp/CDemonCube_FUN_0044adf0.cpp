// Name: core_dcube.cpp_CDemonCube_FUN_0044adf0
// Address: 0044adf0
// Address Range: [[0044adf0, 0044ae73]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_FUN_0044adf0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_FUN_0044adf0(CDemonCube *this_ptr)

{
  if (this_ptr->vertex_buffer != (CVector3f *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(&this_ptr->vertex_buffer[-1].z);
    this_ptr->vertex_buffer = (CVector3f *)0x0;
  }
  if (this_ptr->triangle_buffer != (CDemonCubeTriangle *)0x0) {
    shape_memdbg_cpp_free_FUN_00564486(this_ptr->triangle_buffer);
    this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  }
  if (this_ptr->ground_type_memory != (void *)0x0) {
    free(this_ptr->ground_type_memory);
    this_ptr->ground_type_memory = (void *)0x0;
  }
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    free(this_ptr->voxel_buffer1);
    this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  }
  if (this_ptr->voxel_buffer2 != (SVoxelGrid *)0x0) {
    free(this_ptr->voxel_buffer2);
    this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
    return;
  }
  return;
}
