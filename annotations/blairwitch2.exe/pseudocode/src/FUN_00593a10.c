// Name: FUN_00593a10
// Address: 00593a10
// Address Range: [[00593a10, 00593a48]]
// Convention: unknown
// Signature: void FUN_00593a10(undefined4 param_1)

#include "nocturne.h"

void FUN_00593a10(uint param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  FUN_005938c0(local_38,param_1);
  FUN_00591ab0(local_38);
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
