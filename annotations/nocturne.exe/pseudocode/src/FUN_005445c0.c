// Name: FUN_005445c0
// Address: 005445c0
// Address Range: [[005445c0, 00544719]]
// Convention: unknown
// Signature: undefined4 FUN_005445c0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_005445c0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  uint local_1cc [12];
  uint local_19c [12];
  uint local_16c [12];
  byte local_13c [48];
  uint local_10c [12];
  uint local_dc [12];
  uint local_ac [12];
  uint local_7c [12];
  uint local_4c [12];
  byte local_1c [12];
  byte local_10 [12];
  
  bVar5 = 0;
  if (param_2 != *(int *)(param_1 + 0xbca4)) {
    return 0;
  }
  FUN_0055cc30(param_1 + 0xbd34,param_1 + 0xbd64,*(uint *)(param_1 + 0xbd30));
  puVar1 = local_1cc;
  puVar4 = local_16c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0055afb0(local_13c,param_1 + 0x20,param_1 + 0x30);
  FUN_00544760(param_1,local_13c);
  puVar1 = local_4c;
  puVar4 = local_dc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0055aa00(local_16c,local_dc);
  puVar1 = local_7c;
  puVar4 = local_19c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_0055aa00(local_19c);
  puVar1 = local_ac;
  puVar4 = local_10c;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar1 = (uint *)FUN_0055bc00(local_10c,local_10);
  iVar3 = *(int *)(param_1 + 0xbca4);
  *(uint *)(iVar3 + 0x20) = *puVar1;
  *(uint *)(iVar3 + 0x24) = puVar1[1];
  *(uint *)(iVar3 + 0x28) = puVar1[2];
  uVar2 = FUN_0055b180(local_10c,local_1c);
  FUN_0042a060(*(uint *)(param_1 + 0xbca4),uVar2);
  return 1;
}
