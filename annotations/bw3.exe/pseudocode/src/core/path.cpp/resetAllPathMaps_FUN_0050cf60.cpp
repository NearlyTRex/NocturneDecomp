// Name: core_path.cpp_resetAllPathMaps_FUN_0050cf60
// Address: 0050cf60
// Address Range: [[0050cf60, 0050cfbc]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_resetAllPathMaps_FUN_0050cf60(void)

#include "nocturne.h"

void __cdecl core_path_cpp_resetAllPathMaps_FUN_0050cf60(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_PathMapCount) {
    iVar2 = 0;
    do {
      if (*(int *)((int)g_PathMapList + iVar2) == 0) {
        g_CHAR_PTR_01d71de0 = "..\\core\\path.cpp";
        g_INT_01d71de4 = 0x6a2;
        core_main_c_displayErrorAndQuit_FUN_004e4330("Global pathmap list corruption");
      }
      puVar1 = (uint *)((int)g_PathMapList + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_0050cee0((CPathMap *)*puVar1);
    } while (iVar3 < g_PathMapCount);
  }
  return;
}
