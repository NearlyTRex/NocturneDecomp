// Name: core_dcube.cpp_CDemonCube_freeMemory_FUN_00453ec0
// Address: 00453ec0
// Address Range: [[00453ec0, 00453f41]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_00453ec0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_00453ec0(CDemonCube *this_ptr)

{
  if (this_ptr->vertex_buffer != (CVector3f *)0x0) {
    free(this_ptr->vertex_buffer);
    this_ptr->vertex_buffer = (CVector3f *)0x0;
  }
  if (this_ptr->triangle_buffer != (CDemonCubeTriangle *)0x0) {
    free(this_ptr->triangle_buffer);
    this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  }
  if (this_ptr->ground_type_memory != (void *)0x0) {
    debugFree(this_ptr->ground_type_memory);
    this_ptr->ground_type_memory = (void *)0x0;
  }
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    debugFree(this_ptr->voxel_buffer1);
    this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  }
  if (this_ptr->voxel_buffer2 == (SVoxelGrid *)0x0) {
    return;
  }
  debugFree(this_ptr->voxel_buffer2);
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  return;
}
