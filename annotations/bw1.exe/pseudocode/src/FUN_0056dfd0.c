// Name: FUN_0056dfd0
// Address: 0056dfd0
// Address Range: [[0056dfd0, 0056e099]]
// Convention: unknown
// Signature: undefined4 FUN_0056dfd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0056dfd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(iVar1 + 0x2c79114) != 0) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x2c7915c);
    }
    iVar1 = iVar1 + 0x1b0;
  } while (iVar1 != 0x6c00);
LAB_0056dff0:
  do {
    if (iVar4 + param_1 <= 0x00400000) {
      return 1;
    }
    iVar3 = 0;
    iVar1 = _DAT_02c78ff0;
    do {
      iVar1 = iVar1 + 1;
      if (0x3f < iVar1) {
        iVar1 = 0;
      }
      iVar2 = iVar1 * 0x1b0;
      if ((((*(int *)(iVar2 + 0x2c79114) != 0) && (0 < *(int *)(iVar2 + 0x2c79158))) &&
          (*(int *)(&DAT_02c79148 + iVar2) == 0)) &&
         (((*(int *)(iVar2 + 0x2c79144) == 0 && (*(int *)(iVar2 + 0x2c79150) == 0)) &&
          (*(int *)(_DAT_02c78ff0 * 0x1b0 + 0x2c791a0) == 0)))) {
        iVar4 = iVar4 - *(int *)(iVar2 + 0x2c7915c);
        FUN_00570020(iVar2 + 0x2c78ff4);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_0056dff0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}
