// Name: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60
// Address: 005ece60
// Address Range: [[005ece60, 005ecee1]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_initializeScanlinePointers_FUN_005ece60(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_005ece60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < g_WindowHeight) {
    iVar5 = g_BitsPerPixel >> 0x1f;
    iVar1 = g_BitsPerPixel + iVar5 * -8;
    iVar2 = g_WindowWidth * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(void **)((int)g_ScreenBufferArray + iVar3) =
           (void *)(g_WindowWidth * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3) +
                   (int)g_BackBuffer);
      iVar4 = iVar4 + 1;
      *(int *)((int)g_ZBufferScanlineArray + iVar3) = (int)g_SoftwareZBuffer + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < g_WindowHeight);
  }
  return;
}
