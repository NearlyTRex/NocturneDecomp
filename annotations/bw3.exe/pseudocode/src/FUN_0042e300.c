// Name: FUN_0042e300
// Address: 0042e300
// Address Range: [[0042e300, 0042e36c]]
// Convention: unknown
// Signature: void FUN_0042e300(int param_1)

#include "nocturne.h"

void FUN_0042e300(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_34 [6];
  uint local_1c [6];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x24fc) == 0) {
    return;
  }
  FUN_004087f0(param_1);
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
  puVar2 = local_34;
  puVar3 = local_1c;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  iVar1 = FUN_0041daf0(local_1c);
  if (iVar1 != 0) {
    FUN_0042d8e0(param_1);
  }
  FUN_00408830(param_1);
  return;
}
