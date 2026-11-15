// Name: core_dcube.cpp_CDemonCube_freeMemory_FUN_004466c0
// Address: 004466c0
// Address Range: [[004466c0, 00446741]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_004466c0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_freeMemory_FUN_004466c0(CDemonCube *this_ptr)

{
  if (this_ptr->vertex_buffer != (CVector3f *)0x0) {
    FUN_005b7fce(this_ptr->vertex_buffer);
    this_ptr->vertex_buffer = (CVector3f *)0x0;
  }
  if (this_ptr->triangle_buffer != (CDemonCubeTriangle *)0x0) {
    FUN_005b7fce(this_ptr->triangle_buffer);
    this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  }
  if (this_ptr->ground_type_memory != (void *)0x0) {
    FUN_005b86a0(this_ptr->ground_type_memory);
    this_ptr->ground_type_memory = (void *)0x0;
  }
  if (this_ptr->voxel_buffer1 != (SVoxelGrid *)0x0) {
    FUN_005b86a0(this_ptr->voxel_buffer1);
    this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  }
  if (this_ptr->voxel_buffer2 == (SVoxelGrid *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->voxel_buffer2);
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  return;
}
