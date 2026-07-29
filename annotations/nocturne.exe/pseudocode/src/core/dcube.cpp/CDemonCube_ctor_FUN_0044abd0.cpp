// Name: core_dcube.cpp_CDemonCube_ctor_FUN_0044abd0
// Address: 0044abd0
// Address Range: [[0044abd0, 0044ac04]]
// Convention: __cdecl
// Signature: CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_0044abd0(CDemonCube *this_ptr)

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_0044abd0(CDemonCube *this_ptr)

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
