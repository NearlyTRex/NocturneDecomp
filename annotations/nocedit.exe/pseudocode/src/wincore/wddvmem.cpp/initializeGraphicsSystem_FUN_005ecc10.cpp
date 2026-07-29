// Name: wincore_wddvmem.cpp_initializeGraphicsSystem_FUN_005ecc10
// Address: 005ecc10
// Address Range: [[005ecc10, 005ecd88]]
// Convention: __cdecl
// Signature: int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10(int width,int height)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_initializeGraphicsSystem_FUN_005ecc10(int width,int height)

{
  HRESULT HVar1;
  
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowWidth * g_WindowHeight,"..\\wincore\\wddvmem.cpp",233);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 234;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       shape_memdbg_cpp_debugMalloc_FUN_0050f250
                 (g_WindowWidth * g_WindowHeight * 4 + 0x40,"..\\wincore\\wddvmem.cpp",238);
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 239;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
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
  engine_special_cpp_loadExternalRenderer_FUN_005b6750(g_MainWindowHandle);
  return 1;
}
