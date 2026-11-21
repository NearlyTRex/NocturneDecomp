// Name: core_setdir.cpp_restoreZBufferTable_FUN_00538390
// Address: 00538390
// Address Range: [[00538390, 005383f1]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

#include "nocturne.h"

void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00538390(int count)

{
  int iVar1;
  int iVar2;
  
  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 112;
    core_main_c_displayErrorAndQuit_FUN_004e4500("saveZBufferTable - not saved!");
  }
  if (0 < count) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)((int)g_ZBufferScanlineArray + iVar2) =
           *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar2);
      iVar2 = iVar1;
    } while (iVar1 < count * 4);
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  return;
}
