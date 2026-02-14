// Name: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
// Address: 005b7460
// Address Range: [[005b7460, 005b7578]]
// Convention: __cdecl
// Signature: int __cdecl wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  
  g_FrameBufferTestResult = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((g_ExternalRendererActive == 0) &&
     (iVar4 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*g_APIDLL_setVideoMode2)(width,height,bits_per_pixel,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_UseExternalRenderer = iVar4;
    return 0;
  }
  (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_UseExternalRenderer = 1;
  g_ExternalBitsPerPixel = bits_per_pixel;
  wincore_windll_cpp_lockFrame_FUN_005b7210();
  pvVar3 = g_ScreenBufferArray[0];
  if (g_BitsPerPixel == 0x10) {
    uVar1 = *(ushort *)g_ScreenBufferArray[0];
    *(ushort *)g_ScreenBufferArray[0] = 0xabcd;
    bVar5 = *(short *)pvVar3 != -0x5433;
    *(ushort *)pvVar3 = uVar1;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_005b7536;
    uVar2 = *(uint *)g_ScreenBufferArray[0];
    *(uint *)g_ScreenBufferArray[0] = 0xaabbccdd;
    bVar5 = *(int *)pvVar3 != -0x55443323;
    *(uint *)pvVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_005b7536:
  wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
  return 1;
}
