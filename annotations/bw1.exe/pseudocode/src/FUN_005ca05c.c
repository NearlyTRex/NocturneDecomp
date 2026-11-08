// Name: FUN_005ca05c
// Address: 005ca05c
// Address Range: [[005ca05c, 005ca0bf]]
// Convention: unknown
// Signature: int FUN_005ca05c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ca05c(int param_1)

{
  uint *puVar1;
  byte *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02c9f050;
joined_r0x005ca083:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  puVar2 = (byte *)puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((puVar2[0xd] & 0x40) == 0) && ((puVar2[0xd] & 8) == 0)) goto code_r0x005ca09c;
  goto LAB_005ca0a9;
code_r0x005ca09c:
  if (&DAT_006262d4 + param_1 * 0x1a <= puVar2) {
    if (puVar2 < (byte *)0x626322) {
      uVar4 = 0;
    }
LAB_005ca0a9:
    iVar5 = iVar5 + 1;
    FUN_005c0d54(puVar2,uVar4);
  }
  goto joined_r0x005ca083;
}
