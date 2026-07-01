// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
// MANUAL RECONSTRUCTION
// Address Range: [[004942d0, 00494375]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

{
  CDemonPart *ptr;
  SVoxelCubeMetadata *cube;
  int iVar2;

  if (this_ptr->cube_list != (SVoxelCubeMetadata *)0x0) {
    for (iVar2 = 0;
        iVar2 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
        iVar2 = iVar2 + 1) {
      cube = &this_ptr->cube_list[iVar2];
      cube->triangle_count = 0;
      cube->triangle_list = (CDemonTriangle *)0x0;
      cube->triangle_flags = (uchar *)0x0;
      if (cube->part_ptr != (CDemonPart *)0x0) {
        g_CurrentDebugLine = 0x9c;
        g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
        ptr = core_dpart_cpp_CDemonPart_dtor_FUN_00482160(cube->part_ptr,0);
        shape_memdbg_cpp_debugFreeChecked_FUN_0050f210(ptr);
      }
      cube->part_ptr = (CDemonPart *)0x0;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->cube_list,"..\\core\\dtrace.cpp",160);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
