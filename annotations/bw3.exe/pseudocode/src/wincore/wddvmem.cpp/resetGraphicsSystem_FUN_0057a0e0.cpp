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
  
  g_GraphicsResetFlag = 1;
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_00565a90
                      (g_INT_005fba18,g_INT_005fba1c,g_INT_005fba20);
    if (iVar1 == 0) {
      g_INT_01c6cee8 = iVar1;
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
  return;
}
