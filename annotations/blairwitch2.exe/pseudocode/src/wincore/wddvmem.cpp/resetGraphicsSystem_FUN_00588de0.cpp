// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00588de0
// Address: 00588de0
// Address Range: [[00588de0, 00588fe4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00588de0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00588de0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  g_INT_02661af8 = 1;
  if (g_INT_0264bba0 != 0) {
    if (g_INT_006141c0 < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_00588a50(g_INT_006141b8,g_INT_006141bc,0x10);
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_2d_c_drawText_FUN_00401fe0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fe0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
      wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    }
    engine_special_cpp_clearScreen_FUN_0055b1f0();
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_0055f770
                      (g_INT_006141b8,g_INT_006141bc,g_INT_006141c0);
    if (iVar1 == 0) {
      g_INT_01c37788 = iVar1;
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
  }
  return;
}
