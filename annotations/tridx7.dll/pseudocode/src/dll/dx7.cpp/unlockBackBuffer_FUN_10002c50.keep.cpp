// Name: dll_dx7.cpp_unlockBackBuffer_FUN_10002c50
// Address: 10002c50
// MANUAL RECONSTRUCTION
// Address Range: [[10002c50, 10002ca2]]
// Convention: __cdecl
// Signature: int __cdecl dll_dx7_cpp_unlockBackBuffer_FUN_10002c50(void)

#include "nocturne.h"

int __cdecl dll_dx7_cpp_unlockBackBuffer_FUN_10002c50(void)

{
  int iVar1;

  if (g_BackBufferLocked == 0) {
    return 1;
  }
  if (0 < g_ScreenHeight) {
    memcpy(g_ScanlinePtrBase,g_ScanlinePointers,
           g_ScreenHeight * sizeof(g_ScanlinePointers[0]));
  }
  iVar1 = dll_dx7_cpp_unlockSurface_FUN_10002cb0(g_BackBufferSurface);
  if (iVar1 == 0) {
    return 0;
  }
  g_BackBufferLocked = 0;
  return 1;
}
