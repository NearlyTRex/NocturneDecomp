// Name: FUN_00526340
// Address: 00526340
// Address Range: [[00526340, 005263bd]]
// Convention: unknown
// Signature: void FUN_00526340(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00526340(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_02dc1b74 = _DAT_02dc1b74 + 1;
  if (7 < _DAT_02dc1b74) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0xcf4;
    FUN_004c8440("pushSfxOptions - stack full");
  }
  puVar2 = (uint *)((_DAT_02dc1b74 + -1) * 0x6c + 0x2dc1b78);
  puVar3 = (uint *)(_DAT_02dc1b74 * 0x6c + 0x2dc1b78);
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  return;
}
