// Name: core_path.cpp_resetAllPathMaps_FUN_004f1e90
// Address: 004f1e90
// Address Range: [[004f1e90, 004f1eec]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetAllPathMaps_FUN_004f1e90(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetAllPathMaps_FUN_004f1e90(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01e312f8) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_CPathMap_PTR_ARRAY_01e312fc + iVar2) == 0) {
        g_CurrentFilename = "..\\core\\path.cpp";
        g_CurrentLineNumber = 1697;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Global pathmap list corruption");
      }
      puVar1 = (uint *)((int)g_CPathMap_PTR_ARRAY_01e312fc + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_004f1e10((CPathMap *)*puVar1);
    } while (iVar3 < g_INT_01e312f8);
  }
  return;
}
