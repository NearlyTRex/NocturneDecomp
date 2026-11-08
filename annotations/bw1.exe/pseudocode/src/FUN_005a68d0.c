// Name: FUN_005a68d0
// Address: 005a68d0
// Address Range: [[005a68d0, 005a69f0]]
// Convention: unknown
// Signature: void FUN_005a68d0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a68d0(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_a8 [12];
  byte auStack_78 [48];
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x78 + param_1 + 0x25a8);
  uStack_48 = 0;
  uStack_44 = 0x3e03126f;
  uStack_40 = 0x40847ae1;
  if (&uStack_30 != &uStack_48) {
    uStack_2c = 0x3e03126f;
    uStack_28 = 0x40847ae1;
    uStack_30 = 0;
  }
  uStack_10 = 0;
  uStack_18 = 0;
  uStack_14 = 0x4048f5c3;
  uStack_24 = 0;
  uStack_20 = 0x4048f5c3;
  uStack_1c = 0;
  if (&uStack_3c != &uStack_24) {
    uStack_3c = 0;
    uStack_38 = 0x4048f5c3;
    uStack_34 = 0;
  }
  FUN_005b5760(auStack_78,&uStack_30,&uStack_3c);
  FUN_005b5200(auStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
