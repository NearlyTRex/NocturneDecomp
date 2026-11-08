// Name: FUN_00593ae0
// Address: 00593ae0
// Address Range: [[00593ae0, 00593c0d]]
// Convention: unknown
// Signature: void FUN_00593ae0(int param_1,int param_2)

#include "nocturne.h"

void FUN_00593ae0(int param_1,int param_2)

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
  if (param_2 == 1) {
    uStack_2c = 0xbda77e94;
    uStack_28 = 0x3ef35569;
    uStack_30 = 0xbe51c1d7;
    if (&uStack_3c != &uStack_30) {
      uStack_38 = 0xbda77e94;
      uStack_34 = 0x3ef35569;
      uStack_3c = 0xbe51c1d7;
    }
    uStack_10 = 0x3fc5cc10;
    uStack_18 = 0xbc98ca9c;
    uStack_14 = 0x3fcf0e2c;
    uStack_48 = 0xbc98ca9c;
    uStack_44 = 0x3fcf0e2c;
    uStack_40 = 0x3fc5cc10;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbc98ca9c;
      uStack_20 = 0x3fcf0e2c;
      uStack_1c = 0x3fc5cc10;
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
