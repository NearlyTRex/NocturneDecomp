// Name: wincore_wddvmem.cpp_initializeScanlinePointers_FUN_00579b20
// Address: 00579b20
// Address Range: [[00579b20, 00579ba1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00579b20(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_initializeScanlinePointers_FUN_00579b20(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = 0;
  if (0 < g_INT_005fba1c) {
    iVar5 = g_INT_005fba20 >> 0x1f;
    iVar1 = g_INT_005fba20 + iVar5 * -8;
    iVar2 = g_INT_005fba18 * 4;
    iVar6 = 0;
    iVar3 = 0;
    do {
      *(byte **)((int)g_ScreenBufferArray + iVar3) =
           g_PTR_0060b010 + g_INT_005fba18 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3);
      iVar4 = iVar4 + 1;
      *(byte **)((int)g_ZBufferScanlineArray + iVar3) = g_SoftwareZBuffer + iVar6;
      iVar6 = iVar6 + iVar2;
      iVar3 = iVar3 + 4;
    } while (iVar4 < g_INT_005fba1c);
  }
  return;
}
