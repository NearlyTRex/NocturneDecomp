// Name: wincore_wddvmem.cpp_videoRestore_FUN_005edc80
// Address: 005edc80
// Address Range: [[005edc80, 005edd7f] [005edd81, 005eddf1]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_videoRestore_FUN_005edc80(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005edc80(void)

{
  int iVar1;
  HRESULT HVar2;
  IDirectDrawSurface *pIVar3;
  IUnknown *pIVar4;
  
  if ((g_FullscreenMode == 0) || (g_GraphicsResetFlag == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        pIVar3 = g_DirectDrawSurface;
        pIVar4 = g_DirectDrawUnknown;
        iVar1 = (*g_DirectDrawSurface->vtable->SetPalette)();
        if (iVar1 != 0) {
          g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
          g_CurrentLineNumber = 999;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("videoRestore - Unable to set front buffer palette",pIVar3,pIVar4);
          return;
        }
      }
    }
  }
  else {
    iVar1 = wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_FullscreenMode = iVar1;
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
      HVar2 = crt_ddraw_c_DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)
                  (g_DirectDrawObject,g_MainWindowHandle,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
    (*PTR_SetFocus_006114e8)(g_MainWindowHandle);
  }
  return;
}
