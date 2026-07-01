// Name: core_path.cpp_renderPathMapsAtPosition_FUN_00548680
// Address: 00548680
// MANUAL RECONSTRUCTION
// Address Range: [[00548680, 00548744] [006107cf, 006107ef]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_renderPathMapsAtPosition_FUN_00548680(CVector3f *position,int depth,int red,int green,int fog)

{
  int iVar2;
  CVector3i local_1c;
  CPathMap *this_ptr;

  core_dtrace_cpp_CDemonRaytrace_worldPositionToVoxelCoords_FUN_00499880
            (&g_CDemonRaytraceInstance,position,&local_1c);
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    do {
      if (g_PathMapList[iVar2] == (CPathMap *)0x0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1717;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      this_ptr = g_PathMapList[iVar2];
      if ((((this_ptr->cached_world_position).x <= 9999.0 &&
           (local_1c.x == (this_ptr->voxel_coords).x)) && (local_1c.y == (this_ptr->voxel_coords).y)
          ) && (local_1c.z == (this_ptr->voxel_coords).z)) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(this_ptr,depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
