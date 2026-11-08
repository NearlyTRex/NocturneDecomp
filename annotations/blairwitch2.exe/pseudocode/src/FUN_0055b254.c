// Name: FUN_0055b254
// Address: 0055b254
// Address Range: [[0055b254, 0055b2b6]]
// Convention: unknown
// Signature: undefined8 FUN_0055b254(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0055b254(void)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  ulonglong *puVar4;
  
  _DAT_0061c794 = DAT_0061c78c;
  puVar4 = (ulonglong *)(_DAT_01c2b64c + _DAT_01c35e4c * DAT_006141b8 * 4);
  iVar2 = ((_DAT_01c35e54 - _DAT_01c35e4c) + 1) * DAT_006141b8;
  do {
    *puVar4 = _DAT_0061c794;
    puVar4[1] = _DAT_0061c794;
    puVar4[2] = _DAT_0061c794;
    puVar4[3] = _DAT_0061c794;
    puVar4[4] = _DAT_0061c794;
    puVar4[5] = _DAT_0061c794;
    puVar4[6] = _DAT_0061c794;
    puVar4[7] = _DAT_0061c794;
    puVar4 = puVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return CONCAT44(in_EDX,in_EAX);
}
