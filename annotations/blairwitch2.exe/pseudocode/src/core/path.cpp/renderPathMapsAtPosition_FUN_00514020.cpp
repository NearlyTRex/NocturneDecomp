// Name: core_path.cpp_renderPathMapsAtPosition_FUN_00514020
// Address: 00514020
// Address Range: [[00514020, 005140e4]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00514020(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00514020(CVector3f *position,int depth,int red,int green,int fog)

{
  CPathMap *this_ptr;
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1010 [1013];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  CVector3i CStack_1c;
  
  bVar3 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00476a50
            (&g_CDemonRaytraceInstance,position,&CStack_1c);
  iStack_28 = CStack_1c.x;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + 4);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&CStack_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  iVar2 = 0;
  if (0 < _DAT_01e4fed8) {
    iVar1 = 0;
    do {
      if (*(int *)(iVar1 + 0x1e4fedc) == 0) {
        _DAT_01d046a0 = "..\\core\\path.cpp";
        _DAT_01d046a4 = 0x6b5;
        core_main_c_FUN_004e4500("Global pathmap list corruption");
      }
      this_ptr = *(CPathMap **)(iVar1 + 0x1e4fedc);
      if (((((int)(this_ptr->cached_world_position).x < 0x461c3c01) &&
           (iStack_28 == (this_ptr->voxel_coords).x)) && (iStack_24 == (this_ptr->voxel_coords).y))
         && (iStack_20 == (this_ptr->voxel_coords).z)) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00513950(this_ptr,depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < _DAT_01e4fed8);
  }
  return;
}
