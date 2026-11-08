// Name: FUN_004bdbf0
// Address: 004bdbf0
// Address Range: [[004bdbf0, 004bdcd8]]
// Convention: unknown
// Signature: undefined4 FUN_004bdbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004bdc23) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004bdbf0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01cc4470) {
    iVar3 = 0x1cc4474;
    do {
      iVar1 = FUN_004bbfd0(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004bdc28;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01cc4470);
  }
  iVar1 = 0;
LAB_004bdc28:
  if (iVar1 == 0) {
    FUN_005bfb40(param_4,"No such entry '%s'",param_2);
    return 0;
  }
  if ((*(int *)(iVar1 + 0x140) != 5) && (*(int *)(iVar1 + 0x140) != 6)) {
    FUN_005bfb40(param_4,"'%s' is not a map",param_2);
    return 0;
  }
  iVar2 = FUN_004bc540(&DAT_01cc55d0 + *(int *)(iVar1 + 0x158) * 0x970,param_3);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_005bfb40(param_4,"No such annotion '%s' found on map '%s'",param_3,param_2);
  return 0;
}
