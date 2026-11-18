// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_00588790
// Address: 00588790
// Address Range: [[00588790, 005888f4]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_00588790(int width,int height)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_00588790(int width,int height)

{
  HRESULT HVar1;
  
  g_PTR_00622010 =
       malloc
                 (((int)((g_INT_006141c0 + (g_INT_006141c0 >> 0x1f) * -8) -
                        (uint)((g_INT_006141c0 >> 0x1f) << 2 < 0)) >> 3) *
                  g_INT_006141b8 * g_INT_006141bc);
  if (g_PTR_00622010 == (byte *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0xea;
    core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_PTR_02661af0 = malloc(g_INT_006141b8 * g_INT_006141bc * 4 + 0x40);
  if (g_PTR_02661af0 == (byte *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\wincore\\wddvmem.cpp";
    g_INT_01d046a4 = 0xef;
    core_main_c_displayErrorAndQuit_FUN_004e4500("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (byte *)((uint)(g_PTR_02661af0 + 0x10) & 0xfffffff0);
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
  HVar1 = DirectDrawCreate((GUID *)0x0,&g_DirectDrawObject,(IUnknown *)0x0);
  if (HVar1 == 0) {
    (*g_DirectDrawObject->vtable->SetCooperativeLevel)(g_DirectDrawObject,g_MainWindowHandle,0x11);
  }
  engine_special_cpp_loadExternalRenderer_FUN_0055e8c0(g_MainWindowHandle);
  return 1;
}
