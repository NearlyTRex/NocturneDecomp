// Name: FUN_00436580
// Address: 00436580
// Address Range: [[00436580, 004366ec]]
// Convention: unknown
// Signature: void FUN_00436580(int param_1,int param_2,int param_3)

#include "nocturne.h"

void FUN_00436580(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_108 [12];
  uint local_d8 [12];
  uint local_a8 [3];
  uint local_9c;
  uint local_8c;
  uint local_7c;
  uint local_78 [12];
  uint local_48 [12];
  uint local_18 [3];
  
  bVar5 = 0;
  iVar2 = param_2 * 0xac + param_1 + 0x37b50;
  FUN_0055bd00(param_3 + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30);
  puVar3 = local_48;
  puVar4 = local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0055aa00(local_78,iVar2 + 0x48);
  puVar3 = local_d8;
  puVar4 = &local_138;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(uint *)(iVar2 + 0x78) = local_138;
  *(uint *)(iVar2 + 0x7c) = local_128;
  *(uint *)(iVar2 + 0x80) = local_118;
  *(uint *)(iVar2 + 0x84) = local_134;
  *(uint *)(iVar2 + 0x88) = local_124;
  *(uint *)(iVar2 + 0x8c) = local_114;
  *(uint *)(iVar2 + 0x90) = local_130;
  *(uint *)(iVar2 + 0x94) = local_120;
  *(uint *)(iVar2 + 0x98) = local_110;
  FUN_0055bd00(&local_138);
  puVar3 = local_108;
  puVar4 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if ((uint *)(iVar2 + 0xa0) == local_18) {
    return;
  }
  *(uint *)(iVar2 + 0xa0) = local_9c;
  *(uint *)(iVar2 + 0xa4) = local_8c;
  *(uint *)(iVar2 + 0xa8) = local_7c;
  return;
}
