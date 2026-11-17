// Name: core_dlight.cpp_getRestoreMemory_FUN_0044e340
// Address: 0044e340
// Address Range: [[0044e340, 0044e3a7]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int pixel_count)

#include "nocturne.h"

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0044e340(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_UINT_01ab99ec) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 163;
    core_main_c_displayErrorAndQuit_FUN_004c8440("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_UINT_01ab99ec * 2;
  g_UINT_01ab99ec = g_UINT_01ab99ec + pixel_count + 8;
  return (void *)((uint)(g_UCHAR_ARRAY_014b9924 + iVar1 + 0x10) & 0xfffffff0);
}
