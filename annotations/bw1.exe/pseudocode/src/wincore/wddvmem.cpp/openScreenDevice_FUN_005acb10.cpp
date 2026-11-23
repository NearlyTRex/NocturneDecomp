// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_005acb10
// Address: 005acb10
// Address Range: [[005acb10, 005acbf8]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_005acb10(void)

{
  HRESULT HVar1;
  int iVar2;
  int iVar3;
  DDSURFACEDESC local_7c;
  
  if ((g_INT_02c9931c == 0) && (g_INT_01c50948 == 0)) {
    memset(&local_7c,0,0x6c);
    local_7c.dwSize = 0x6c;
    HVar1 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,&local_7c,1,(void *)0x0);
    if (HVar1 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 610;
      core_main_c_displayErrorAndQuit_FUN_005030e0("openScreenDevice - Unable to lock screen!");
    }
    if (g_INT_02c9931c == 0) {
      iVar3 = g_INT_02c9932c * g_INT_02c99328 >> 0x1f;
      local_7c.lpSurface =
           (LPVOID)((int)local_7c.lpSurface +
                   ((int)((g_INT_02c9932c * g_INT_02c99328 + iVar3 * -8) - (uint)(iVar3 << 2 < 0))
                   >> 3) + local_7c.dwPitchOrLinearSize.lPitch * g_INT_02c99330);
    }
    if (0 < g_INT_0061b49c) {
      iVar3 = g_INT_0061b49c * 4;
      iVar2 = 0;
      do {
        *(LPVOID *)((int)g_ScreenBufferArray + iVar2) = local_7c.lpSurface;
        iVar2 = iVar2 + 4;
        local_7c.lpSurface = (LPVOID)((int)local_7c.lpSurface + local_7c.dwPitchOrLinearSize.lPitch)
        ;
      } while (iVar2 < iVar3);
      return;
    }
  }
  return;
}
