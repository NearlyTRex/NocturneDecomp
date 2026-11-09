// Name: crt_unknown.c_FUN_005c6a20
// Address: 005c6a20
// Address Range: [[005c6a20, 005c6add]]
// Convention: unknown
// Signature: undefined * crt_unknown_c_FUN_005c6a20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005c6a20(void)

{
  uint *puVar1;
  byte *dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626610)();
  if (_DAT_02c9f054 == (uint *)0x0) {
    dest = &DAT_006262d4;
    do {
      if ((dest[0xc] & 3) == 0) {
        puVar1 = FUN_005c08d0(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005c6ac8;
        uVar2 = 3;
        goto LAB_005c6a99;
      }
      dest = dest + 0x1a;
    } while (dest < &DAT_006264dc);
    uVar2 = 0x4003;
    puVar1 = FUN_005c08d0(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005c6ac8:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
      return (byte *)0x0;
    }
    dest = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    dest = (byte *)_DAT_02c9f054[1];
    uVar2 = (uint)((ushort)*(uint *)(dest + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02c9f054;
    _DAT_02c9f054 = (uint *)*_DAT_02c9f054;
  }
LAB_005c6a99:
  memset(dest,0,0x1a);
  *(uint *)(dest + 0xc) = uVar2;
  puVar1[1] = dest;
  *(uint **)(dest + 8) = puVar1;
  *puVar1 = _DAT_02c9f050;
  _DAT_02c9f050 = puVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626614)();
  return dest;
}
