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
  
  if ((g_INT_0264bba0 == 0) || (g_INT_02661af8 == 0)) {
    if (g_IDirectDrawSurface_PTR_02661ae4 != (IDirectDrawSurface *)0x0) {
      (*g_IDirectDrawSurface_PTR_02661ae4->vtable->Restore)(g_IDirectDrawSurface_PTR_02661ae4);
      (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Restore)(g_IDirectDrawSurface_PTR_02661ae8);
      if (g_IUnknown_PTR_02661aec != (IUnknown *)0x0) {
        HVar2 = (*g_IDirectDrawSurface_PTR_02661ae4->vtable->SetPalette)
                          (g_IDirectDrawSurface_PTR_02661ae4,g_IUnknown_PTR_02661aec);
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
      if (g_IUnknown_PTR_02661aec != (IUnknown *)0x0) {
        (*g_IUnknown_PTR_02661aec->vtable->Release)(g_IUnknown_PTR_02661aec);
        g_IUnknown_PTR_02661aec = (IUnknown *)0x0;
      }
      if (g_IDirectDrawSurface_PTR_02661ae8 != (IDirectDrawSurface *)0x0) {
        (*g_IDirectDrawSurface_PTR_02661ae8->vtable->Release)
                  ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae8);
        g_IDirectDrawSurface_PTR_02661ae8 = (IDirectDrawSurface *)0x0;
      }
      if (g_IDirectDrawSurface_PTR_02661ae4 != (IDirectDrawSurface *)0x0) {
        (*g_IDirectDrawSurface_PTR_02661ae4->vtable->Release)
                  ((IUnknown *)g_IDirectDrawSurface_PTR_02661ae4);
        g_IDirectDrawSurface_PTR_02661ae4 = (IDirectDrawSurface *)0x0;
      }
      if (g_IDirectDraw_PTR_02661ae0 != (IDirectDraw *)0x0) {
        (*g_IDirectDraw_PTR_02661ae0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02661ae0);
        (*g_IDirectDraw_PTR_02661ae0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02661ae0);
        g_IDirectDraw_PTR_02661ae0 = (IDirectDraw *)0x0;
      }
      HVar2 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02661ae0,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_IDirectDraw_PTR_02661ae0->vtable->SetCooperativeLevel)
                  (g_IDirectDraw_PTR_02661ae0,g_HWND_02664628,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50
                (g_INT_006141b8,g_INT_006141bc,g_INT_006141c0);
    }
    SetFocus(g_HWND_02664628);
  }
  return;
}
