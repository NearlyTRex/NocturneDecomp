// Name: FUN_0054b960
// Address: 0054b960
// Address Range: [[0054b960, 0054ba29]]
// Convention: unknown
// Signature: undefined4 FUN_0054b960(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0054b960(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar4 = 0;
  do {
    if (*(int *)(iVar1 + 0x2641a44) != 0) {
      iVar4 = iVar4 + *(int *)(iVar1 + 0x2641a8c);
    }
    iVar1 = iVar1 + 0x1ac;
  } while (iVar1 != 0x6b00);
LAB_0054b980:
  do {
    if (iVar4 + param_1 <= 0x00400000) {
      return 1;
    }
    iVar3 = 0;
    iVar1 = _DAT_02641920;
    do {
      iVar1 = iVar1 + 1;
      if (0x3f < iVar1) {
        iVar1 = 0;
      }
      iVar2 = iVar1 * 0x1ac;
      if ((((*(int *)(iVar2 + 0x2641a44) != 0) && (0 < *(int *)(iVar2 + 0x2641a88))) &&
          (*(int *)(&DAT_02641a78 + iVar2) == 0)) &&
         (((*(int *)(iVar2 + 0x2641a74) == 0 && (*(int *)(iVar2 + 0x2641a80) == 0)) &&
          (*(int *)(_DAT_02641920 * 0x1ac + 0x2641acc) == 0)))) {
        iVar4 = iVar4 - *(int *)(iVar2 + 0x2641a8c);
        FUN_0054d9b0(iVar2 + 0x2641924);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_0054b980;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}
