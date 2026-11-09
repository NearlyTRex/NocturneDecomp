// Name: crt_unknown.c_FUN_005c1d0c
// Address: 005c1d0c
// Address Range: [[005c1d0c, 005c1d6f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c1d0c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005c1d0c(int param_1)

{
  uint *puVar1;
  byte *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02680160;
joined_r0x005c1d33:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  puVar2 = (byte *)puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((puVar2[0xd] & 0x40) == 0) && ((puVar2[0xd] & 8) == 0)) goto code_r0x005c1d4c;
  goto LAB_005c1d59;
code_r0x005c1d4c:
  if (&DAT_0061ef54 + param_1 * 0x1a <= puVar2) {
    if (puVar2 < (byte *)0x61efa2) {
      uVar4 = 0;
    }
LAB_005c1d59:
    iVar5 = iVar5 + 1;
    FUN_005b8a04(puVar2,uVar4);
  }
  goto joined_r0x005c1d33;
}
