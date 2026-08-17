// Name: engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
// Address: 005324a0
// Address Range: [[005324a0, 005325b3]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int unaff_EBP;
  bool bVar5;
  
  g_FrameBufferTestResult = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((g_LoadedExternalDLLRenderer == 0) &&
     (iVar4 = engine_special_cpp_loadExternalRenderer_FUN_00531780(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*g_APIDLL_setVideoMode2)(width,height,bits_per_pixel,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_UseExternalRenderer = iVar4;
    return 0;
  }
  (*g_APIDLL_setColorTable16)(g_SourcePaletteData,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
  (*g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_UseExternalRenderer = 1;
  g_ExternalBitsPerPixel = bits_per_pixel;
  engine_special_cpp_lockFrame_FUN_005322e0();
  pvVar3 = g_ScreenBufferArray[0];
  if (g_BitsPerPixel == 0x10) {
    uVar1 = *(ushort *)g_ScreenBufferArray[0];
    *(ushort *)g_ScreenBufferArray[0] = 0xabcd;
    bVar5 = *(short *)pvVar3 != -0x5433;
    *(ushort *)pvVar3 = uVar1;
  }
  else {
    if (g_BitsPerPixel != 0x20) goto LAB_00532576;
    uVar2 = *(uint *)g_ScreenBufferArray[0];
    *(uint *)g_ScreenBufferArray[0] = 0xaabbccdd;
    bVar5 = *(int *)pvVar3 != -0x55443323;
    *(uint *)pvVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_00532576:
  engine_special_cpp_unlockFrame_FUN_00532320(unaff_EBP);
  return 1;
}
