// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0
// Address: 004724c0
// Address Range: [[004724c0, 00472545]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004724c0(CDemonRaytrace *this_ptr)

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
      puVar1 = (uint *)((int)&this_ptr->cube_list->triangle_count + iVar3);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[0x15] = 0;
      if ((CDemonPart *)puVar1[3] != (CDemonPart *)0x0) {
        ptr = core_dpart_cpp_CDemonPart_dtor_FUN_004614b0((CDemonPart *)puVar1[3],0);
        debugFreeChecked(ptr);
      }
      iVar3 = iVar3 + 0x58;
      puVar1[3] = 0;
    }
    debugFree(this_ptr->cube_list);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
