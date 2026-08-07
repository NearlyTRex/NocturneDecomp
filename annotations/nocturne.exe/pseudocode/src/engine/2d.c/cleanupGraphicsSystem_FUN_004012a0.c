// Name: engine_2d.c_cleanupGraphicsSystem_FUN_004012a0
// Address: 004012a0
// Address Range: [[004012a0, 004012c5]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_004012a0(void)

#include "nocturne.h"

void __cdecl engine_2d_c_cleanupGraphicsSystem_FUN_004012a0(void)

{
  if (g_FontBitmapData != (uchar *)0x0) {
    free(g_FontBitmapData);
    g_FontBitmapData = (uchar *)0x0;
    wincore_wddvmem_cpp_cleanupGraphicsSystem_FUN_00552cb0();
    return;
  }
  if (g_BackBuffer != (void *)0x0) {
    free(g_BackBuffer);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    free(g_SoftwareFrameBuffer);
    g_SoftwareZBuffer = (void *)0x0;
  }
  engine_special_cpp_kill_FUN_005322b0();
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
  if (g_DirectDrawObject == (IDirectDraw *)0x0) {
    return;
  }
  (*g_DirectDrawObject->vtable->RestoreDisplayMode)(g_DirectDrawObject);
  (*g_DirectDrawObject->vtable->Release)((IUnknown *)g_DirectDrawObject);
  g_DirectDrawObject = (IDirectDraw *)0x0;
  return;
}
