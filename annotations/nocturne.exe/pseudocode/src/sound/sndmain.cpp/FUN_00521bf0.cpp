// Name: FUN_00521bf0
// Address: 00521bf0
// Address Range: [[00521bf0, 00521c4f]]
// Convention: unknown
// Signature: int FUN_00521bf0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FUN_00521bf0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_02dc84bc < 1) {
    _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
    _DAT_01cc4804 = 0x1f6;
    FUN_004c8440("SfxSlot::kill - must be locked!");
  }
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = _DAT_02dbd3e4;
  while( true ) {
    if (iVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x47ff < iVar2 + 0x120) break;
    iVar1 = *(int *)(&DAT_02dbd504 + iVar2);
    iVar2 = iVar2 + 0x120;
  }
  return -1;
}
