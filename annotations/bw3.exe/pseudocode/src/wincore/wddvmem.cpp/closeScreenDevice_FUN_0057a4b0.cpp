// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_0057a4b0
// Address: 0057a4b0
// Address Range: [[0057a4b0, 0057a587]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_0057a4b0(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_INT_02d0bcfc == 0) {
    if (g_INT_01c6cee8 != 0) {
      g_FlipPending = 1;
      return;
    }
    if (0 < g_INT_005fba1c) {
      iVar5 = g_INT_005fba20 >> 0x1f;
      iVar1 = g_INT_005fba20 + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_INT_005fba18 * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(byte **)((int)g_ScreenBufferArray + iVar2) =
             g_PTR_0060b010 + g_INT_005fba18 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3);
        iVar4 = iVar4 + 1;
        *(byte **)((int)g_ZBufferScanlineArray + iVar2) = g_SoftwareZBuffer + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_INT_005fba1c);
    }
    HVar3 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 655;
      core_main_c_displayErrorAndQuit_FUN_004e4330("closeScreenDevice - Unable to unlock");
    }
    g_FlipPending = 1;
  }
  return;
}
