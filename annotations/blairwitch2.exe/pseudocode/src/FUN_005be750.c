// Name: FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be80d]]
// Convention: unknown
// Signature: undefined * FUN_005be750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005be750(void)

{
  uint *puVar1;
  byte *puVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_0061f2b8)();
  if (_DAT_02680164 == (uint *)0x0) {
    puVar2 = &DAT_0061ef54;
    do {
      if ((puVar2[0xc] & 3) == 0) {
        puVar1 = (uint *)FUN_005b8580(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005be7f8;
        uVar3 = 3;
        goto LAB_005be7c9;
      }
      puVar2 = puVar2 + 0x1a;
    } while (puVar2 < &DAT_0061f15c);
    uVar3 = 0x4003;
    puVar1 = (uint *)FUN_005b8580(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005be7f8:
      FUN_005be180(5);
      (*(code *)PTR_FUN_0061f2bc)();
      return (byte *)0x0;
    }
    puVar2 = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    puVar2 = (byte *)_DAT_02680164[1];
    uVar3 = (uint)((ushort)*(uint *)(puVar2 + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02680164;
    _DAT_02680164 = (uint *)*_DAT_02680164;
  }
LAB_005be7c9:
  FUN_005b77c0(puVar2,0,0x1a);
  *(uint *)(puVar2 + 0xc) = uVar3;
  puVar1[1] = puVar2;
  *(uint **)(puVar2 + 8) = puVar1;
  *puVar1 = _DAT_02680160;
  _DAT_02680160 = puVar1;
  (*(code *)PTR_FUN_0061f2bc)();
  return puVar2;
}
