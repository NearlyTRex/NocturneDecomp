// Name: FUN_00403780
// Address: 00403780
// Address Range: [[00403780, 004038fd]]
// Convention: unknown
// Signature: void FUN_00403780(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403780(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((0 < param_3) && (param_1 <= param_3)) && (-param_3 <= param_1)) &&
     ((param_2 <= param_3 && (-param_3 <= param_2)))) {
    if (DAT_005b7620 < 400) {
      if (DAT_005b7620 != 200) {
LAB_004038d6:
        _DAT_01cc4800 = "..\\engine\\2d.c";
        _DAT_01cc4804 = 0x7dd;
        FUN_004c8440("draw320x200SizeDot: unknown graphics option");
        return;
      }
      FUN_00401da0(param_1,param_2,param_3);
    }
    else if (DAT_005b7620 < 0x191) {
      iVar2 = (int)(((longlong)param_1 * (longlong)_DAT_01c00c48) / (longlong)param_3) +
              _DAT_01c00c50 >> 0x10;
      iVar1 = _DAT_01c00c54 +
              (int)(((longlong)param_2 * (longlong)_DAT_01c00c4c) / (longlong)param_3) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        FUN_00401530(iVar2,iVar1);
        FUN_00401530(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (DAT_005b7620 != 0x1e0) goto LAB_004038d6;
      iVar2 = (int)(((longlong)param_1 * (longlong)_DAT_01c00c48) / (longlong)param_3) +
              _DAT_01c00c50 >> 0x10;
      iVar1 = (int)(((longlong)param_2 * (longlong)_DAT_01c00c4c) / (longlong)param_3) +
              _DAT_01c00c54 >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        FUN_00401530(iVar2,iVar1);
        FUN_00401530(iVar2 + 1,iVar1);
        FUN_00401530(iVar2 + 1,iVar1 + 1);
        FUN_00401530(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}
