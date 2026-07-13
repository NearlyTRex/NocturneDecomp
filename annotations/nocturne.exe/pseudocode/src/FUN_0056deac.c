// Name: FUN_0056deac
// Address: 0056deac
// Address Range: [[0056deac, 0056df0f]]
// Convention: unknown
// Signature: int FUN_0056deac(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0056deac(int param_1)

{
  uint *puVar1;
  byte *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02de4e20;
joined_r0x0056ded3:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  puVar2 = (byte *)puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((puVar2[0xd] & 0x40) == 0) && ((puVar2[0xd] & 8) == 0)) goto code_r0x0056deec;
  goto LAB_0056def9;
code_r0x0056deec:
  if (&DAT_005c1894 + param_1 * 0x1a <= puVar2) {
    if (puVar2 < (byte *)0x5c18e2) {
      uVar4 = 0;
    }
LAB_0056def9:
    iVar5 = iVar5 + 1;
    FUN_005633c4(puVar2,uVar4);
  }
  goto joined_r0x0056ded3;
}
