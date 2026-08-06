// Name: core_path.cpp_renderPathMapsAtPosition_FUN_004f1f80
// Address: 004f1f80
// Address Range: [[004f1f80, 004f2044]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_004f1f80(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_004f1f80(CVector3f *position,int depth,int red,int green,int fog)

{
  CPathMap *this_ptr;
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1010 [1013];
  int local_28;
  int local_24;
  int local_20;
  CVector3i local_1c;
  
  bVar3 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_0046b700
            (&g_CDemonRaytrace_01fba938,position,&local_1c);
  local_28 = local_1c.x;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)((int)&local_1c + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  iVar2 = 0;
  if (0 < _DAT_01e312f8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e312fc) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1717;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Global pathmap list corruption");
      }
      this_ptr = *(CPathMap **)(iVar1 + 0x1e312fc);
      if (((((int)(this_ptr->cached_world_position).x < 0x461c3c01) &&
           (local_28 == (this_ptr->voxel_coords).x)) && (local_24 == (this_ptr->voxel_coords).y)) &&
         (local_20 == (this_ptr->voxel_coords).z)) {
        core_path_cpp_CPathMap_renderPathMap_FUN_004f18c0(this_ptr,depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e312f8);
  }
  return;
}
