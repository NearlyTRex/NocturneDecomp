// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0
// Address: 004724c0
// Address Range: [[004724c0, 00472545]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

{
  CDemonPart *pCVar1;
  SVoxelCubeMetadata *pSVar2;
  int iVar3;
  int iVar4;
  
  if (this_ptr->cube_list != (SVoxelCubeMetadata *)0x0) {
    iVar4 = 0;
    for (iVar3 = 0;
        iVar3 < (this_ptr->grid_coord).z * (this_ptr->grid_coord).x * (this_ptr->grid_coord).y;
        iVar3 = iVar3 + 1) {
      pSVar2 = this_ptr->cube_list + iVar4;
      *(uint *)pSVar2 = 0;
      *(uint *)(pSVar2 + 4) = 0;
      *(uint *)(pSVar2 + 0x54) = 0;
      if (*(CDemonPart **)(pSVar2 + 0xc) != (CDemonPart *)0x0) {
        pCVar1 = core_dpart_cpp_CDemonPart_dtor_FUN_004614b0(*(CDemonPart **)(pSVar2 + 0xc),0);
        FUN_005b7fdc(pCVar1);
      }
      iVar4 = iVar4 + 0x58;
      *(uint *)(pSVar2 + 0xc) = 0;
    }
    FUN_005b86a0(this_ptr->cube_list);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
