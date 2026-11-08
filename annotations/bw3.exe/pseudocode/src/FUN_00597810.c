// Name: FUN_00597810
// Address: 00597810
// Address Range: [[00597810, 0059793c]]
// Convention: unknown
// Signature: void FUN_00597810(int param_1,int param_2)

#include "nocturne.h"

void FUN_00597810(int param_1,int param_2)

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
  if (param_2 == 0) {
    uStack_2c = 0xbdf61e4f;
    uStack_28 = 0xbe57caea;
    uStack_30 = 0x3ec1cbab;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbdf61e4f;
      uStack_34 = 0xbe57caea;
      uStack_3c = 0x3ec1cbab;
    }
    uStack_10 = 0xbfcbdfe3;
    uStack_18 = 0xbd2a6076;
    uStack_14 = 0xbfbf0f28;
    uStack_48 = 0xbd2a6076;
    uStack_44 = 0xbfbf0f28;
    uStack_40 = 0xbfcbdfe3;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbd2a6076;
      uStack_20 = 0xbfbf0f28;
      uStack_1c = 0xbfcbdfe3;
    }
  }
  FUN_00583940(auStack_78,&uStack_3c,&uStack_24);
  FUN_005833e0(auStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
