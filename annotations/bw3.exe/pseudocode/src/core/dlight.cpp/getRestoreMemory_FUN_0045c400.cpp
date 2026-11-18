// Name: core_dlight.cpp_getRestoreMemory_FUN_0045c400
// Address: 0045c400
// Address Range: [[0045c400, 0045c467]]
// Convention: __cdecl
// Signature: void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0045c400(int pixel_count)

#include "nocturne.h"

void * __cdecl core_dlight_cpp_getRestoreMemory_FUN_0045c400(int pixel_count)

{
  int iVar1;
  
  if (0x300060U - pixel_count < g_ShadowRestoreAllocator) {
    g_CHAR_PTR_01d71de0 = "..\\core\\dlight.cpp";
    g_INT_01d71de4 = 0xa3;
    core_main_c_displayErrorAndQuit_FUN_004e4330("getRestoreMemory - Need more static memory");
  }
  iVar1 = g_ShadowRestoreAllocator * 2;
  g_ShadowRestoreAllocator = g_ShadowRestoreAllocator + pixel_count + 8;
  return (void *)((uint)(g_ShadowRestoreBuffer + iVar1 + 0x10) & 0xfffffff0);
}
