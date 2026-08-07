// Name: wincore_wddvmem.cpp_openScreenDevice_FUN_00553470
// Address: 00553470
// Address Range: [[00553470, 0055351f]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_openScreenDevice_FUN_00553470(void)

{
  int iVar1;
  HRESULT HVar2;
  int iVar3;
  DDSURFACEDESC local_74;
  
  if ((_DAT_02ddf56c == 0) && (g_UseExternalRenderer == 0)) {
    memset(&local_74,0,0x6c);
    local_74.dwSize = 0x6c;
    HVar2 = (*g_SoftwareRenderSurface->vtable->Lock)
                      (g_SoftwareRenderSurface,(RECT *)0x0,&local_74,1,(void *)0x0);
    if (HVar2 != 0) {
      g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
      g_CurrentLineNumber = 597;
      core_main_c_displayErrorAndQuit_FUN_004c8440("openScreenDevice - Unable to lock screen!");
    }
    if (0 < g_WindowHeight) {
      iVar1 = g_WindowHeight * 4;
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
