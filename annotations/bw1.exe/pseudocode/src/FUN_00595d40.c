// Name: FUN_00595d40
// Address: 00595d40
// Address Range: [[00595d40, 00595ecd]]
// Convention: unknown
// Signature: undefined4 FUN_00595d40(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00595d40(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_101c [905];
  byte auStack_154 [48];
  uint auStack_124 [12];
  uint auStack_f4 [12];
  uint auStack_c4 [12];
  uint auStack_94 [12];
  uint auStack_64 [12];
  uint uStack_34;
  uint auStack_30 [4];
  uint uStack_20;
  uint uStack_1c;
  uint uStack_10;
  
  bVar4 = 0;
  if (param_2 != *(int *)(param_1 + 0xc1e8)) {
    return 0;
  }
  FUN_005b72c0(param_1 + 0xc278,param_1 + 0xc2a8,*(uint *)(param_1 + 0xc274));
  puVar2 = auStack_c4;
  puVar3 = (uint *)&stack0xfffffe7c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b5760(auStack_154,param_1 + 0x20,param_1 + 0x30);
  FUN_00595f10(param_1,auStack_154);
  puVar2 = (uint *)&stack0xfffffe4c;
  puVar3 = auStack_f4;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b5200(&stack0xfffffe7c,auStack_f4);
  puVar2 = auStack_64;
  puVar3 = (uint *)&stack0xfffffe1c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b5200(&stack0xfffffe1c);
  puVar2 = auStack_94;
  puVar3 = auStack_124;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b6270(auStack_124);
  auStack_30[2] = uStack_10;
  auStack_30[(uint)bVar4 * -2 + 3] = auStack_30[(uint)bVar4 * -2 + 9];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  iVar1 = *(int *)(param_1 + 0xc1e8);
  *(uint *)(iVar1 + 0x20) = auStack_30[2];
  *(uint *)(iVar1 + 0x24) = auStack_30[3];
  *(uint *)(iVar1 + 0x28) = uStack_20;
  FUN_005b5930(auStack_124);
  uStack_34 = uStack_1c;
  auStack_30[(uint)bVar4 * -2] = auStack_30[(uint)bVar4 * -2 + 6];
  auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       auStack_30[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  FUN_00433d50(*(uint *)(param_1 + 0xc1e8),&uStack_34);
  return 1;
}
