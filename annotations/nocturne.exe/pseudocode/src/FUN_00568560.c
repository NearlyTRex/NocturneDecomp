// Name: FUN_00568560
// Address: 00568560
// Address Range: [[00568560, 0056861d]]
// Convention: unknown
// Signature: undefined * FUN_00568560(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00568560(void)

{
  uint *puVar1;
  byte *puVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_005c1ad0)();
  if (_DAT_02de4e24 == (uint *)0x0) {
    puVar2 = &DAT_005c1894;
    do {
      if ((puVar2[0xc] & 3) == 0) {
        puVar1 = (uint *)FUN_005635b0(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_00568608;
        uVar3 = 3;
        goto LAB_005685d9;
      }
      puVar2 = puVar2 + 0x1a;
    } while (puVar2 < &DAT_005c1a9c);
    uVar3 = 0x4003;
    puVar1 = (uint *)FUN_005635b0(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_00568608:
      FUN_00568e80(5);
      (*(code *)PTR_FUN_005c1ad4)();
      return (byte *)0x0;
    }
    puVar2 = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    puVar2 = (byte *)_DAT_02de4e24[1];
    uVar3 = (uint)((ushort)*(uint *)(puVar2 + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02de4e24;
    _DAT_02de4e24 = (uint *)*_DAT_02de4e24;
  }
LAB_005685d9:
  FUN_00563cc0(puVar2,0,0x1a);
  *(uint *)(puVar2 + 0xc) = uVar3;
  puVar1[1] = puVar2;
  *(uint **)(puVar2 + 8) = puVar1;
  *puVar1 = _DAT_02de4e20;
  _DAT_02de4e20 = puVar1;
  (*(code *)PTR_FUN_005c1ad4)();
  return puVar2;
}
