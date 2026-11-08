// Name: FUN_00443af0
// Address: 00443af0
// Address Range: [[00443af0, 00443cf7]]
// Convention: unknown
// Signature: undefined4 FUN_00443af0(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_00443af0(uint param_1,uint param_2)

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
  
  FUN_0046cca0(DAT_0060b280,0x151072c);
  puVar4 = &DAT_00622014;
  uVar2 = param_2 + 0x60;
  FUN_0046cb40(DAT_0060b280,0x1468440);
  do {
    FUN_0055d9ec(puVar4,param_2);
    param_2 = param_2 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (param_2 != uVar2);
  uStack_24 = param_2 ^ uVar2;
  uStack_34 = 4;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  FUN_0046b880(DAT_0060b280,1);
  uVar3 = 0;
  iStack_20 = 0;
  uStack_1c = 4;
  uStack_14 = 2;
  uStack_18 = 6;
  iVar1 = FUN_00534610(0x01E661B8,auStack_38);
  if (iVar1 == 0) {
    iStack_20 = 1;
    uStack_1c = 3;
    uStack_18 = 7;
    uStack_14 = 5;
    iVar1 = FUN_00534610(0x01E661B8,auStack_38);
    if (iVar1 == 0) {
      uStack_18 = 5;
      uStack_1c = 1;
      uStack_14 = 4;
      iStack_20 = iVar1;
      iVar1 = FUN_00534610(0x01E661B8,auStack_38);
      if (iVar1 == 0) {
        uStack_1c = 6;
        iStack_20 = 2;
        uStack_18 = 7;
        uStack_14 = 3;
        iVar1 = FUN_00534610(0x01E661B8,auStack_38);
        if (iVar1 == 0) {
          uStack_18 = 3;
          iStack_20 = 0;
          uStack_1c = 2;
          uStack_14 = 1;
          iVar1 = FUN_00534610(0x01E661B8,auStack_38);
          if (iVar1 == 0) {
            uStack_14 = 6;
            iStack_20 = 4;
            uStack_1c = 5;
            uStack_18 = 7;
            iVar1 = FUN_00534610(0x01E661B8,auStack_38);
            if (iVar1 == 0) goto LAB_00443ba7;
          }
        }
      }
    }
  }
  uVar3 = 1;
LAB_00443ba7:
  FUN_0046b880(DAT_0060b280,0);
  FUN_0046cb40(DAT_0060b280,0x151072c);
  return uVar3;
}
