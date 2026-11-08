// Name: FUN_0057dd07
// Address: 0057dd07
// Address Range: [[0057dd07, 0057dd91]]
// Convention: unknown
// Signature: undefined4 FUN_0057dd07(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0057dd07(uint param_1)

{
  uint in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *puVar4;
  uint *puVar5;
  ushort *puVar6;
  
  if (_DAT_01c50948 == 0) {
    iVar1 = (_DAT_01c4f010 - _DAT_01c4f008) + 1;
    uVar3 = _DAT_01c4f00c;
    do {
      puVar4 = (byte *)(*(int *)(&DAT_01c4354c + uVar3 * 4) + _DAT_01c4f008);
      iVar2 = iVar1;
      if (DAT_0061b4a0 == 8) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
      }
      else if (DAT_0061b4a0 == 0x10) {
        puVar6 = (ushort *)(puVar4 + _DAT_01c4f008);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        puVar5 = (uint *)(puVar4 + _DAT_01c4f008 * 3);
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 <= _DAT_01c4f014);
    return in_EAX;
  }
  FUN_005827b0();
  return param_1;
}
