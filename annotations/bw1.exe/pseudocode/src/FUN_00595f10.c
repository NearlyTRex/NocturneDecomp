// Name: FUN_00595f10
// Address: 00595f10
// Address Range: [[00595f10, 00595ffb]]
// Convention: unknown
// Signature: void FUN_00595f10(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00595f10(int param_1)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_fc [12];
  uint local_cc [12];
  uint local_9c [12];
  uint local_6c [12];
  uint local_3c [12];
  
  bVar4 = 0;
  param_1 = param_1 + 0xfd8;
  FUN_005b72c0(_DAT_02c83880 * 0x30 + param_1,_DAT_02c83884 * 0x30 + param_1,0x3f000000);
  puVar2 = local_6c;
  puVar3 = local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b72c0(_DAT_02c83888 * 0x30 + param_1,_DAT_02c8388c * 0x30 + param_1,0x3f000000);
  puVar2 = local_fc;
  puVar3 = local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  FUN_005b72c0(local_cc,local_9c,0x3f000000);
  puVar2 = local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
