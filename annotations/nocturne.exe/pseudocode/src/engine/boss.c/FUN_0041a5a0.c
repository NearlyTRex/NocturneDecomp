// Name: FUN_0041a5a0
// Address: 0041a5a0
// Address Range: [[0041a5a0, 0041a5de]]
// Convention: unknown
// Signature: void FUN_0041a5a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a5a0(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_3c [13];
  
  bVar3 = 0;
  _DAT_01cc4800 = "..\\engine\\boss.c";
  _DAT_01cc4804 = 0x44;
  FUN_004c8440("modelStruct not supported");
  puVar2 = local_3c;
  for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
