// Name: FUN_004ab8f0
// Address: 004ab8f0
// Address Range: [[004ab8f0, 004ab9ea]]
// Convention: unknown
// Signature: undefined4 FUN_004ab8f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004ab923) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ab8f0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < _DAT_01d0d210) {
    iVar3 = 0x1d0d214;
    do {
      iVar1 = FUN_004a9c30(iVar3,param_2);
      if (iVar1 != 0) goto LAB_004ab928;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x2e4;
    } while (iVar2 < _DAT_01d0d210);
  }
  iVar1 = 0;
LAB_004ab928:
  if (iVar1 == 0) {
    FUN_005a28c0(param_4,"No such entry '%s'",param_2);
    return 0;
  }
  if ((*(int *)(iVar1 + 0x140) != 5) && (*(int *)(iVar1 + 0x140) != 6)) {
    FUN_005a28c0(param_4,"'%s' is not a map",param_2);
    return 0;
  }
  iVar2 = FUN_004aa1a0(&DAT_01d0e370 + *(int *)(iVar1 + 0x158) * 0x126c,param_3);
  if (iVar2 != 0) {
    return 1;
  }
  FUN_005a28c0(param_4,"No such annotion '%s' found on map '%s'",param_3,param_2);
  return 0;
}
