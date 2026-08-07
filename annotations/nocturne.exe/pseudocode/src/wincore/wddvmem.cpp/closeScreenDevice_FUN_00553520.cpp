// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_00553520
// Address: 00553520
// Address Range: [[00553520, 005535f7]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520(void)

{
  int iVar1;
  int iVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (_DAT_02ddf56c == 0) {
    if (g_UseExternalRenderer != 0) {
      _DAT_02ddf564 = 1;
      return;
    }
    if (0 < g_WindowHeight) {
      iVar5 = g_BitsPerPixel >> 0x1f;
      iVar1 = g_BitsPerPixel + iVar5 * -8;
      iVar6 = 0;
      iVar7 = g_WindowWidth * 4;
      iVar4 = 0;
      iVar2 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar2) =
             (void *)((int)g_BackBuffer +
                     g_WindowWidth * iVar4 * ((int)(iVar1 - (uint)(iVar5 << 2 < 0)) >> 3));
        iVar4 = iVar4 + 1;
        *(int *)((int)g_ZBufferScanlineArray + iVar2) = (int)g_SoftwareZBuffer + iVar6;
        iVar6 = iVar6 + iVar7;
        iVar2 = iVar2 + 4;
      } while (iVar4 < g_WindowHeight);
    }
    HVar3 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 639;
      core_main_c_displayErrorAndQuit_FUN_004c8440("closeScreenDevice - Unable to unlock");
    }
    _DAT_02ddf564 = 1;
  }
  return;
}
