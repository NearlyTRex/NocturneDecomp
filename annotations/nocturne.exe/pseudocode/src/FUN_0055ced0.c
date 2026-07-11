// Name: FUN_0055ced0
// Address: 0055ced0
// Address Range: [[0055ced0, 0055cf08]]
// Convention: unknown
// Signature: void FUN_0055ced0(undefined4 param_1)

#include "nocturne.h"

void FUN_0055ced0(uint param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  FUN_0055cd70(local_38,param_1);
  FUN_0055ae60(local_38);
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
