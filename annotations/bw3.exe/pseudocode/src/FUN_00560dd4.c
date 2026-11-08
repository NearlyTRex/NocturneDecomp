// Name: FUN_00560dd4
// Address: 00560dd4
// Address Range: [[00560dd4, 00560e36]]
// Convention: unknown
// Signature: undefined8 FUN_00560dd4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00560dd4(void)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  ulonglong *puVar4;
  
  _DAT_00604d24 = DAT_00604d1c;
  puVar4 = (ulonglong *)(_DAT_01c60dac + _DAT_01c6b5ac * DAT_005fba18 * 4);
  iVar2 = ((_DAT_01c6b5b4 - _DAT_01c6b5ac) + 1) * DAT_005fba18;
  do {
    *puVar4 = _DAT_00604d24;
    puVar4[1] = _DAT_00604d24;
    puVar4[2] = _DAT_00604d24;
    puVar4[3] = _DAT_00604d24;
    puVar4[4] = _DAT_00604d24;
    puVar4[5] = _DAT_00604d24;
    puVar4[6] = _DAT_00604d24;
    puVar4[7] = _DAT_00604d24;
    puVar4 = puVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return CONCAT44(in_EDX,in_EAX);
}
