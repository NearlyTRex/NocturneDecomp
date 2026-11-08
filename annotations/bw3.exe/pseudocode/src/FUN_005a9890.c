// Name: FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a994d]]
// Convention: unknown
// Signature: undefined * FUN_005a9890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005a9890(void)

{
  uint *puVar1;
  byte *puVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_006079b4)();
  if (_DAT_02d252a4 == (uint *)0x0) {
    puVar2 = &DAT_00607678;
    do {
      if ((puVar2[0xc] & 3) == 0) {
        puVar1 = (uint *)FUN_005a3650(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005a9938;
        uVar3 = 3;
        goto LAB_005a9909;
      }
      puVar2 = puVar2 + 0x1a;
    } while (puVar2 < &DAT_00607880);
    uVar3 = 0x4003;
    puVar1 = (uint *)FUN_005a3650(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005a9938:
      FUN_005a92c0(5);
      (*(code *)PTR_FUN_006079b8)();
      return (byte *)0x0;
    }
    puVar2 = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    puVar2 = (byte *)_DAT_02d252a4[1];
    uVar3 = (uint)((ushort)*(uint *)(puVar2 + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02d252a4;
    _DAT_02d252a4 = (uint *)*_DAT_02d252a4;
  }
LAB_005a9909:
  FUN_005a28f0(puVar2,0,0x1a);
  *(uint *)(puVar2 + 0xc) = uVar3;
  puVar1[1] = puVar2;
  *(uint **)(puVar2 + 8) = puVar1;
  *puVar1 = _DAT_02d252a0;
  _DAT_02d252a0 = puVar1;
  (*(code *)PTR_FUN_006079b8)();
  return puVar2;
}
