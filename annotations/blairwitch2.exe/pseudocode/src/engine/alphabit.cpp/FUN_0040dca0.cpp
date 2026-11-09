// Name: engine_alphabit.cpp_FUN_0040dca0
// Address: 0040dca0
// Address Range: [[0040dca0, 0040dcef]]
// Convention: unknown
// Signature: void engine_alphabit_cpp_FUN_0040dca0(int param_1)

#include "nocturne.h"

void engine_alphabit_cpp_FUN_0040dca0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (DAT_006141c0 == 0x10) {
    iVar4 = 0;
    iVar3 = 0;
    do {
      iVar2 = iVar3 + 2;
      puVar1 = (ushort *)(*(int *)(param_1 + 8) + iVar4);
      iVar4 = iVar4 + 4;
      *(ushort *)(iVar3 + 0x1c35614) = *puVar1;
      iVar3 = iVar2;
    } while (iVar2 != 0x200);
    return;
  }
  puVar5 = *(uint **)(param_1 + 8);
  puVar6 = (uint *)&DAT_01c35214;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(byte *)puVar6 = *(byte *)puVar5;
    puVar5 = (uint *)((int)puVar5 + 1);
    puVar6 = (uint *)((int)puVar6 + 1);
  }
  return;
}
