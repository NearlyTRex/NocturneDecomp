// Name: FUN_005234b0
// Address: 005234b0
// Address Range: [[005234b0, 0052354a]]
// Convention: unknown
// Signature: int FUN_005234b0(uint param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005234b0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1 >> 6;
  if (((uVar3 != 0) && (uVar3 < 0xffffff)) && ((param_1 & 0x3f) < 0x40)) {
    iVar1 = (param_1 & 0x3f) * 0x120;
    iVar2 = iVar1 + 0x2dbd374;
    if (uVar3 == *(uint *)(&DAT_02dbd3e4 + iVar1)) {
      if (param_2 != 0) {
        FUN_00528800();
        if ((uVar3 != *(uint *)(&DAT_02dbd3e4 + iVar1)) || (*(int *)(&DAT_02dbd3e8 + iVar1) == 0)) {
          FUN_00528890();
          return 0;
        }
        if (*(int *)(iVar1 + 0x2dbd3e0) != 0) {
          if ((_DAT_02dc8318 != (int *)0x0) &&
             (iVar1 = (**(code **)(*_DAT_02dc8318 + 0x50))(_DAT_02dc8318,iVar2), iVar1 != 0)) {
            return iVar2;
          }
          FUN_00525570(iVar2);
          FUN_00528890();
          return 0;
        }
      }
      return iVar2;
    }
  }
  return 0;
}
