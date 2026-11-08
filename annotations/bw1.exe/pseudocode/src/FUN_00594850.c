// Name: FUN_00594850
// Address: 00594850
// Address Range: [[00594850, 0059497c]]
// Convention: unknown
// Signature: void FUN_00594850(int param_1,int param_2)

#include "nocturne.h"

void FUN_00594850(int param_1,int param_2)

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
    uStack_2c = 0xbfeed917;
    uStack_28 = 0xc08374bc;
    uStack_30 = 0x4006a7f0;
    if (&uStack_24 != &uStack_30) {
      uStack_20 = 0xbfeed917;
      uStack_1c = 0xc08374bc;
      uStack_24 = 0x4006a7f0;
    }
    uStack_10 = 0x3dced917;
    uStack_18 = 0x3faf7cee;
    uStack_14 = 0xbef8d4fe;
    uStack_48 = 0x3faf7cee;
    uStack_44 = 0xbef8d4fe;
    uStack_40 = 0x3dced917;
    if (&uStack_3c != &uStack_48) {
      uStack_3c = 0x3faf7cee;
      uStack_38 = 0xbef8d4fe;
      uStack_34 = 0x3dced917;
    }
  }
  FUN_005b5760(auStack_78,&uStack_24,&uStack_3c);
  FUN_005b5200(auStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
