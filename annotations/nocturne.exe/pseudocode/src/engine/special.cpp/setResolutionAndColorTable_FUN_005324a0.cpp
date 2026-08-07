// Name: engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
// Address: 005324a0
// Address Range: [[005324a0, 005325b3]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  
  _DAT_02dc9d70 = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((INT_02dc9e04 == 0) &&
     (iVar4 = engine_special_cpp_loadExternalRenderer_FUN_00531780(_DAT_02dc9e18), iVar4 == 0)) {
    return 0;
  }
  iVar4 = (*_DAT_02dc9d84)(width,height,bits_per_pixel,g_ScreenBufferArray);
  if (iVar4 == 0) {
    g_UseExternalRenderer = iVar4;
    return 0;
  }
  (*_DAT_02dc9ddc)(g_SourcePaletteData,g_ColorTable16);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
  (*_DAT_02dc9dcc)(_DAT_02dc9e0c,_DAT_02dc9e10,_DAT_02dc9e14);
  g_UseExternalRenderer = 1;
  _DAT_02dc9e1c = bits_per_pixel;
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
  _DAT_02dc9d70 = (uint)bVar5;
LAB_00532576:
  engine_special_cpp_FUN_00532320();
  return 1;
}
