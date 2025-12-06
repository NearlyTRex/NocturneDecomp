// Name: wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
// Address: 005ecef0
// Address Range: [[005ecef0, 005ed29e]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0(int width, int height, int bits_per_pixel)

#include "nocturne.h"

int __cdecl
wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(int width,int height,int bits_per_pixel)

{
  int iVar1;
  void *pvVar2;
  HRESULT HVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  int iVar8;
  int in_stack_00000010;
  uint uStack00000014;
  DWORD in_stack_0000001c;
  DWORD in_stack_00000020;
  uint uStack00000028;
  DWORD in_stack_00000034;
  DDSCAPS DStack0000006c;
  int in_stack_00000080;
  int in_stack_00000098;
  int in_stack_0000009c;
  DWORD DStack_40;
  DWORD DStack_2c;
  DWORD DStack_18;
  DDSURFACEDESC_union2 DStack_14;
  
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
  if (((bits_per_pixel != 8) && (bits_per_pixel != 0x10)) && (bits_per_pixel != 0x20)) {
    return 0;
  }
  g_BitsPerPixel = bits_per_pixel;
  g_WindowWidth = bits_per_pixel;
  g_UseSoftwareRendering = 0;
  g_WindowHeight = in_stack_00000010;
  if (g_BackBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(g_BackBuffer,"..\\wincore\\wddvmem.cpp",0xff);
    g_BackBuffer = (void *)0x0;
  }
  if (g_SoftwareFrameBuffer != (void *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_SoftwareFrameBuffer,"..\\wincore\\wddvmem.cpp",0x107);
    g_SoftwareZBuffer = (void *)0x0;
  }
  g_BackBuffer = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (((int)((g_BitsPerPixel + (g_BitsPerPixel >> 0x1f) * -8) -
                                  (uint)((g_BitsPerPixel >> 0x1f) << 2 < 0)) >> 3) *
                            g_WindowHeight * g_WindowWidth,"..\\wincore\\wddvmem.cpp",0xe9);
  if (g_BackBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xea;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of frame buffer memory");
  }
  g_SoftwareFrameBuffer =
       shape_memdbg_cpp_debugMalloc_FUN_0050f250
                 (g_WindowWidth * g_WindowHeight * 4 + 0x40,"..\\wincore\\wddvmem.cpp",0xee);
  if (g_SoftwareFrameBuffer == (void *)0x0) {
    g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
    g_CurrentLineNumber = 0xef;
    core_main_c_displayErrorAndQuit_FUN_00506f10("WDDVMEM: Fatal - out of Z buffer memory");
  }
  g_SoftwareZBuffer = (void *)((int)g_SoftwareFrameBuffer + 0x10U & 0xfffffff0);
  HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                    (g_DirectDrawObject,in_stack_0000001c,in_stack_00000020,bits_per_pixel);
  if (HVar3 != 0) {
    if (bits_per_pixel != 0x20) {
      return 0;
    }
    HVar3 = (*g_DirectDrawObject->vtable->SetDisplayMode)
                      (g_DirectDrawObject,in_stack_0000001c,in_stack_00000034,0x18);
    if (HVar3 != 0) {
      return 0;
    }
    g_UseSoftwareRendering = 1;
  }
  crt_memory_c_memset_FUN_005fde40(&stack0xffffffbc,0,0x6c);
  DStack_40 = 0x6c;
  uStack00000028 = 0x6218;
  DStack_2c = 2;
  HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                    (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_40,&g_DirectDrawSurface,
                     (IUnknown *)0x0);
  if (HVar3 != 0) {
    DStack_18 = 1;
    DStack_40 = 0x5ed158;
    HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                      (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_2c,&g_DirectDrawSurface,
                       (IUnknown *)0x0);
    if (HVar3 != 0) {
      DStack_2c = 0x5ed17c;
      HVar3 = (*g_DirectDrawObject->vtable->CreateSurface)
                        (g_DirectDrawObject,(DDSURFACEDESC *)&DStack_18,&g_DirectDrawSurface,
                         (IUnknown *)0x0);
      if (HVar3 != 0) {
        return 0;
      }
    }
  }
  DStack_14.dwMipMapCount = 0x5ed192;
  crt_memory_c_memset_FUN_005fde40(&stack0x00000068,0,4);
  DStack0000006c.dwCaps = 4;
  HVar3 = (*g_DirectDrawSurface->vtable->GetAttachedSurface)
                    (g_DirectDrawSurface,&stack0x0000006c,&g_SoftwareRenderSurface);
  pvVar2 = g_BackBuffer;
  iVar8 = g_WindowHeight;
  if (HVar3 == 0) {
    iVar5 = 0;
    if (0 < g_WindowHeight) {
      iVar6 = g_BitsPerPixel >> 0x1f;
      iVar1 = g_BitsPerPixel + iVar6 * -8;
      in_stack_00000080 = g_WindowWidth * 4;
      iVar7 = 0;
      iVar4 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar4) =
             (void *)(g_WindowWidth * iVar5 * ((int)(iVar1 - (uint)(iVar6 << 2 < 0)) >> 3) +
                     (int)pvVar2);
        *(int *)((int)g_ZBufferScanlineArray + iVar4) = (int)g_SoftwareZBuffer + iVar7;
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + in_stack_00000080;
        iVar4 = iVar4 + 4;
      } while (iVar5 < iVar8);
    }
    engine_2d_c_setupViewportAndClipping_FUN_00401800
              (0,0,in_stack_00000098 + -1,in_stack_0000009c + -1);
    iVar8 = 0;
    wincore_wddvmem_cpp_setupColorPalette_FUN_005ed8f0();
    do {
      uStack00000014 = 0x5ed25a;
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
      iVar8 = iVar8 + 1;
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    } while (iVar8 < 3);
    return 1;
  }
  g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
  g_CurrentLineNumber = 0x1d7;
  core_main_c_displayErrorAndQuit_FUN_00506f10("setScreenResolution - Create back buffer failed!");
  return 0;
}
