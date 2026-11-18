// Name: wincore_wddvmem.cpp_videoRestore_FUN_005897e0
// Address: 005897e0
// Address Range: [[005897e0, 005898df] [005898e1, 00589951]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005897e0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005897e0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((g_INT_0264bba0 == 0) || (g_GraphicsResetFlag == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        HVar2 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
        if (HVar2 != 0) {
          g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
          g_INT_01d046a4 = 0x3cf;
          core_main_c_displayErrorAndQuit_FUN_004e4500("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_0055f770
                      (g_INT_006141b8,g_INT_006141bc,g_INT_006141c0);
    if (iVar1 == 0) {
      g_INT_0264bba0 = iVar1;
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
      HVar2 = DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                  (g_DirectDrawObject,g_MainWindowHandle,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50
                (g_INT_006141b8,g_INT_006141bc,g_INT_006141c0);
    }
    SetFocus(g_MainWindowHandle);
  }
  return;
}
