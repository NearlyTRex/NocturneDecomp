// Name: FUN_0044d9f0
// Address: 0044d9f0
// Address Range: [[0044d9f0, 0044dba3]]
// Convention: unknown
// Signature: undefined4 FUN_0044d9f0(void)

#include "nocturne.h"

uint FUN_0044d9f0(void)

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
  FUN_0046b880(DAT_0060b280,1);
  uStack_20 = 0;
  uStack_1c = 4;
  uStack_18 = 6;
  uStack_14 = 2;
  iVar1 = FUN_00534610(0x01E661B8,auStack_38);
  if (iVar1 == 0) {
    uVar2 = 1;
    uStack_1c = 3;
    uStack_20 = 1;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = FUN_00534610(0x01E661B8,auStack_38);
    if (iVar1 != 0) goto LAB_0044da5f;
    uStack_18 = 5;
    uStack_20 = 0;
    uStack_1c = 1;
    uStack_14 = 4;
    iVar1 = FUN_00534610(0x01E661B8,auStack_38);
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_0044da5f;
    }
    uStack_14 = 3;
    uStack_20 = 2;
    uStack_1c = 6;
    uStack_18 = 7;
    iVar1 = FUN_00534610(0x01E661B8,auStack_38);
    if (iVar1 == 0) {
      uStack_20 = 0;
      uStack_1c = 2;
      uStack_18 = 3;
      uStack_14 = 1;
      iVar1 = FUN_00534610(0x01E661B8,auStack_38);
      if (iVar1 != 0) {
        uVar2 = 1;
        goto LAB_0044da5f;
      }
      uStack_20 = 4;
      uStack_1c = 5;
      uStack_18 = 7;
      uStack_14 = 6;
      iVar1 = FUN_00534610(0x01E661B8,auStack_38);
      uVar2 = 0;
      if (iVar1 == 0) goto LAB_0044da5f;
    }
  }
  uVar2 = 1;
LAB_0044da5f:
  FUN_0046b880(DAT_0060b280,0);
  return uVar2;
}
