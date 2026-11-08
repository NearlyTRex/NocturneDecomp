// Name: FUN_004e5cd0
// Address: 004e5cd0
// Address Range: [[004e5cd0, 004e5e7e]]
// Convention: unknown
// Signature: int FUN_004e5cd0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e5cd0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x01CCF390;
  if (*(int *)(0x01CCF390 + 0x14) != 0) {
    FUN_004e4910(0x1cd56b4);
    if (param_2 == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cd56b0) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cd56b4) == 0) {
            FUN_004e49a0(iVar1 + 0x1cd56b4,param_3);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cd56b0);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cd56b0) {
        iVar1 = 0x1cd56b4;
        do {
          iVar2 = iVar2 + 1;
          FUN_004e49a0(iVar1,0);
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cd56b0);
      }
    }
    iVar2 = FUN_004e50e0(0x1cf69fc);
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01cf69f8) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1cf69fc) == 0) {
            FUN_004e5180(iVar3 + 0x1cf69fc,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x28;
          iVar2 = _DAT_01cf69f8;
        } while (iVar1 < _DAT_01cf69f8);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01cf69f8) {
        iVar3 = 0x1cf69fc;
        do {
          iVar1 = iVar1 + 1;
          iVar2 = FUN_004e5180(iVar3,0);
          iVar3 = iVar3 + 0x28;
        } while (iVar1 < _DAT_01cf69f8);
      }
    }
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01cf6f00) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1cf6f04) == 0) {
            iVar2 = FUN_004e5860(iVar3 + 0x1cf6f04,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x40;
        } while (iVar1 < _DAT_01cf6f00);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01cf6f00) {
        iVar2 = 0x1cf6f04;
        do {
          iVar1 = iVar1 + 1;
          iVar3 = FUN_004e5860(iVar2,0);
          iVar2 = iVar2 + 0x40;
        } while (iVar1 < _DAT_01cf6f00);
        return iVar3;
      }
    }
  }
  return iVar2;
}
