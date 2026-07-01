// Name: core_path.cpp_renderAllPathMaps_FUN_005485f0
// Address: 005485f0
// MANUAL RECONSTRUCTION
// Address Range: [[005485f0, 00548673]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_renderAllPathMaps_FUN_005485f0(int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_renderAllPathMaps_FUN_005485f0(int depth,int red,int green,int fog)

{
  int iVar2;

  iVar2 = 0;
  if (0 < g_PathMapCount) {
    do {
      if (g_PathMapList[iVar2] == (CPathMap *)0x0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1704;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      if ((g_PathMapList[iVar2]->cached_world_position).x <= 9999.0) {
        core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0
                  (g_PathMapList[iVar2],depth,red,green,fog);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
