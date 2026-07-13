// Name: FUN_0054d8a0
// Address: 0054d8a0
// Address Range: [[0054d8a0, 0054d9b5]]
// Convention: unknown
// Signature: void FUN_0054d8a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_0054d8a0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_a8 [12];
  byte local_78 [60];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  local_30 = 0;
  local_2c = 0x3e03126f;
  local_28 = 0x40847ae1;
  if (&local_3c != &local_30) {
    local_34 = 0x40847ae1;
    local_3c = 0;
    local_38 = 0x3e03126f;
  }
  local_10 = 0;
  local_18 = 0;
  local_14 = 0x4048f5c3;
  if (&local_24 != &local_18) {
    local_20 = 0x4048f5c3;
    local_1c = 0;
    local_24 = 0;
  }
  FUN_0055afb0(local_78,&local_3c,&local_24);
  FUN_0055aa00(local_78,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
