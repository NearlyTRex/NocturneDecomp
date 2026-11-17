// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_0057a0e0
// Address: 0057a0e0
// Address Range: [[0057a0e0, 0057a2e4]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_0057a0e0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_0057a0e0(void)

{
  int iVar1;
  HRESULT HVar2;
  
  g_INT_02d0bcf8 = 1;
  if (g_INT_02cf5fcc != 0) {
    if (g_INT_005fba20 < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0(g_INT_005fba18,g_INT_005fba1c,0x10);
      engine_special_cpp_clearScreen_FUN_00560d70();
      engine_2d_c_drawText_FUN_00401fe0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fe0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    engine_special_cpp_clearScreen_FUN_00560d70();
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_00565a90
                      (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
    if (iVar1 == 0) {
      g_INT_01c6cee8 = iVar1;
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
      HVar2 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02d0bce0,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_IDirectDraw_PTR_02d0bce0->vtable->SetCooperativeLevel)
                  (g_IDirectDraw_PTR_02d0bce0,g_HWND_02d21b78,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_00579bb0
                (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
    }
  }
  return;
}
