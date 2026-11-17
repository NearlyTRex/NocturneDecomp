// Name: core_dlight.cpp_getRestoreMemory_FUN_004626f0
// Address: 004626f0
// Address Range: [[004626f0, 00462757]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

#include "nocturne.h"

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_004626f0(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_UINT_01b2d370) {
    g_CHAR_PTR_01d1d400 = "..\\core\\dlight.cpp";
    g_INT_01d1d404 = 0xa3;
    core_main_c_displayErrorAndQuit_FUN_005030e0("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_UINT_01b2d370 * 2;
  g_UINT_01b2d370 = g_UINT_01b2d370 + pixel_count + 8;
  return (void *)((uint)(g_UCHAR_ARRAY_0152d2a8 + iVar1 + 0x10) & 0xfffffff0);
}
