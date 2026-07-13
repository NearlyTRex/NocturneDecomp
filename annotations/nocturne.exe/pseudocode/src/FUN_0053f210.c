// Name: FUN_0053f210
// Address: 0053f210
// Address Range: [[0053f210, 0053f250]]
// Convention: unknown
// Signature: void FUN_0053f210(int param_1,int param_2)

#include "nocturne.h"

void FUN_0053f210(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_38 [12];
  
  bVar3 = 0;
  FUN_0053a760(param_1,*(uint *)(param_1 + 0x24ac + param_2 * 0x44),param_2);
  puVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
