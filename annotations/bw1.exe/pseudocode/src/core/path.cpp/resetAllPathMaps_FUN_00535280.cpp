// Name: core_path.cpp_resetAllPathMaps_FUN_00535280
// Address: 00535280
// Address Range: [[00535280, 005352dc]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetAllPathMaps_FUN_00535280(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetAllPathMaps_FUN_00535280(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar2) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1698;
        core_main_c_displayErrorAndQuit_FUN_005030e0("Global pathmap list corruption");
      }
      puVar1 = (uint *)((int)g_PathMapList + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_00535200((CPathMap *)*puVar1);
    } while (iVar3 < g_PathMapCount);
  }
  return;
}
