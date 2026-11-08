// Name: FUN_004077f0
// Address: 004077f0
// Address Range: [[004077f0, 00407859]]
// Convention: unknown
// Signature: void FUN_004077f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004077f0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_007dd9f0 != 0) {
    if (_DAT_01c6cee8 != 0) {
      FUN_00565c70(&DAT_0060b014,0x7dd9f4,_DAT_007dd9f0,0xcd);
      _DAT_007dd9f0 = 0;
      return;
    }
    iVar3 = 0;
    if (0 < _DAT_007dd9f0) {
      iVar2 = 0;
      do {
        puVar1 = (uint *)(iVar2 + 0x7dd9f4);
        iVar2 = iVar2 + 4;
        iVar3 = iVar3 + 1;
        FUN_004059a0(*puVar1);
      } while (iVar3 < _DAT_007dd9f0);
    }
    _DAT_007dd9f0 = 0;
  }
  return;
}
