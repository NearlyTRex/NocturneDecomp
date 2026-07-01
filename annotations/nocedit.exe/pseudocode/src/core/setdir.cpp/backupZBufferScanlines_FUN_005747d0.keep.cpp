// Name: core_setdir.cpp_backupZBufferScanlines_FUN_005747d0
// Address: 005747d0
// MANUAL RECONSTRUCTION
// Address Range: [[005747d0, 00574828]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_backupZBufferScanlines_FUN_005747d0(int count)

#include "nocturne.h"

void __cdecl core_setdir_cpp_backupZBufferScanlines_FUN_005747d0(int count)

{
  int iVar2;

  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 103;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  for (iVar2 = 0; iVar2 < count; iVar2 = iVar2 + 1) {
    g_ZBufferScanlineArrayBackup[iVar2] = g_ZBufferScanlineArray[iVar2];
  }
  return;
}
