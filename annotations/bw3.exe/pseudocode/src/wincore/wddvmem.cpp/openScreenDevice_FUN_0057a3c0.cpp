// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_0057a3c0
// Address: 0057a3c0
// Address Range: [[0057a3c0, 0057a4a8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_0057a3c0(void)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  DDSURFACEDESC local_7c;
  
  if ((g_INT_02d0bcfc == 0) && (g_INT_01c6cee8 == 0)) {
    memset(&local_7c,0,0x6c);
    local_7c.dwSize = 0x6c;
    HVar1 = (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Lock)
                      (g_IDirectDrawSurface_PTR_02d0bce8,(RECT *)0x0,&local_7c,1,(void *)0x0);
    if (HVar1 != 0) {
      g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
      g_INT_01d71de4 = 0x262;
      core_main_c_displayErrorAndQuit_FUN_004e4330("openScreenDevice - Unable to lock screen!");
    }
    if (g_INT_02d0bcfc == 0) {
      iVar3 = g_INT_02d0bd0c * g_INT_02d0bd08 >> 0x1f;
      local_7c.lpSurface =
           (LPVOID)((int)local_7c.lpSurface +
                   ((int)((g_INT_02d0bd0c * g_INT_02d0bd08 + iVar3 * -8) - (uint)(iVar3 << 2 < 0))
                   >> 3) + local_7c.dwPitchOrLinearSize.lPitch * g_INT_02d0bd10);
    }
    if (0 < g_INT_005fba1c) {
      iVar3 = g_INT_005fba1c * 4;
      iVar2 = 0;
      do {
        *(LPVOID *)((int)g_ARRAY_PTR_01c5faec + iVar2) = local_7c.lpSurface;
        iVar2 = iVar2 + 4;
        local_7c.lpSurface = (LPVOID)((int)local_7c.lpSurface + local_7c.dwPitchOrLinearSize.lPitch)
        ;
      } while (iVar2 < iVar3);
      return;
    }
  }
  return;
}
