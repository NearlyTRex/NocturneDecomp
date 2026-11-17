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
  
  if ((g_INT_02c83370 == 0) || (g_INT_02c99318 == 0)) {
    if (g_IDirectDrawSurface_PTR_02c99304 != (IDirectDrawSurface *)0x0) {
      (*g_IDirectDrawSurface_PTR_02c99304->vtable->Restore)(g_IDirectDrawSurface_PTR_02c99304);
      (*g_IDirectDrawSurface_PTR_02c99308->vtable->Restore)(g_IDirectDrawSurface_PTR_02c99308);
      if (g_IUnknown_PTR_02c9930c != (IUnknown *)0x0) {
        HVar2 = (*g_IDirectDrawSurface_PTR_02c99304->vtable->SetPalette)
                          (g_IDirectDrawSurface_PTR_02c99304,g_IUnknown_PTR_02c9930c);
        if (HVar2 != 0) {
          g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
          g_INT_01d1d404 = 0x3fe;
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
        if (g_IUnknown_PTR_02c9930c != (IUnknown *)0x0) {
          (*g_IUnknown_PTR_02c9930c->vtable->Release)(g_IUnknown_PTR_02c9930c);
          g_IUnknown_PTR_02c9930c = (IUnknown *)0x0;
        }
        if (g_IDirectDrawSurface_PTR_02c99308 != (IDirectDrawSurface *)0x0) {
          (*g_IDirectDrawSurface_PTR_02c99308->vtable->Release)
                    ((IUnknown *)g_IDirectDrawSurface_PTR_02c99308);
          g_IDirectDrawSurface_PTR_02c99308 = (IDirectDrawSurface *)0x0;
        }
        if (g_IDirectDrawSurface_PTR_02c99304 != (IDirectDrawSurface *)0x0) {
          (*g_IDirectDrawSurface_PTR_02c99304->vtable->Release)
                    ((IUnknown *)g_IDirectDrawSurface_PTR_02c99304);
          g_IDirectDrawSurface_PTR_02c99304 = (IDirectDrawSurface *)0x0;
        }
        if (g_IDirectDraw_PTR_02c99300 != (IDirectDraw *)0x0) {
          (*g_IDirectDraw_PTR_02c99300->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02c99300);
          (*g_IDirectDraw_PTR_02c99300->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02c99300);
          g_IDirectDraw_PTR_02c99300 = (IDirectDraw *)0x0;
        }
        HVar2 = DirectDrawCreate
                          ((GUID *)0x0,&g_IDirectDraw_PTR_02c99300,(IUnknown *)0x0);
        if (HVar2 == 0) {
          (*g_IDirectDraw_PTR_02c99300->vtable->SetCooperativeLevel)
                    (g_IDirectDraw_PTR_02c99300,g_HWND_02c9be68,0x11);
        }
        wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300
                  (g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0);
      }
    }
    SetFocus(g_HWND_02c9be68);
  }
  return;
}
