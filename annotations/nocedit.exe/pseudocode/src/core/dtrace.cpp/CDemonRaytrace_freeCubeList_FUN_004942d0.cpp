// Name: core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0
// Address: 004942d0
// Address Range: [[004942d0, 00494375]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace * this_ptr)

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeCubeList_FUN_004942d0(CDemonRaytrace *this_ptr)

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
      pCVar1 = (CDemonPart *)puVar2[3];
      puVar2[0x15] = 0;
      if (pCVar1 != (CDemonPart *)0x0) {
        g_CurrentDebugLine = 0x9c;
        g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
        if (pCVar1 != (CDemonPart *)0x0) {
          pCVar1 = core_dpart_cpp_CDemonPart_dtor_FUN_00482160(pCVar1);
          shape_memdbg_cpp_debugFree_FUN_0050f210(pCVar1);
        }
      }
      iVar4 = iVar4 + 0x58;
      puVar2[3] = 0;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->cube_list,"..\\core\\dtrace.cpp",0xa0);
  }
  this_ptr->cube_list = (SVoxelCubeMetadata *)0x0;
  return;
}
