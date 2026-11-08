// Name: FUN_00460270
// Address: 00460270
// Address Range: [[00460270, 00460423]]
// Convention: unknown
// Signature: undefined4 FUN_00460270(void)

#include "nocturne.h"

uint FUN_00460270(void)

{
  int iVar1;
  uint uVar2;
  byte auStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uStack_34 = 4;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_0046d460(DAT_005f2afc,1);
  uStack_20 = 0;
  uStack_1c = 4;
  uStack_18 = 6;
  uStack_14 = 2;
  iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
  if (iVar1 == 0) {
    uVar2 = 1;
    uStack_1c = 3;
    uStack_20 = 1;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
    if (iVar1 != 0) goto LAB_004602df;
    uStack_18 = 5;
    uStack_20 = 0;
    uStack_1c = 1;
    uStack_14 = 4;
    iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_004602df;
    }
    uStack_14 = 3;
    uStack_20 = 2;
    uStack_1c = 6;
    uStack_18 = 7;
    iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
    if (iVar1 == 0) {
      uStack_20 = 0;
      uStack_1c = 2;
      uStack_18 = 3;
      uStack_14 = 1;
      iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_004602df;
      }
      uStack_20 = 4;
      uStack_1c = 5;
      uStack_18 = 7;
      uStack_14 = 6;
      iVar1 = FUN_0053b250(0x01ED78C8,auStack_38);
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_004602df;
    }
  }
  uVar2 = 1;
LAB_004602df:
  FUN_0046d460(DAT_005f2afc,0);
  return uVar2;
}
