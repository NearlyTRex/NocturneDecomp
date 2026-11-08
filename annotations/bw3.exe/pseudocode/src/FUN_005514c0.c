// Name: FUN_005514c0
// Address: 005514c0
// Address Range: [[005514c0, 00551589]]
// Convention: unknown
// Signature: undefined4 FUN_005514c0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005514c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(iVar1 + 0x2cebd44) != 0) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x2cebd8c);
    }
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x6c00);
LAB_005514e0:
  do {
    if (iVar4 + param_1 <= 0x00400000) {
      return 1;
    }
    iVar3 = 0;
    iVar1 = _DAT_02cebc20;
    do {
      iVar1 = iVar1 + 1;
      if (0x3f < iVar1) {
        iVar1 = 0;
      }
      iVar2 = iVar1 * 0x1b0;
      if ((((*(int *)(iVar2 + 0x2cebd44) != 0) && (0 < *(int *)(iVar2 + 0x2cebd88))) &&
          (*(int *)(&DAT_02cebd78 + iVar2) == 0)) &&
         (((*(int *)(iVar2 + 0x2cebd74) == 0 && (*(int *)(iVar2 + 0x2cebd80) == 0)) &&
          (*(int *)(_DAT_02cebc20 * 0x1b0 + 0x2cebdd0) == 0)))) {
        iVar4 = iVar4 - *(int *)(iVar2 + 0x2cebd8c);
        FUN_00553520(iVar2 + 0x2cebc24);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_005514e0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}
