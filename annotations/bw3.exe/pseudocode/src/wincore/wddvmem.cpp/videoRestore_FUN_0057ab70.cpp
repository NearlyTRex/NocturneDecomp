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
  
  if ((g_INT_02cf5fcc == 0) || (g_INT_02d0bcf8 == 0)) {
    if (g_IDirectDrawSurface_PTR_02d0bce4 != (IDirectDrawSurface *)0x0) {
      (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Restore)(g_IDirectDrawSurface_PTR_02d0bce4);
      (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Restore)(g_IDirectDrawSurface_PTR_02d0bce8);
      if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
        HVar2 = (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->SetPalette)
                          (g_IDirectDrawSurface_PTR_02d0bce4,g_IUnknown_PTR_02d0bcec);
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
    iVar1 = _stricmp(g_CHAR_ARRAY_00606730,"trigl.dll");
    if (iVar1 != 0) {
      iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_00565a90
                        (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
      if (iVar1 == 0) {
        g_INT_02cf5fcc = iVar1;
        if (g_IUnknown_PTR_02d0bcec != (IUnknown *)0x0) {
          (*g_IUnknown_PTR_02d0bcec->vtable->Release)(g_IUnknown_PTR_02d0bcec);
          g_IUnknown_PTR_02d0bcec = (IUnknown *)0x0;
        }
        if (g_IDirectDrawSurface_PTR_02d0bce8 != (IDirectDrawSurface *)0x0) {
          (*g_IDirectDrawSurface_PTR_02d0bce8->vtable->Release)
                    ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce8);
          g_IDirectDrawSurface_PTR_02d0bce8 = (IDirectDrawSurface *)0x0;
        }
        if (g_IDirectDrawSurface_PTR_02d0bce4 != (IDirectDrawSurface *)0x0) {
          (*g_IDirectDrawSurface_PTR_02d0bce4->vtable->Release)
                    ((IUnknown *)g_IDirectDrawSurface_PTR_02d0bce4);
          g_IDirectDrawSurface_PTR_02d0bce4 = (IDirectDrawSurface *)0x0;
        }
        if (g_IDirectDraw_PTR_02d0bce0 != (IDirectDraw *)0x0) {
          (*g_IDirectDraw_PTR_02d0bce0->vtable->RestoreDisplayMode)(g_IDirectDraw_PTR_02d0bce0);
          (*g_IDirectDraw_PTR_02d0bce0->vtable->Release)((IUnknown *)g_IDirectDraw_PTR_02d0bce0);
          g_IDirectDraw_PTR_02d0bce0 = (IDirectDraw *)0x0;
        }
        HVar2 = DirectDrawCreate
                          ((GUID *)0x0,&g_IDirectDraw_PTR_02d0bce0,(IUnknown *)0x0);
        if (HVar2 == 0) {
          (*g_IDirectDraw_PTR_02d0bce0->vtable->SetCooperativeLevel)
                    (g_IDirectDraw_PTR_02d0bce0,g_HWND_02d21b78,0x11);
        }
        wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0
                  (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
      }
    }
    SetFocus(g_HWND_02d21b78);
  }
  return;
}
