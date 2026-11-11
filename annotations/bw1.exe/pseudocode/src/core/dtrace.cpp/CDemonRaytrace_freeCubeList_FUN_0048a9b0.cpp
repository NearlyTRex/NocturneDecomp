// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0
// Address: 0048a9b0
// Address Range: [[0048a9b0, 0048aa35]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0(CDemonRaytrace *this_ptr)

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
      puVar2 = (uint *)((int)&this_ptr->cube_list->triangle_count + iVar4);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[0x15] = 0;
      if ((CDemonPart *)puVar2[3] != (CDemonPart *)0x0) {
        pCVar1 = core_dpart_cpp_CDemonPart_dtor_FUN_004799c0((CDemonPart *)puVar2[3],0);
        FUN_005c0344(pCVar1);
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    FUN_005c09f0(this_ptr->cube_list);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
