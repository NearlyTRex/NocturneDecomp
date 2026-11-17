// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005798f0
// Address: 005798f0
// Address Range: [[005798f0, 00579a54]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005798f0(int width,int height)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005798f0(int width,int height)

{
  HRESULT HVar1;
  
  g_PTR_0060b010 =
       malloc
                 (((int)((g_INT_005fba20 + (g_INT_005fba20 >> 0x1f) * -8) -
                        (uint)((g_INT_005fba20 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_005fba18 * g_INT_005fba1c);
  if (g_PTR_0060b010 == (byte *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0xed;
    core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02d0bcf0 = malloc(g_INT_005fba18 * g_INT_005fba1c * 4 + 0x40);
  if (g_PTR_02d0bcf0 == (byte *)0x0) {
    g_CHAR_PTR_01d71de0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d71de4 = 0xf2;
    core_main_c_displayErrorAndQuit_FUN_004e4330("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_PTR_0072ffac = (byte *)((uint)(g_PTR_02d0bcf0 + 0x10) & 0xfffffff0);
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
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_IDirectDraw_PTR_02d0bce0,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_IDirectDraw_PTR_02d0bce0->vtable->SetCooperativeLevel)
              (g_IDirectDraw_PTR_02d0bce0,g_HWND_02d21b78,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_00564be0(g_HWND_02d21b78);
  return 1;
}
