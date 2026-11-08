// Name: FUN_004ce630
// Address: 004ce630
// Address Range: [[004ce630, 004ce7de]]
// Convention: unknown
// Signature: int FUN_004ce630(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004ce630(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x01D2130C;
  if (*(int *)(0x01D2130C + 0x14) != 0) {
    FUN_004cd600(0x1d276bc);
    if (param_2 == 0) {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1d276bc) == 0) {
            FUN_004cd690(iVar1 + 0x1d276bc,param_3);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < _DAT_01d276b8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01d276b8) {
        iVar1 = 0x1d276bc;
        do {
          iVar2 = iVar2 + 1;
          FUN_004cd690(iVar1,0);
          iVar1 = iVar1 + 0x48;
        } while (iVar2 < _DAT_01d276b8);
      }
    }
    iVar2 = FUN_004cdc90(0x1d4a944);
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01d4a940) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1d4a944) == 0) {
            FUN_004cdd30(iVar3 + 0x1d4a944,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x2c;
          iVar2 = _DAT_01d4a940;
        } while (iVar1 < _DAT_01d4a940);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01d4a940) {
        iVar3 = 0x1d4a944;
        do {
          iVar1 = iVar1 + 1;
          iVar2 = FUN_004cdd30(iVar3,0);
          iVar3 = iVar3 + 0x2c;
        } while (iVar1 < _DAT_01d4a940);
      }
    }
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01d4aec8) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1d4aecc) == 0) {
            iVar2 = FUN_004ce310(iVar3 + 0x1d4aecc,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x44;
        } while (iVar1 < _DAT_01d4aec8);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01d4aec8) {
        iVar2 = 0x1d4aecc;
        do {
          iVar1 = iVar1 + 1;
          iVar3 = FUN_004ce310(iVar2,0);
          iVar2 = iVar2 + 0x44;
        } while (iVar1 < _DAT_01d4aec8);
        return iVar3;
      }
    }
  }
  return iVar2;
}
