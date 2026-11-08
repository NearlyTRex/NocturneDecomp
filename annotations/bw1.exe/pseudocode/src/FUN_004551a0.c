// Name: FUN_004551a0
// Address: 004551a0
// Address Range: [[004551a0, 004553a7]]
// Convention: unknown
// Signature: undefined4 FUN_004551a0(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_004551a0(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  byte auStack_38 [4];
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  FUN_004851a0(DAT_00612560,0x152bc2c);
  puVar4 = &DAT_00629014;
  uVar2 = param_2 + 0x60;
  FUN_00485040(DAT_00612560,0x1483940);
  do {
    FUN_0058043c(puVar4,param_2);
    param_2 = param_2 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (param_2 != uVar2);
  uStack_24 = param_2 ^ uVar2;
  uStack_34 = 4;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_00483d80(DAT_00612560,1);
  uVar3 = 0;
  iStack_20 = 0;
  uStack_1c = 4;
  uStack_14 = 2;
  uStack_18 = 6;
  iVar1 = FUN_005558c0(0x01E82168,auStack_38);
  if (iVar1 == 0) {
    iStack_20 = 1;
    uStack_1c = 3;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = FUN_005558c0(0x01E82168,auStack_38);
    if (iVar1 == 0) {
      uStack_18 = 5;
      uStack_1c = 1;
      uStack_14 = 4;
      iStack_20 = iVar1;
      iVar1 = FUN_005558c0(0x01E82168,auStack_38);
      if (iVar1 == 0) {
        uStack_1c = 6;
        iStack_20 = 2;
        uStack_18 = 7;
        uStack_14 = 3;
        iVar1 = FUN_005558c0(0x01E82168,auStack_38);
        if (iVar1 == 0) {
          uStack_18 = 3;
          iStack_20 = 0;
          uStack_1c = 2;
          uStack_14 = 1;
          iVar1 = FUN_005558c0(0x01E82168,auStack_38);
          if (iVar1 == 0) {
            uStack_14 = 6;
            iStack_20 = 4;
            uStack_1c = 5;
            uStack_18 = 7;
            iVar1 = FUN_005558c0(0x01E82168,auStack_38);
            if (iVar1 == 0) goto LAB_00455257;
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_00455257:
  FUN_00483d80(DAT_00612560,0);
  FUN_00485040(DAT_00612560,0x152bc2c);
  return uVar3;
}
