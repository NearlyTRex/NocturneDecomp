// Name: FUN_004a5430
// Address: 004a5430
// Address Range: [[004a5430, 004a548d]]
// Convention: unknown
// Signature: undefined4 FUN_004a5430(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004a545f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a5430(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cab9f0) {
    iVar3 = 0x1cab9f4;
    do {
      iVar1 = FUN_004a35e0(iVar3,param_2);
      if (iVar1 != 0) {
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        return *(uint *)(iVar1 + 0x140);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cab9f0);
  }
  return 0xffffffff;
}
