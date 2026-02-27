// Name: core_path.cpp_renderAllPathMaps_FUN_005485f0
// Address: 005485f0
// Address Range: [[005485f0, 00548673]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_005485f0(int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_renderAllPathMaps_FUN_005485f0(int depth,int red,int green,int fog)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < g_PathMapCount) {
    iVar1 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar1) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6a8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      if ((int)((*(CPathMap **)((int)g_PathMapList + iVar1))->cached_world_position).x < 0x461c3c01)
      {
        core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0
                  (*(CPathMap **)((int)g_PathMapList + iVar1),depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
