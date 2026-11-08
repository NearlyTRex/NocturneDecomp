// Name: FUN_0049cb50
// Address: 0049cb50
// Address Range: [[0049cb50, 0049ccca]]
// Convention: unknown
// Signature: int FUN_0049cb50(undefined4 param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0049cb50(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_00493d50(&DAT_01c558e8);
  if (param_2 == 0) {
    iVar4 = 0;
    if (0 < _DAT_01c558e0) {
      iVar2 = 0;
      do {
        if (((*(int *)(iVar2 + 0x1c558f4) != 0) && (*(int *)(iVar2 + 0x1c558f8) == 0)) &&
           (iVar1 = FUN_00493dd0(&DAT_01c558e8 + iVar2), param_3 != 0)) {
          *(uint *)(iVar2 + 0x1c558f4) = 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
      } while (iVar4 < _DAT_01c558e0);
    }
  }
  else {
    iVar4 = 0;
    if (0 < _DAT_01c558e0) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + 0x1c558f8) == 0) {
          FUN_00493dd0(&DAT_01c558e8 + iVar2);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0x3c;
        iVar1 = _DAT_01c558e0;
      } while (iVar4 < _DAT_01c558e0);
    }
  }
  if ((param_2 != 0) && (iVar4 = 0, 0 < _DAT_01c594e8)) {
    iVar5 = 0x1c594f0;
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar5 + 600);
      if (iVar1 == 0) {
        *(uint *)(iVar2 + 0x1c594f0) = 1;
LAB_0049cbd5:
        iVar1 = FUN_004944c0(iVar2 + 0x1c594f0);
      }
      else if (*(int *)(iVar2 + 0x1c594f0) != 0) goto LAB_0049cbd5;
      iVar2 = iVar2 + 0x260;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x260;
    } while (iVar4 < _DAT_01c594e8);
  }
  if (param_2 == 0) {
    iVar4 = 0;
    do {
      if ((*(int *)(iVar4 + 0x1c9c4d8) != 0) &&
         (iVar1 = FUN_00499a00(iVar4 + 0x1c9c4d4), param_3 != 0)) {
        *(uint *)(iVar4 + 0x1c9c4d8) = 0;
      }
      iVar4 = iVar4 + 0x70;
    } while (iVar4 != 0x8c0);
  }
  else {
    puVar3 = (byte *)0x1c9c4d4;
    do {
      iVar1 = FUN_00499a00(puVar3);
      puVar3 = puVar3 + 0x70;
    } while (puVar3 != &DAT_01c9cd94);
  }
  return iVar1;
}
