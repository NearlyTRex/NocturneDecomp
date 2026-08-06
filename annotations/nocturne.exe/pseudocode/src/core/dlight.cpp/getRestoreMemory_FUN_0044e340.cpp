// Name: core_dlight.cpp_getRestoreMemory_FUN_0044e340
// Address: 0044e340
// Address Range: [[0044e340, 0044e3a7]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < _DAT_01ab99ec) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_004c8440("getRestoreMemory - Need more static memory");
  }
  iVar1 = _DAT_01ab99ec * 2;
  _DAT_01ab99ec = _DAT_01ab99ec + pixel_count + 8;
  return (void *)(iVar1 + 0x14b9934U & 0xfffffff0);
}
