// Name: core_setdir.cpp_CZThumb_backupZBufferScanlines_FUN_005747d0
// Address: 005747d0
// Address Range: [[005747d0, 00574828]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_backupZBufferScanlines_FUN_005747d0(CZThumb *this_ptr,int count)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_backupZBufferScanlines_FUN_005747d0(CZThumb *this_ptr,int count)

{
  int iVar1;
  int iVar2;
  
  if (g_ZBufferScanlineArrayBackup[0] != (uint *)0x0) {
    g_CurrentFilename = "..\\core\\setdir.cpp";
    g_CurrentLineNumber = 0x67;
    core_main_c_displayErrorAndQuit_FUN_00506f10("saveZBufferTable - already saved!");
  }
  if (0 < (int)this_ptr) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      *(uint *)((int)g_ZBufferScanlineArrayBackup + iVar2) =
           *(uint *)((int)g_ZBufferScanlineArray + iVar2);
      iVar2 = iVar1;
    } while (iVar1 < (int)this_ptr * 4);
  }
  return;
}
