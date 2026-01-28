// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
// Address Range: [[004942d0, 00494375]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

{
  CDemonPart *ptr;
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (this_ptr->cube_list != (SVoxelCubeMetadata *)0x0) {
    iVar3 = 0;
    for (iVar2 = 0;
        iVar2 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
        iVar2 = iVar2 + 1) {
      puVar1 = (uint *)((int)this_ptr->cube_list->voxel_data + iVar3 + -0x14);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[0x15] = 0;
      if ((CDemonPart *)puVar1[3] != (CDemonPart *)0x0) {
        g_CurrentDebugLine = 0x9c;
        g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
        ptr = core_dpart_cpp_CDemonPart_dtor_FUN_00482160((CDemonPart *)puVar1[3]);
        shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
      }
      iVar3 = iVar3 + 0x58;
      puVar1[3] = 0;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->cube_list,"..\\core\\dtrace.cpp",0xa0);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
