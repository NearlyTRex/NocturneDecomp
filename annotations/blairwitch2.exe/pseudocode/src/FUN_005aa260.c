// Name: FUN_005aa260
// Address: 005aa260
// Address Range: [[005aa260, 005aa2d0]]
// Convention: unknown
// Signature: undefined4 FUN_005aa260(int param_1)

#include "nocturne.h"

uint FUN_005aa260(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x10af8;
  iVar1 = FUN_0059daa0(iVar2,"Death");
  if (((iVar1 == 0) && (iVar1 = FUN_0059daa0(iVar2,"Animation"), iVar1 == 0)) &&
     (iVar1 = FUN_0059daa0(iVar2,"Sleeping"), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x24) != 5) {
    return 0;
  }
  return 1;
}
