// Name: engine_special.cpp_setResolutionAndColorTable_FUN_00565a90
// Address: 00565a90
// Address Range: [[00565a90, 00565bac]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_00565a90(int width,int height,int bits_per_pixel)

#include "nocturne.h"

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_00565a90(int width,int height,int bits_per_pixel)

{
  ushort uVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  bool bVar5;
  
  g_INT_02cf5fdc = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((g_INT_02cf6108 == 0) &&
     (iVar4 = engine_special_cpp_loadExternalRenderer_FUN_00564be0(g_HWND_02cf611c), iVar4 == 0)) {
    return 0;
  }
  iVar4 = (*(code *)g_PTR_02cf5ff4)(width,height,bits_per_pixel,g_ARRAY_PTR_01c5faec);
  if (iVar4 == 0) {
    g_INT_01c6cee8 = iVar4;
    return 0;
  }
  (*(code *)g_PTR_02cf6058)(g_UCHAR_ARRAY_01c6af98,g_USHORT_ARRAY_01c6a070);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d4eb0();
  (*(code *)g_PTR_02cf6048)(g_INT_02cf6110,g_INT_02cf6114,g_INT_02cf6118);
  g_INT_01c6cee8 = 1;
  g_INT_02cf6120 = bits_per_pixel;
  iVar4 = engine_special_cpp_lockFrame_FUN_00565820();
  puVar3 = g_ARRAY_PTR_01c5faec[0];
  if (iVar4 == 0) {
    return 1;
  }
  if (g_INT_005fba20 == 0x10) {
    uVar1 = *(ushort *)g_ARRAY_PTR_01c5faec[0];
    *(ushort *)g_ARRAY_PTR_01c5faec[0] = 0xabcd;
    bVar5 = *(short *)puVar3 != -0x5433;
    *(ushort *)puVar3 = uVar1;
  }
  else {
    if (g_INT_005fba20 != 0x20) goto LAB_00565b6a;
    uVar2 = *(uint *)g_ARRAY_PTR_01c5faec[0];
    *(uint *)g_ARRAY_PTR_01c5faec[0] = 0xaabbccdd;
    bVar5 = *(int *)puVar3 != -0x55443323;
    *(uint *)puVar3 = uVar2;
  }
  g_INT_02cf5fdc = (int)bVar5;
LAB_00565b6a:
  engine_special_cpp_unlockFrame_FUN_00565870(0);
  return 1;
}
