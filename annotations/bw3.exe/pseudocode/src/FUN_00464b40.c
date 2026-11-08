// Name: FUN_00464b40
// Address: 00464b40
// Address Range: [[00464b40, 00464bc7]]
// Convention: unknown
// Signature: void FUN_00464b40(int param_1,int param_2)

#include "nocturne.h"

void FUN_00464b40(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if ((param_2 != 0) && (1 < *(int *)(param_1 + 0x9c8))) {
    *(uint *)(param_1 + 0x9c8) = 3;
    FUN_004087f0(param_1);
    (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
    puVar2 = auStack_34;
    puVar3 = auStack_1c;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    iVar1 = FUN_0041daf0(auStack_1c);
    if (iVar1 != 0) {
      FUN_00462540(param_1 + 0x158,0,0xffffffff);
    }
    FUN_00408830(param_1);
    return;
  }
  return;
}
