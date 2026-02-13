// Name: core_path.cpp_FUN_00548590
// Address: 00548590
// Address Range: [[00548590, 005485ec]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_FUN_00548590(void)

#include "nocturne.h"

void __cdecl core_path_cpp_FUN_00548590(void)

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
        g_CurrentLineNumber = 0x6a1;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Global pathmap list corruption");
      }
      puVar1 = (uint *)((int)g_PathMapList + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      core_path_cpp_CPathMap_reset_FUN_00548510((CPathMap *)*puVar1);
    } while (iVar3 < g_PathMapCount);
  }
  return;
}
