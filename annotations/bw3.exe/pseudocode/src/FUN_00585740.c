// Name: FUN_00585740
// Address: 00585740
// Address Range: [[00585740, 00585778]]
// Convention: unknown
// Signature: void FUN_00585740(undefined4 param_1)

#include "nocturne.h"

void FUN_00585740(uint param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  FUN_005855f0(local_38,param_1);
  FUN_005837e0(local_38);
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
