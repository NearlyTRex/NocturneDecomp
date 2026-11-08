// Name: FUN_00429120
// Address: 00429120
// Address Range: [[00429120, 0042917e]]
// Convention: unknown
// Signature: void FUN_00429120(int param_1,int param_2)

#include "nocturne.h"

void FUN_00429120(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  uint local_38 [12];
  
  bVar4 = 0;
  piVar2 = (int *)(param_1 + 0x2618 + param_2 * 0x78);
  FUN_005916b0(piVar2 + 3,param_1 + 0x1134 + *piVar2 * 0x30);
  puVar3 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
