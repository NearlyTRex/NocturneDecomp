// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0
// Address: 005ed2a0
// Address Range: [[005ed2a0, 005ed4a4]]
// Convention: __cdecl
// Signature: void wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ed2a0(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ed2a0(void)

{
  int iVar1;
  HRESULT HVar2;
  uint uStack00000010;
  uint uStack0000003c;
  
  g_GraphicsResetFlag = 1;
  if (g_FullscreenMode != 0) {
    if (g_BitsPerPixel < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(g_WindowWidth,g_WindowHeight,0x10);
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      engine_2d_c_drawText_FUN_00401fd0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fd0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fd0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fd0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fd0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    }
    uStack00000010 = 0x5ed2cf;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    if (g_DirectDrawUnknown != (IUnknown *)0x0) {
      uStack00000010 = 0x5ed2e0;
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
      uStack00000010 = 0x5ed336;
      (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
      g_DirectDrawObject = (IDirectDraw *)0x0;
    }
    uStack00000010 = 0x5ed355;
    iVar1 = wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460
                      (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    if (iVar1 == 0) {
      g_UseExternalRenderer = iVar1;
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
      uStack0000003c = 0x5ed409;
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0
                (g_WindowWidth,g_WindowHeight,g_BitsPerPixel);
    }
  }
  return;
}
