// Name: FUN_004b54a0
// Address: 004b54a0
// Address Range: [[004b54a0, 004b561a]]
// Convention: unknown
// Signature: int FUN_004b54a0(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b54a0(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_004ac6f0(&DAT_01c6eaa8);
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < _DAT_01c6eaa0) {
      iVar2 = 0;
      do {
        if (((*(int *)(iVar2 + 0x1c6eab4) != 0) && (*(int *)(iVar2 + 0x1c6eab8) == 0)) &&
           (iVar1 = FUN_004ac770(&DAT_01c6eaa8 + iVar2), param_3 != 0)) {
          *(uint *)(iVar2 + 0x1c6eab4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar4 < _DAT_01c6eaa0);
    }
  }
  else {
    iVar4 = 0;
    if (0 < _DAT_01c6eaa0) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + 0x1c6eab8) == 0) {
          FUN_004ac770(&DAT_01c6eaa8 + iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
        iVar1 = _DAT_01c6eaa0;
      } while (iVar4 < _DAT_01c6eaa0);
    }
  }
  if ((param_2 != 0) && (iVar4 = 0, 0 < _DAT_01c726a8)) {
    iVar5 = 0x1c726b0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 600);
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x1c726b0) = 1;
LAB_004b5525:
        iVar1 = FUN_004ace60(iVar2 + 0x1c726b0);
      }
      else if (*(int *)(iVar2 + 0x1c726b0) != 0) goto LAB_004b5525;
      iVar2 = iVar2 + 0x260;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x260;
    } while (iVar4 < _DAT_01c726a8);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar4 + 0x1cb4f64) != 0) &&
         (iVar1 = FUN_004b23a0(iVar4 + 0x1cb4f60), param_3 != 0)) {
        *(uint *)(iVar4 + 0x1cb4f64) = 0;
      }
      iVar4 = iVar4 + 0x70;
    } while (iVar4 != 0x8c0);
  }
  else {
    puVar3 = (byte *)0x1cb4f60;
    do {
      iVar1 = FUN_004b23a0(puVar3);
      puVar3 = puVar3 + 0x70;
    } while (puVar3 != &DAT_01cb5820);
  }
  return iVar1;
}
