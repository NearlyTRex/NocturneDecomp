// Name: FUN_005c6a20
// Address: 005c6a20
// Address Range: [[005c6a20, 005c6add]]
// Convention: unknown
// Signature: undefined * FUN_005c6a20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005c6a20(void)

{
  uint *puVar1;
  byte *puVar2;
  uint uVar3;
  
  (*(code *)PTR_FUN_00626610)();
  if (_DAT_02c9f054 == (uint *)0x0) {
    puVar2 = &DAT_006262d4;
    do {
      if ((puVar2[0xc] & 3) == 0) {
        puVar1 = (uint *)FUN_005c08d0(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005c6ac8;
        uVar3 = 3;
        goto LAB_005c6a99;
      }
      puVar2 = puVar2 + 0x1a;
    } while (puVar2 < &DAT_006264dc);
    uVar3 = 0x4003;
    puVar1 = (uint *)FUN_005c08d0(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005c6ac8:
      FUN_005c6450(5);
      (*(code *)PTR_FUN_00626614)();
      return (byte *)0x0;
    }
    puVar2 = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    puVar2 = (byte *)_DAT_02c9f054[1];
    uVar3 = (uint)((ushort)*(uint *)(puVar2 + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02c9f054;
    _DAT_02c9f054 = (uint *)*_DAT_02c9f054;
  }
LAB_005c6a99:
  FUN_005bfb70(puVar2,0,0x1a);
  *(uint *)(puVar2 + 0xc) = uVar3;
  puVar1[1] = puVar2;
  *(uint **)(puVar2 + 8) = puVar1;
  *puVar1 = _DAT_02c9f050;
  _DAT_02c9f050 = puVar1;
  (*(code *)PTR_FUN_00626614)();
  return puVar2;
}
