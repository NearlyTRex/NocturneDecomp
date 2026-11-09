// Name: crt_unknown.c_FUN_005be750
// Address: 005be750
// Address Range: [[005be750, 005be80d]]
// Convention: unknown
// Signature: undefined * crt_unknown_c_FUN_005be750(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005be750(void)

{
  uint *puVar1;
  byte *dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2b8)();
  if (_DAT_02680164 == (uint *)0x0) {
    dest = &DAT_0061ef54;
    do {
      if ((dest[0xc] & 3) == 0) {
        puVar1 = FUN_005b8580(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005be7f8;
        uVar2 = 3;
        goto LAB_005be7c9;
      }
      dest = dest + 0x1a;
    } while (dest < &DAT_0061f15c);
    uVar2 = 0x4003;
    puVar1 = FUN_005b8580(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005be7f8:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
      return (byte *)0x0;
    }
    dest = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    dest = (byte *)_DAT_02680164[1];
    uVar2 = (uint)((ushort)*(uint *)(dest + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02680164;
    _DAT_02680164 = (uint *)*_DAT_02680164;
  }
LAB_005be7c9:
  memset(dest,0,0x1a);
  *(uint *)(dest + 0xc) = uVar2;
  puVar1[1] = dest;
  *(uint **)(dest + 8) = puVar1;
  *puVar1 = _DAT_02680160;
  _DAT_02680160 = puVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2bc)();
  return dest;
}
