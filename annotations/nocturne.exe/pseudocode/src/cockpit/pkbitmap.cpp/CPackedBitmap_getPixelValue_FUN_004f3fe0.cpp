// Name: cockpit_pkbitmap.cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0
// Address: 004f3fe0
// Address Range: [[004f3fe0, 004f404b]]
// Convention: unknown
// Signature: uint cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0(int param_1,int param_2,int param_3)

#include "nocturne.h"

uint cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_004f3fe0(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  
  if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1c))) {
    piVar2 = (int *)(param_3 * 4 + *(int *)(param_1 + 0x20));
    for (puVar1 = (ushort *)(*piVar2 + *(int *)(param_1 + 0x14));
        (puVar1 < (ushort *)(*(int *)(param_1 + 0x14) + piVar2[1]) &&
        (uVar3 = (uint)*puVar1, (int)uVar3 <= param_2));
        puVar1 = (ushort *)((int)puVar1 + (puVar1[1] + 3 & 0xfffffffc) + 4)) {
      if (param_2 < (int)(uVar3 + puVar1[1])) {
        return (uint)*(byte *)((int)puVar1 + (param_2 - uVar3) + 4);
      }
    }
  }
  return 0xffffffff;
}
