// Name: engine_special.cpp_clearScreenRegion_FUN_005b3f37
// Address: 005b3f37
// Address Range: [[005b3f37, 005b3fc1]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreenRegion_FUN_005b3f37(int color)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreenRegion_FUN_005b3f37(int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (g_UseExternalRenderer == 0) {
    iVar1 = (g_ClipRight - g_ClipLeft) + 1;
    uVar3 = g_ClipTop;
    do {
      puVar4 = (byte *)((int)g_ScreenBufferArray[uVar3] + g_ClipLeft);
      iVar2 = iVar1;
      if (g_BitsPerPixel == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (g_BitsPerPixel == 0x10) {
        puVar6 = (ushort *)(puVar4 + g_ClipLeft);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + g_ClipLeft * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (uint)g_ClipBottom);
    return;
  }
  engine_special_cpp_drawFullScreenQuad_FUN_005b7a50(color);
  return;
}
