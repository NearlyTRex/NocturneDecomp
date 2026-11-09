// Name: engine_special.cpp_clearScreenRegion_FUN_00560e37
// Address: 00560e37
// Address Range: [[00560e37, 00560ec1]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreenRegion_FUN_00560e37(int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreenRegion_FUN_00560e37(int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (_DAT_01c6cee8 == 0) {
    iVar1 = (_DAT_01c6b5b0 - _DAT_01c6b5a8) + 1;
    uVar3 = _DAT_01c6b5ac;
    do {
      puVar4 = (byte *)(*(int *)(&DAT_01c5faec + uVar3 * 4) + _DAT_01c6b5a8);
      iVar2 = iVar1;
      if (DAT_005fba20 == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (DAT_005fba20 == 0x10) {
        puVar6 = (ushort *)(puVar4 + _DAT_01c6b5a8);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + _DAT_01c6b5a8 * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= _DAT_01c6b5b4);
    return;
  }
  engine_special_cpp_drawFullScreenQuad_FUN_00566080(color);
  return;
}
