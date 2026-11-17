// Name: wincore_wddvmem.cpp_videoRestore_FUN_0057ab70
// Address: 0057ab70
// Address Range: [[0057ab70, 0057ac7f] [0057ac81, 0057acf1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_0057ab70(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_0057ab70(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((g_INT_02cf5fcc == 0) || (g_GraphicsResetFlag == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        HVar2 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
        if (HVar2 != 0) {
          g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
          g_INT_01d71de4 = 0x3fe;
          core_main_c_displayErrorAndQuit_FUN_004e4330("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = _stricmp(g_RendererDllPath,"trigl.dll");
    if (iVar1 != 0) {
      iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_00565a90
                        (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
      if (iVar1 == 0) {
        g_INT_02cf5fcc = iVar1;
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
        wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0
                  (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
      }
    }
    SetFocus(g_MainWindowHandle);
  }
  return;
}
