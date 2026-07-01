// Name: core_setdir.cpp_restoreZBufferTable_FUN_00574830
// Address: 00574830
// MANUAL RECONSTRUCTION
// Address Range: [[00574830, 00574891]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00574830(int count)

#include "nocturne.h"

void __cdecl core_setdir_cpp_restoreZBufferTable_FUN_00574830(int count)

{
  int iVar2;

  if (g_ZBufferScanlineArrayBackup[0] == (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 112;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - not saved!");
  }
  for (iVar2 = 0; iVar2 < count; iVar2 = iVar2 + 1) {
    g_ZBufferScanlineArray[iVar2] = g_ZBufferScanlineArrayBackup[iVar2];
  }
  g_ZBufferScanlineArrayBackup[0] = (uint *)0x0;
  return;
}
