// Name: engine_special.cpp_clearScreenRegion_FUN_0055b2b7
// Address: 0055b2b7
// Address Range: [[0055b2b7, 0055b341]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreenRegion_FUN_0055b2b7(int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreenRegion_FUN_0055b2b7(int color)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (_DAT_01c37788 == 0) {
    iVar1 = (_DAT_01c35e50 - _DAT_01c35e48) + 1;
    uVar3 = _DAT_01c35e4c;
    do {
      puVar4 = (byte *)(*(int *)(&DAT_01c2a38c + uVar3 * 4) + _DAT_01c35e48);
      iVar2 = iVar1;
      if (DAT_006141c0 == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (DAT_006141c0 == 0x10) {
        puVar6 = (ushort *)(puVar4 + _DAT_01c35e48);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + _DAT_01c35e48 * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= _DAT_01c35e54);
    return;
  }
  engine_special_cpp_drawFullScreenQuad_FUN_0055fd60(color);
  return;
}
