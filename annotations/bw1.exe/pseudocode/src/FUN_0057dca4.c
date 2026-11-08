// Name: FUN_0057dca4
// Address: 0057dca4
// Address Range: [[0057dca4, 0057dd06]]
// Convention: unknown
// Signature: undefined8 FUN_0057dca4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0057dca4(void)

{
  bool bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint in_EDX;
  ulonglong *puVar4;
  
  _DAT_00623de4 = DAT_00623ddc;
  puVar4 = (ulonglong *)(_DAT_01c4480c + _DAT_01c4f00c * DAT_0061b498 * 4);
  iVar2 = ((_DAT_01c4f014 - _DAT_01c4f00c) + 1) * DAT_0061b498;
  do {
    *puVar4 = _DAT_00623de4;
    puVar4[1] = _DAT_00623de4;
    puVar4[2] = _DAT_00623de4;
    puVar4[3] = _DAT_00623de4;
    puVar4[4] = _DAT_00623de4;
    puVar4[5] = _DAT_00623de4;
    puVar4[6] = _DAT_00623de4;
    puVar4[7] = _DAT_00623de4;
    puVar4 = puVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return CONCAT44(in_EDX,in_EAX);
}
