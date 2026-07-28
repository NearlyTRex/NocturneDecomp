// Name: engine_special.cpp_clearScreenRegion_FUN_0052ef37
// Address: 0052ef37
// Address Range: [[0052ef37, 0052efc1]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_clearScreenRegion_FUN_0052ef37(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_clearScreenRegion_FUN_0052ef37(int param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EDI;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (_DAT_01c02594 == 0) {
    iVar1 = (_DAT_01c00c60 - _DAT_01c00c58) + 1;
    uVar3 = _DAT_01c00c5c;
    do {
      puVar4 = (byte *)(*(int *)(&DAT_01bd2fa0 + uVar3 * 4) + _DAT_01c00c58);
      iVar2 = iVar1;
      if (DAT_005b7624 == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (DAT_005b7624 == 0x10) {
        puVar6 = (ushort *)(puVar4 + _DAT_01c00c58);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + _DAT_01c00c58 * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= _DAT_01c00c64);
    return in_EAX;
  }
  engine_special_cpp_drawFullScreenQuad_FUN_005329c0(param_1);
  return unaff_EDI;
}
