// Name: FUN_0045d020
// Address: 0045d020
// Address Range: [[0045d020, 0045d056]]
// Convention: unknown
// Signature: void FUN_0045d020(int param_1)

#include "nocturne.h"

void FUN_0045d020(int param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  iVar1 = FUN_0040cd00(0x3f000000);
  if (iVar1 == 0) {
    pcVar3 = "ghoul-dig-?.wav";
  }
  else {
    pcVar3 = "ghoul-eat-?.wav";
  }
  uVar2 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar3);
  *(uint *)(param_1 + 0xc354) = uVar2;
  return;
}
