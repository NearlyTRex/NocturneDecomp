// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
// Address: 005ed580
// MANUAL RECONSTRUCTION
// Address Range: [[005ed580, 005ed62f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580(void)

{
  HRESULT HVar2;
  int iVar3;
  DDSURFACEDESC local_74;

  if ((g_UseSoftwareRendering == 0) && (g_UseExternalRenderer == 0)) {
    memset(&local_74,0,0x6c);
    local_74.dwSize = 0x6c;
    HVar2 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,&local_74,1,(void *)0x0);
    if (HVar2 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 597;
      core_main_c_displayErrorAndQuit_FUN_00506f10("openScreenDevice - Unable to lock screen!");
    }
    if (0 < g_WindowHeight) {
      iVar3 = 0;
      do {
        g_ScreenBufferArray[iVar3] = local_74.lpSurface;
        iVar3 = iVar3 + 1;
        local_74.lpSurface =
             (LPVOID)((char *)local_74.lpSurface + local_74.dwPitchOrLinearSize.lPitch);
      } while (iVar3 < g_WindowHeight);
    }
  }
  return;
}
