// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_00589170
// Address: 00589170
// Address Range: [[00589170, 00589247]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00589170(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (g_Display24BitFallback == 0) {
    if (g_INT_01c37788 != 0) {
      g_FlipPending = 1;
      return;
    }
    if (0 < g_INT_006141bc) {
      iVar5 = g_INT_006141c0 >> 0x1f;
      iVar1 = g_INT_006141c0 + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_INT_006141b8 * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(byte **)((int)g_ScreenBufferArray + iVar2) =
             g_PTR_00622010 + g_INT_006141b8 * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3);
        iVar4 = iVar4 + 1;
        *(byte **)((int)g_ZBufferScanlineArray + iVar2) = g_SoftwareZBuffer + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_INT_006141bc);
    }
    HVar3 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
    if (HVar3 != 0) {
      g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d046a4 = 0x265;
      core_main_c_displayErrorAndQuit_FUN_004e4500("closeScreenDevice - Unable to unlock");
    }
    g_FlipPending = 1;
  }
  return;
}
