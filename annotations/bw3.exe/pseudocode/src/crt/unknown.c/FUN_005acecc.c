// Name: crt_unknown.c_FUN_005acecc
// Address: 005acecc
// Address Range: [[005acecc, 005acf2f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005acecc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005acecc(int param_1)

{
  uint *puVar1;
  byte *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02d252a0;
joined_r0x005acef3:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  puVar2 = (byte *)puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((puVar2[0xd] & 0x40) == 0) && ((puVar2[0xd] & 8) == 0)) goto code_r0x005acf0c;
  goto LAB_005acf19;
code_r0x005acf0c:
  if (&DAT_00607678 + param_1 * 0x1a <= puVar2) {
    if (puVar2 < (byte *)0x6076c6) {
      uVar4 = 0;
    }
LAB_005acf19:
    iVar5 = iVar5 + 1;
    FUN_005a3ad4(puVar2,uVar4);
  }
  goto joined_r0x005acef3;
}
