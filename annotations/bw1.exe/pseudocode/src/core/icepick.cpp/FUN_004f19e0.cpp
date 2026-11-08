// Name: FUN_004f19e0
// Address: 004f19e0
// Address Range: [[004f19e0, 004f1b48]]
// Convention: unknown
// Signature: void FUN_004f19e0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f19e0(int param_1,int param_2)

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
    uStack_2c = 0xbe6a7efa;
    uStack_28 = 0xbca3d70a;
    uStack_30 = 0x3ee66666;
    if (&uStack_3c != &uStack_30) {
      uStack_3c = 0x3ee66666;
      uStack_38 = 0xbe6a7efa;
      uStack_34 = 0xbca3d70a;
    }
    uStack_18 = 0xbec7ae14;
    uStack_10 = 0x3fb76c8b;
    uStack_14 = 0x3f96872b;
    uStack_48 = 0xbec7ae14;
    uStack_44 = 0x3f96872b;
    uStack_40 = 0x3fb76c8b;
    if (&uStack_24 != &uStack_48) {
      uStack_24 = 0xbec7ae14;
      uStack_20 = 0x3f96872b;
      uStack_1c = 0x3fb76c8b;
    }
  }
  else {
    _DAT_01d1d400 = "..\\core\\icepick.cpp";
    _DAT_01d1d404 = 0x289;
    FUN_005030e0("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  FUN_005b5760(auStack_78,&uStack_3c,&uStack_24);
  FUN_005b5200(auStack_78,iVar1 * 0x30 + param_1 + 0xfd8);
  puVar2 = auStack_a8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
