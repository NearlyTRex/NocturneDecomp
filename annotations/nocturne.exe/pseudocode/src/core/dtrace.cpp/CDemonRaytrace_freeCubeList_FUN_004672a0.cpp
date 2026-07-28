// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0
// Address: 004672a0
// Address Range: [[004672a0, 00467325]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004672a0(CDemonRaytrace *this_ptr)

{
  CDemonPart *pCVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->cube_list != (SVoxelCubeMetadata *)0x0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
        iVar3 = iVar3 + 1) {
      puVar2 = (uint *)((int)this_ptr->cube_list->voxel_data + iVar4 + -0x14);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[0x15] = 0;
      if ((CDemonPart *)puVar2[3] != (CDemonPart *)0x0) {
        pCVar1 = core_dpart_cpp_CDemonPart_dtor_FUN_00456f40((CDemonPart *)puVar2[3],0);
        FUN_00564494(pCVar1);
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    FUN_005638d0(this_ptr->cube_list);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
