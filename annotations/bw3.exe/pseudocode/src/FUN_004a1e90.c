// Name: FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a200a]]
// Convention: unknown
// Signature: int FUN_004a1e90(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004a1e90(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_004975a0(&DAT_01c8aea8);
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < _DAT_01c8aea0) {
      iVar2 = 0;
      do {
        if (((*(int *)(iVar2 + 0x1c8aeb4) != 0) && (*(int *)(iVar2 + 0x1c8aeb8) == 0)) &&
           (iVar1 = FUN_00497610(&DAT_01c8aea8 + iVar2), param_3 != 0)) {
          *(uint *)(iVar2 + 0x1c8aeb4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x40;
      } while (iVar4 < _DAT_01c8aea0);
    }
  }
  else {
    iVar4 = 0;
    if (0 < _DAT_01c8aea0) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + 0x1c8aeb8) == 0) {
          FUN_00497610(&DAT_01c8aea8 + iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x40;
        iVar1 = _DAT_01c8aea0;
      } while (iVar4 < _DAT_01c8aea0);
    }
  }
  if ((param_2 != 0) && (iVar4 = 0, 0 < _DAT_01c8eea8)) {
    iVar5 = 0x1c8eeb0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 600);
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x1c8eeb0) = 1;
LAB_004a1f15:
        iVar1 = FUN_00497dc0(iVar2 + 0x1c8eeb0);
      }
      else if (*(int *)(iVar2 + 0x1c8eeb0) != 0) goto LAB_004a1f15;
      iVar2 = iVar2 + 0x260;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x260;
    } while (iVar4 < _DAT_01c8eea8);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar4 + 0x1cfaffc) != 0) &&
         (iVar1 = FUN_0049d980(iVar4 + 0x1cfaff8), param_3 != 0)) {
        *(uint *)(iVar4 + 0x1cfaffc) = 0;
      }
      iVar4 = iVar4 + 0x70;
    } while (iVar4 != 0x8c0);
  }
  else {
    puVar3 = (byte *)0x1cfaff8;
    do {
      iVar1 = FUN_0049d980(puVar3);
      puVar3 = puVar3 + 0x70;
    } while (puVar3 != &DAT_01cfb8b8);
  }
  return iVar1;
}
