// Name: wincore_windll.cpp_clearScreenRegion_FUN_005b3f37
// Address: 005b3f37
// MANUAL RECONSTRUCTION
// Address Range: [[005b3f37, 005b3fc1]]
// Convention: __cdecl
// Signature: void __cdecl wincore_windll_cpp_clearScreenRegion_FUN_005b3f37(int color)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearScreenRegion_FUN_005b3f37(int color)

{
  int iVar1;
  uint uVar3;
  byte *puVar4;

  if (g_UseExternalRenderer == 0) {
    iVar1 = (g_ClipRight - g_ClipLeft) + 1;
    uVar3 = g_ClipTop;
    do {
      puVar4 = (byte *)g_ScreenBufferArray[uVar3] + g_ClipLeft;
      if (g_BitsPerPixel == 8) {
        memset(puVar4, 0, iVar1);
      }
      else if (g_BitsPerPixel == 0x10) {
        memset(puVar4 + g_ClipLeft, 0, iVar1 * 2);
      }
      else {
        memset(puVar4 + g_ClipLeft * 3, 0, iVar1 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (uint)g_ClipBottom);
    return;
  }
  wincore_windll_cpp_drawFullScreenQuad_FUN_005b7a50(color);
  return;
}
