// Name: core_dcube.cpp_CDemonCube_ctor_FUN_004464b0
// Address: 004464b0
// Address Range: [[004464b0, 004464e4]]
// Convention: __cdecl
// Signature: CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_004464b0(CDemonCube *this_ptr)

#include "nocturne.h"

CDemonCube * __cdecl core_dcube_cpp_CDemonCube_ctor_FUN_004464b0(CDemonCube *this_ptr)

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
