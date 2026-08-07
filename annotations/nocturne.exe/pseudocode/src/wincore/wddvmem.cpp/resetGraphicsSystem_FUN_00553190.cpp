// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00553190
// Address: 00553190
// Address Range: [[00553190, 00553394]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00553190(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_00553190(void)

{
  int iVar1;
  
  _DAT_02ddf568 = 1;
  if (INT_02dc9d60 != 0) {
    if (g_BitsPerPixel < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00(g_WindowWidth,g_WindowHeight,0x10);
      engine_special_cpp_clearScreen_FUN_0052ee70();
      engine_2d_c_drawText_FUN_00402600("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00402600("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00402600("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00402600("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00402600("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    }
    engine_special_cpp_clearScreen_FUN_0052ee70();
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005324a0
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_UseExternalRenderer = iVar1;
      INT_02dc9d60 = iVar1;
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
      iVar1 = DirectDrawCreate(0,&g_DirectDrawObject,0);
      if (iVar1 == 0) {
        (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,_DAT_02de2098,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_00552e00
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
  }
  return;
}
