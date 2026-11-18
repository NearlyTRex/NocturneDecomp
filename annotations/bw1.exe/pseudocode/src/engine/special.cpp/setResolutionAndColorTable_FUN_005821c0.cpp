// Name: engine_special.cpp_setResolutionAndColorTable_FUN_005821c0
// Address: 005821c0
// Address Range: [[005821c0, 005822dc]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005821c0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005821c0(int width,int height,int bits_per_pixel)

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
     (iVar4 = engine_special_cpp_loadExternalRenderer_FUN_00581310(g_StoredWindowHandle), iVar4 == 0
     )) {
    return 0;
  }
  iVar4 = (*(code *)g_APIDLL_setVideoMode2)(width,height,bits_per_pixel,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_INT_01c50948 = iVar4;
    return 0;
  }
  (*(code *)g_APIDLL_setColorTable16)(g_UCHAR_ARRAY_01c4e9f8,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
  (*(code *)g_APIDLL_setFogColor)(g_FogColorRed,g_FogColorGreen,g_FogColorBlue);
  g_INT_01c50948 = 1;
  g_INT_02c834c4 = bits_per_pixel;
  iVar4 = engine_special_cpp_lockFrame_FUN_00581f50();
  puVar3 = g_ScreenBufferArray[0];
  if (iVar4 == 0) {
    return 1;
  }
  if (g_INT_0061b4a0 == 0x10) {
    uVar1 = *(ushort *)g_ScreenBufferArray[0];
    *(ushort *)g_ScreenBufferArray[0] = 0xabcd;
    bVar5 = *(short *)puVar3 != -0x5433;
    *(ushort *)puVar3 = uVar1;
  }
  else {
    if (g_INT_0061b4a0 != 0x20) goto LAB_0058229a;
    uVar2 = *(uint *)g_ScreenBufferArray[0];
    *(uint *)g_ScreenBufferArray[0] = 0xaabbccdd;
    bVar5 = *(int *)puVar3 != -0x55443323;
    *(uint *)puVar3 = uVar2;
  }
  g_FrameBufferTestResult = (int)bVar5;
LAB_0058229a:
  engine_special_cpp_unlockFrame_FUN_00581fa0(0);
  return 1;
}
