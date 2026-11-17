// Name: engine_special.cpp_setResolutionAndColorTable_FUN_0055f770
// Address: 0055f770
// Address Range: [[0055f770, 0055f888]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_0055f770(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_0055f770(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  bool bVar5;
  
  g_FrameBufferTestResult = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((g_LoadedExternalDLLRenderer == 0) &&
     (iVar4 = engine_special_cpp_loadExternalRenderer_FUN_0055e8c0(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*(code *)g_PTR_0264bbc8)(width,height,bits_per_pixel,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_INT_01c37788 = iVar4;
    return 0;
  }
  (*(code *)g_PTR_0264bc2c)(g_UCHAR_ARRAY_01c35838,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
  (*(code *)g_PTR_0264bc1c)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_INT_01c37788 = 1;
  g_ExternalBitsPerPixel = bits_per_pixel;
  engine_special_cpp_lockFrame_FUN_0055f500();
  puVar3 = g_ScreenBufferArray[0];
  if (g_INT_006141c0 == 0x10) {
    uVar1 = *(ushort *)g_ScreenBufferArray[0];
    *(ushort *)g_ScreenBufferArray[0] = 0xabcd;
    bVar5 = *(short *)puVar3 != -0x5433;
    *(ushort *)puVar3 = uVar1;
  }
  else {
    if (g_INT_006141c0 != 0x20) goto LAB_0055f846;
    uVar2 = *(uint *)g_ScreenBufferArray[0];
    *(uint *)g_ScreenBufferArray[0] = 0xaabbccdd;
    bVar5 = *(int *)puVar3 != -0x55443323;
    *(uint *)puVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_0055f846:
  engine_special_cpp_unlockFrame_FUN_0055f550(0);
  return 1;
}
