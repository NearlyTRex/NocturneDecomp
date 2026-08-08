// Name: wincore_wddvmem.cpp_FUN_00553ba0
// Address: 00553ba0
// Address Range: [[00553ba0, 00553c9f] [00553ca1, 00553d11]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_FUN_00553ba0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_FUN_00553ba0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((g_UseDirect3D == 0) || (_DAT_02ddf568 == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        HVar2 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
        if (HVar2 != 0) {
          g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
          g_CurrentLineNumber = 991;
          core_main_c_displayErrorAndQuit_FUN_004c8440("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005324a0
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_UseDirect3D = iVar1;
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        (*g_DirectDrawUnknown->vtable->Release)(g_DirectDrawUnknown);
        g_DirectDrawUnknown = (IUnknown *)0x0;
      }
      if (g_SoftwareRenderSurface != (IDirectDrawSurface *)0x0) {
        (*g_SoftwareRenderSurface->vtable->Release)((IUnknown *)g_SoftwareRenderSurface);
        g_SoftwareRenderSurface = (IDirectDrawSurface *)0x0;
      }
      if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
        (*g_DirectDrawSurface->vtable->Release)((IUnknown *)g_DirectDrawSurface);
        g_DirectDrawSurface = (IDirectDrawSurface *)0x0;
      }
      if (g_DirectDrawObject != (IDirectDraw *)0x0) {
        (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
        (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
        g_DirectDrawObject = (IDirectDraw *)0x0;
      }
      iVar1 = DirectDrawCreate(0,&g_DirectDrawObject,0);
      if (iVar1 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                  (g_DirectDrawObject,(HWND)_DAT_02de2098,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
    SetFocus(_DAT_02de2098);
  }
  return;
}
