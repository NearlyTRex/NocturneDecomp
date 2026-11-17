// Name: wincore_wddvmem.cpp_resetGraphicsSystem_FUN_005ac830
// Address: 005ac830
// Address Range: [[005ac830, 005aca34]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ac830(void)

#include "nocturne.h"

void __cdecl wincore_wddvmem_cpp_resetGraphicsSystem_FUN_005ac830(void)

{
  int iVar1;
  HRESULT HVar2;
  
  g_INT_02c99318 = 1;
  if (g_INT_02c83370 != 0) {
    if (g_INT_0061b4a0 < 0x10) {
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300(g_INT_0061b498,g_INT_0061b49c,0x10);
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_2d_c_drawText_FUN_00401fe0("You have hit a kludge in the program.",0,0);
      engine_2d_c_drawText_FUN_00401fe0("You are setting acceleration mode without setting",0,0x16);
      engine_2d_c_drawText_FUN_00401fe0("the appropriate bit depth first.",0,0x21);
      engine_2d_c_drawText_FUN_00401fe0("I am forcing the screen to switch to 16bpp mode.",0,0x2c);
      engine_2d_c_drawText_FUN_00401fe0("Press any key to continue.",0,0x42);
      wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    engine_special_cpp_clearScreen_FUN_0057dc40();
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
    iVar1 = engine_special_cpp_setResolutionAndColorTable_FUN_005821c0
                      (g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0);
    if (iVar1 == 0) {
      g_INT_01c50948 = iVar1;
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
      HVar2 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02c99300,(IUnknown *)0x0);
      if (HVar2 == 0) {
        (*g_IDirectDraw_PTR_02c99300->vtable->SetCooperativeLevel)
                  (g_IDirectDraw_PTR_02c99300,g_HWND_02c9be68,0x11);
      }
      wincore_wddvmem_cpp_setScreenResolution_FUN_005ac300
                (g_INT_0061b498,g_INT_0061b49c,g_INT_0061b4a0);
    }
  }
  return;
}
