// Name: wincore_wddvmem.cpp_videoRestore_FUN_005ad2c0
// Address: 005ad2c0
// Address Range: [[005ad2c0, 005ad3cf] [005ad3d1, 005ad441]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_videoRestore_FUN_005ad2c0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((g_INT_02c83370 == 0) || (g_GraphicsResetFlag == 0)) {
    if (g_DirectDrawSurface != (IDirectDrawSurface *)0x0) {
      (*g_DirectDrawSurface->vtable->Restore)(g_DirectDrawSurface);
      (*g_SoftwareRenderSurface->vtable->Restore)(g_SoftwareRenderSurface);
      if (g_DirectDrawUnknown != (IUnknown *)0x0) {
        HVar2 = (*g_DirectDrawSurface->vtable->SetPalette)(g_DirectDrawSurface,g_DirectDrawUnknown);
        if (HVar2 != 0) {
          g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
          g_CurrentLineNumber = 1022;
          core_main_c_displayErrorAndQuit_FUN_005030e0("videoRestore - Unable to set front buffer palette");
          return;
        }
      }
    }
  }
  else {
    iVar1 = _stricmp(g_CHAR_ARRAY_006257d0,"trigl.dll");
    if (iVar1 != 0) {
      iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005821c0
                        (g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0);
      if (iVar1 == 0) {
        g_INT_02c83370 = iVar1;
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
        wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300
                  (g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0);
      }
    }
    SetFocus(g_MainWindowHandle);
  }
  return;
}
