// Name: core_path.cpp_FUN_005485f0
// Address: 005485f0
// Address Range: [[005485f0, 00548673]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_FUN_005485f0(void)

#include "nocturne.h"

void __cdecl core_path_cpp_FUN_005485f0(void)

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
      if (*(int *)(*(int *)((int)g_PathMapList + iVar1) + 0x138c0) < 0x461c3c01) {
        core_path_cpp_FUN_00547fc0();
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < g_PathMapCount);
  }
  return;
}
