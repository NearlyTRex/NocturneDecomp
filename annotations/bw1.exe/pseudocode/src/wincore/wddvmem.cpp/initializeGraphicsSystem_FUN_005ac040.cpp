// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ac040
// Address: 005ac040
// Address Range: [[005ac040, 005ac1a4]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ac040(int width,int height)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ac040(int width,int height)

{
  HRESULT HVar1;
  
  g_PTR_00629010 =
       malloc
                 (((int)((g_INT_0061b4a0 + (g_INT_0061b4a0 >> 0x1f) * -8) -
                        (uint)((g_INT_0061b4a0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_0061b498 * g_INT_0061b49c);
  if (g_PTR_00629010 == (byte *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d1d404 = 0xed;
    core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02c99310 = malloc(g_INT_0061b498 * g_INT_0061b49c * 4 + 0x40);
  if (g_PTR_02c99310 == (byte *)0x0) {
    g_CHAR_PTR_01d1d400 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d1d404 = 0xf2;
    core_main_c_displayErrorAndQuit_FUN_005030e0("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_PTR_0071362c = (byte *)((uint)(g_PTR_02c99310 + 0x10) & 0xfffffff0);
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
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02c99300,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_IDirectDraw_PTR_02c99300->vtable->SetCooperativeLevel)
              (g_IDirectDraw_PTR_02c99300,g_HWND_02c9be68,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_00581310(g_HWND_02c9be68);
  return 1;
}
