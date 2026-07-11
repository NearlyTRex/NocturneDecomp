// Name: FUN_00574760
// Address: 00574760
// Address Range: [[00574760, 005747a2]]
// Convention: unknown
// Signature: undefined4 FUN_00574760(uint param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574760(uint param_1)

{
  int iVar1;
  
  if ((_DAT_02de5c30 != 0) && ((*(byte *)((param_1 >> 8 & 0xff) + 0x2de5c41) & 1) != 0)) {
    iVar1 = FUN_005747b0(param_1 & 0xff);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}
