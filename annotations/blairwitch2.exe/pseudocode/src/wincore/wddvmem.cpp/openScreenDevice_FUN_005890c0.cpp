// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005890c0
// Address: 005890c0
// Address Range: [[005890c0, 0058916f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005890c0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005890c0(void)

{
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  DDSURFACEDESC local_74;
  
  if ((g_Display24BitFallback == 0) && (g_INT_01c37788 == 0)) {
    memset(&local_74,0,0x6c);
    local_74.dwSize = 0x6c;
    HVar2 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,&local_74,1,(void *)0x0);
    if (HVar2 != 0) {
      g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d046a4 = 0x23b;
      core_main_c_displayErrorAndQuit_FUN_004e4500("openScreenDevice - Unable to lock screen!");
    }
    if (0 < g_INT_006141bc) {
      iVar1 = g_INT_006141bc * 4;
      iVar3 = 0;
      do {
        *(LPVOID *)((int)g_ScreenBufferArray + iVar3) = local_74.lpSurface;
        iVar3 = iVar3 + 4;
        local_74.lpSurface = (LPVOID)((int)local_74.lpSurface + local_74.dwPitchOrLinearSize.lPitch)
        ;
      } while (iVar3 < iVar1);
      return;
    }
  }
  return;
}
