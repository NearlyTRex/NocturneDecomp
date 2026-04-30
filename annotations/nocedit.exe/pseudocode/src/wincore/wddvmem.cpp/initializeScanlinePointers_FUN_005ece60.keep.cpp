// Name: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
// Address: 005ece60
// MANUAL RECONSTRUCTION
// Address Range: [[005ece60, 005ecee1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void)

{
  int iVar2;
  int iVar4;
  int iVar6;

  iVar4 = 0;
  if (0 < g_WindowHeight) {
    iVar2 = g_WindowWidth * 4;
    iVar6 = 0;
    do {
      g_ScreenBufferArray[iVar4] =
           (char *)g_BackBuffer + g_WindowWidth * iVar4 * (g_BitsPerPixel / 8);
      g_ZBufferScanlineArray[iVar4] = (uint *)((char *)g_SoftwareZBuffer + iVar6);
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + iVar2;
    } while (iVar4 < g_WindowHeight);
  }
  return;
}
