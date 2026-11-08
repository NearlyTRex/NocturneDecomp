// Name: FUN_005a1970
// Address: 005a1970
// Address Range: [[005a1970, 005a1a9c]]
// Convention: unknown
// Signature: void FUN_005a1970(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a1970(int param_1,int param_2)

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
    uStack_2c = 0xbf6c7086;
    uStack_28 = 0x3d5b9b16;
    uStack_30 = 0xbf204945;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbf6c7086;
      uStack_34 = 0x3d5b9b16;
      uStack_3c = 0xbf204945;
    }
    uStack_10 = 0xc01bd399;
    uStack_18 = 0xbbd21c02;
    uStack_14 = 0x3d9ba527;
    uStack_48 = 0xbbd21c02;
    uStack_44 = 0x3d9ba527;
    uStack_40 = 0xc01bd399;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbbd21c02;
      uStack_20 = 0x3d9ba527;
      uStack_1c = 0xc01bd399;
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
