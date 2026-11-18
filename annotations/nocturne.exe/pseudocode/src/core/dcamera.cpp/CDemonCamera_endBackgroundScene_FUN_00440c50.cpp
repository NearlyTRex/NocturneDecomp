// Name: core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_00440c50
// Address: 00440c50
// Address Range: [[00440c50, 00440d3b]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera *this_ptr,int restore_zbuffer)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_endBackgroundScene_FUN_00440c50(CDemonCamera *this_ptr,int restore_zbuffer)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte **ppuVar5;
  void **ppvVar6;
  
  g_BackgroundSceneDepth = g_BackgroundSceneDepth + -1;
  if (g_BackgroundSceneDepth == 0) {
    g_BitsPerPixel = g_BackgroundSavedBitsPerPixel;
    g_UseExternalRenderer = g_BackgroundSavedUseExternalRenderer;
    ppuVar5 = g_ARRAY_PTR_0140efb4;
    ppvVar6 = g_ScreenBufferArray;
    for (uVar2 = g_WindowHeight & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      *ppvVar6 = *ppuVar5;
      ppuVar5 = ppuVar5 + 1;
      ppvVar6 = ppvVar6 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(byte *)ppvVar6 = *(byte *)ppuVar5;
      ppuVar5 = (byte **)((int)ppuVar5 + 1);
      ppvVar6 = (void **)((int)ppvVar6 + 1);
    }
    g_RedBitPosition.dword = g_BackgroundSavedRedBitPosition;
    g_GreenBitPosition.dword = g_BackgroundSavedGreenBitPosition;
    g_BlueBitPosition.dword = g_BackgroundSavedBlueBitPosition;
    if (restore_zbuffer != 0) {
      iVar3 = 0;
      if (0 < (int)this_ptr->max_distance) {
        do {
          iVar4 = this_ptr->screen_width * iVar3;
          iVar1 = this_ptr->framebuffer_height + iVar3;
          iVar3 = iVar3 + 1;
          core_dstrendr_cpp_memcpyMMX_FUN_00465341
                    ((void *)(iVar4 * 4 + (int)this_ptr->zbuffer_aligned),
                     g_ZBufferScanlineArray[iVar1] + this_ptr->screen_width,
                     this_ptr->screen_width * 4);
        } while (iVar3 < (int)this_ptr->max_distance);
      }
      if (g_UseExternalRenderer != 0) {
        engine_special_cpp_masterZBuffer_FUN_00532c70(0);
        return;
      }
    }
  }
  return;
}
