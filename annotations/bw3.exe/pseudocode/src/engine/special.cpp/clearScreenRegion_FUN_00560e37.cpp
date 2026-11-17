// Name: engine_special.cpp_clearScreenRegion_FUN_00560e37
// Address: 00560e37
// Address Range: [[00560e37, 00560ec1]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreenRegion_FUN_00560e37(int color)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearScreenRegion_FUN_00560e37(int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (g_INT_01c6cee8 == 0) {
    iVar1 = (g_INT_01c6b5b0 - g_INT_01c6b5a8) + 1;
    uVar3 = g_INT_01c6b5ac;
    do {
      puVar4 = g_ScreenBufferArray[uVar3] + g_INT_01c6b5a8;
      iVar2 = iVar1;
      if (g_INT_005fba20 == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (g_INT_005fba20 == 0x10) {
        puVar6 = (ushort *)(puVar4 + g_INT_01c6b5a8);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + g_INT_01c6b5a8 * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= (uint)g_INT_01c6b5b4);
    return;
  }
  engine_special_cpp_drawFullScreenQuad_FUN_00566080(color);
  return;
}
