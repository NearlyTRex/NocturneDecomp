// Name: FUN_004bde20
// Address: 004bde20
// Address Range: [[004bde20, 004bde7d]]
// Convention: unknown
// Signature: undefined4 FUN_004bde20(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bde4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004bde20(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    iVar3 = 0x1cc4474;
    do {
      iVar1 = FUN_004bbfd0(iVar3,param_2);
      if (iVar1 != 0) {
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        return *(uint *)(iVar1 + 0x140);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cc4470);
  }
  return 0xffffffff;
}
