// Name: core_dtrace.cpp_CDemonRaytrace_ctor_FUN_00473470
// Address: 00473470
// Address Range: [[00473470, 004734ab]]
// Convention: __cdecl
// Signature: CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00473470(CDemonRaytrace *this_ptr)

#include "nocturne.h"

CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_ctor_FUN_00473470(CDemonRaytrace *this_ptr)

{
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  (this_ptr->grid_coord).x = 0;
  (this_ptr->grid_coord).y = 0;
  (this_ptr->grid_coord).z = 0;
  this_ptr->rendering_mode = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return this_ptr;
}
