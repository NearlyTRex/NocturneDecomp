// Name: core_path.cpp_resetAllPathMaps_FUN_00548590
// Address: 00548590
// MANUAL RECONSTRUCTION
// Address Range: [[00548590, 005485ec]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetAllPathMaps_FUN_00548590(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetAllPathMaps_FUN_00548590(void)

{
  int iVar3;

  iVar3 = 0;
  if (0 < g_PathMapCount) {
    do {
      if (g_PathMapList[iVar3] == (CPathMap *)0x0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 0x6a1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      core_path_cpp_CPathMap_reset_FUN_00548510(g_PathMapList[iVar3]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < g_PathMapCount);
  }
  return;
}
