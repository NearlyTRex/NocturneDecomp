// Name: FUN_005a1240
// Address: 005a1240
// Address Range: [[005a1240, 005a1281]]
// Convention: unknown
// Signature: uint FUN_005a1240(int param_1)

#include "nocturne.h"

uint FUN_005a1240(int param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) <= iVar2) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 4) == 0) {
    return 0xfffffffe;
  }
  bVar1 = *(byte *)(iVar2 + *(int *)(param_1 + 4));
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  return (uint)bVar1;
}
