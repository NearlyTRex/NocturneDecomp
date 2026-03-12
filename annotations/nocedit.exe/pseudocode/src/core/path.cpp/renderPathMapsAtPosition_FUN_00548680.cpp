// Name: core_path.cpp_renderPathMapsAtPosition_FUN_00548680
// Address: 00548680
// Address Range: [[00548680, 00548744]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1010 [1013];
  int local_28;
  int local_24;
  int local_20;
  CVector3i local_1c;
  CPathMap *this_ptr;
  
  bVar3 = 0;
  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,position,&local_1c);
  (&local_24)[(uint)bVar3 * -2] = *(int *)((int)&local_1c + (uint)bVar3 * -8 + 4);
  (&local_20)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
       *(int *)((int)&local_1c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar1) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6b5;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      this_ptr = *(CPathMap **)((int)g_PathMapList + iVar1);
      if (((((int)(this_ptr->cached_world_position).x < 0x461c3c01) &&
           (local_1c.x == (this_ptr->voxel_coords).x)) && (local_24 == (this_ptr->voxel_coords).y))
         && (local_20 == (this_ptr->voxel_coords).z)) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(this_ptr,depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
