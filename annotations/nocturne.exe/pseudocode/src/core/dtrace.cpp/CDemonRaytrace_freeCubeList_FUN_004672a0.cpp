// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
// Address: 004672a0
// Address Range: [[004672a0, 00467325]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace *this_ptr)

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
        ptr = core_dpart_cpp_CDemonPart_dtor_FUN_00456f40((CDemonPart *)puVar1[3],0);
        operator_delete(ptr);
      }
      iVar3 = iVar3 + 0x58;
      puVar1[3] = 0;
    }
    free(this_ptr->cube_list);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
