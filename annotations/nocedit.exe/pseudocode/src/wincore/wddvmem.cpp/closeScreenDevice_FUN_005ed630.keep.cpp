// Name: wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
// Address: 005ed630
// MANUAL RECONSTRUCTION
// Address Range: [[005ed630, 005ed707]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630(void)

{
  HRESULT HVar3;
  int iVar4;
  int iVar6;
  int iVar7;

  if (g_UseSoftwareRendering == 0) {
    if (g_UseExternalRenderer != 0) {
      g_RenderingInProgress = 1;
      return;
    }
    if (0 < g_WindowHeight) {
      iVar6 = 0;
      iVar7 = g_WindowWidth * 4;
      iVar4 = 0;
      do {
        g_ScreenBufferArray[iVar4] =
             (char *)g_BackBuffer + g_WindowWidth * iVar4 * (g_BitsPerPixel / 8);
        g_ZBufferScanlineArray[iVar4] = (uint *)((char *)g_SoftwareZBuffer + iVar6);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + iVar7;
      } while (iVar4 < g_WindowHeight);
    }
    HVar3 = (*g_SoftwareRenderSurface->vtable->Unlock)(g_SoftwareRenderSurface,(void *)0x0);
    if (HVar3 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 0x27f;
      core_main_c_displayErrorAndQuit_FUN_00506f10("closeScreenDevice - Unable to unlock");
    }
    g_RenderingInProgress = 1;
  }
  return;
}
