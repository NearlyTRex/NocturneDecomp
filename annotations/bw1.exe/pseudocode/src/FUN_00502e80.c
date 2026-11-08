// Name: FUN_00502e80
// Address: 00502e80
// Address Range: [[00502e80, 00502f1a]]
// Convention: unknown
// Signature: int FUN_00502e80(int param_1)

#include "nocturne.h"

int FUN_00502e80(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStack_34 [6];
  uint auStack_1c [6];
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x160) != 0) {
    iVar1 = FUN_00483e60(DAT_00612560);
    if (iVar1 == 0) {
      FUN_004087b0(param_1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,0);
      puVar2 = auStack_34;
      puVar3 = auStack_1c;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
      }
      iVar1 = FUN_004207b0(auStack_1c);
      FUN_004087f0(param_1);
      if (iVar1 != 0) {
        FUN_00465890(param_1 + 0x20,param_1 + 0x30,*(uint *)(param_1 + 0x158),
                     *(uint *)(param_1 + 0x15c));
      }
      return iVar1;
    }
  }
  return 0;
}
