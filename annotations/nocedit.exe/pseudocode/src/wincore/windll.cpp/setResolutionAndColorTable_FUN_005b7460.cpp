// Name: wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460
// Address: 005b7460
// Address Range: [[005b7460, 005b7578]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setResolutionAndColorTable_FUN_005b7460(int width, int height, int bits_per_pixel)

#include "nocturne.h"

int __cdecl
wincore_windll_cpp_setResolutionAndColorTable_FUN_005b7460(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int bits_per_pixel_00;
  bool bVar5;
  uint uStack00000020;
  uint uStack00000048;
  
  g_FrameBufferTestResult = 0;
  bits_per_pixel_00 = bits_per_pixel;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel_00 = 0x10;
  }
  if ((g_ExternalRendererActive == 0) &&
     (iVar4 = wincore_windll_cpp_loadExternalRenderer_FUN_005b6750(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*g_APIDLL_setVideoMode2)(height,bits_per_pixel,bits_per_pixel_00,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_UseExternalRenderer = iVar4;
    return 0;
  }
  (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004f41c0();
  uStack00000020 = 0x5b74f3;
  (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_UseExternalRenderer = 1;
  uStack00000048 = 0x5b7507;
  g_ExternalBitsPerPixel = bits_per_pixel_00;
  wincore_windll_cpp_lockFrame_FUN_005b7210();
  pvVar3 = g_ScreenBufferArray[0];
  if (g_BitsPerPixel == 0x10) {
                    /* WARNING: Load size is inaccurate */
    uVar1 = *g_ScreenBufferArray[0];
    *(ushort *)g_ScreenBufferArray[0] = 0xabcd;
                    /* WARNING: Load size is inaccurate */
    bVar5 = *pvVar3 != -0x5433;
    *(ushort *)pvVar3 = uVar1;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_005b7536;
                    /* WARNING: Load size is inaccurate */
    uVar2 = *g_ScreenBufferArray[0];
    *(uint *)g_ScreenBufferArray[0] = 0xaabbccdd;
                    /* WARNING: Load size is inaccurate */
    bVar5 = *pvVar3 != -0x55443323;
    *(uint *)pvVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_005b7536:
  uStack00000048 = 0x5b753d;
  wincore_windll_cpp_unlockFrame_FUN_005b7250(0);
  return 1;
}
