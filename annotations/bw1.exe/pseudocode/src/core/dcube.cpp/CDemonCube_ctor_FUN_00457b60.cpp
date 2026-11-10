// Name: core_dcube.cpp_CDemonCube_ctor_FUN_00457b60
// Address: 00457b60
// Address Range: [[00457b60, 00457b94]]
// Convention: __cdecl
// Signature: CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00457b60(CDemonCube *this_ptr)

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_00457b60(CDemonCube *this_ptr)

{
  this_ptr->vertex_buffer = (CVector3f *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_buffer = (CDemonCubeTriangle *)0x0;
  this_ptr->ground_type_memory = (void *)0x0;
  this_ptr->voxel_buffer1 = (SVoxelGrid *)0x0;
  this_ptr->voxel_buffer2 = (SVoxelGrid *)0x0;
  this_ptr->vertex_count = 0;
  return this_ptr;
}
