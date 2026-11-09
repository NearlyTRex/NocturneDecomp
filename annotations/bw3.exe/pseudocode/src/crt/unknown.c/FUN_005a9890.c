// Name: crt_unknown.c_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a994d]]
// Convention: unknown
// Signature: undefined * crt_unknown_c_FUN_005a9890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_005a9890(void)

{
  uint *puVar1;
  byte *dest;
  uint uVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b4)();
  if (_DAT_02d252a4 == (uint *)0x0) {
    dest = &DAT_00607678;
    do {
      if ((dest[0xc] & 3) == 0) {
        puVar1 = FUN_005a3650(0x1d);
        if (puVar1 == (uint *)0x0) goto LAB_005a9938;
        uVar2 = 3;
        goto LAB_005a9909;
      }
      dest = dest + 0x1a;
    } while (dest < &DAT_00607880);
    uVar2 = 0x4003;
    puVar1 = FUN_005a3650(0x37);
    if (puVar1 == (uint *)0x0) {
LAB_005a9938:
      setErrno(5);
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
      return (byte *)0x0;
    }
    dest = (byte *)((int)puVar1 + 0x1d);
  }
  else {
    dest = (byte *)_DAT_02d252a4[1];
    uVar2 = (uint)((ushort)*(uint *)(dest + 0xc) & 0x4003 | 3);
    puVar1 = _DAT_02d252a4;
    _DAT_02d252a4 = (uint *)*_DAT_02d252a4;
  }
LAB_005a9909:
  memset(dest,0,0x1a);
  *(uint *)(dest + 0xc) = uVar2;
  puVar1[1] = dest;
  *(uint **)(dest + 8) = puVar1;
  *puVar1 = _DAT_02d252a0;
  _DAT_02d252a0 = puVar1;
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079b8)();
  return dest;
}
