// Name: FUN_005b7560
// Address: 005b7560
// Address Range: [[005b7560, 005b7598]]
// Convention: unknown
// Signature: void FUN_005b7560(undefined4 param_1)

#include "nocturne.h"

void FUN_005b7560(uint param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  FUN_005b7410(local_38,param_1);
  FUN_005b5600(local_38);
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
