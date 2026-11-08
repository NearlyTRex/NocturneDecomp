// Name: FUN_004c94c0
// Address: 004c94c0
// Address Range: [[004c94c0, 004c966e]]
// Convention: unknown
// Signature: int FUN_004c94c0(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004c94c0(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x01CB6900;
  if (*(int *)(0x01CB6900 + 0x14) != 0) {
    FUN_004c7f80(0x1cbcafc);
    if (param_2 == 0) {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        iVar1 = 0;
        do {
          if (*(int *)(iVar1 + 0x1cbcafc) == 0) {
            FUN_004c8010(iVar1 + 0x1cbcafc,param_3);
          }
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cbcaf8);
      }
    }
    else {
      iVar2 = 0;
      if (0 < _DAT_01cbcaf8) {
        iVar1 = 0x1cbcafc;
        do {
          iVar2 = iVar2 + 1;
          FUN_004c8010(iVar1,0);
          iVar1 = iVar1 + 0x44;
        } while (iVar2 < _DAT_01cbcaf8);
      }
    }
    iVar2 = FUN_004c8800(0x1cdde44);
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01cdde40) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1cdde44) == 0) {
            FUN_004c88a0(iVar3 + 0x1cdde44,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x28;
          iVar2 = _DAT_01cdde40;
        } while (iVar1 < _DAT_01cdde40);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01cdde40) {
        iVar3 = 0x1cdde44;
        do {
          iVar1 = iVar1 + 1;
          iVar2 = FUN_004c88a0(iVar3,0);
          iVar3 = iVar3 + 0x28;
        } while (iVar1 < _DAT_01cdde40);
      }
    }
    if (param_2 == 0) {
      iVar1 = 0;
      if (0 < _DAT_01cde348) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + 0x1cde34c) == 0) {
            iVar2 = FUN_004c9000(iVar3 + 0x1cde34c,param_3);
          }
          iVar1 = iVar1 + 1;
          iVar3 = iVar3 + 0x40;
        } while (iVar1 < _DAT_01cde348);
      }
    }
    else {
      iVar1 = 0;
      if (0 < _DAT_01cde348) {
        iVar2 = 0x1cde34c;
        do {
          iVar1 = iVar1 + 1;
          iVar3 = FUN_004c9000(iVar2,0);
          iVar2 = iVar2 + 0x40;
        } while (iVar1 < _DAT_01cde348);
        return iVar3;
      }
    }
  }
  return iVar2;
}
