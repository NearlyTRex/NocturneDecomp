// Name: FUN_00468b60
// Address: 00468b60
// Address Range: [[00468b60, 00468c7a]]
// Convention: unknown
// Signature: int FUN_00468b60(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00468b60(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x14) <= param_3) && (param_3 <= *(int *)(param_1 + 0x1c))) {
    if (param_2 < *(int *)(param_1 + 0x10)) {
      param_2 = *(int *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x18) < param_4) {
      param_4 = *(int *)(param_1 + 0x18);
    }
    if (param_2 <= param_4) {
      if (_DAT_01bdd7c8 != 0) {
        iVar1 = FUN_00468090(param_2,param_4,param_3);
        return iVar1;
      }
      param_3 = param_3 * 4;
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 == 8) {
          iVar1 = FUN_005a28f0(*(int *)(&DAT_01c5faec + param_3) + param_2,_DAT_01bdd7bc,
                               (param_4 - param_2) + 1);
          return iVar1;
        }
      }
      else {
        if (DAT_005fba20 < 0x11) {
          puVar2 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01c5faec + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar2 = _DAT_01bdd7bc;
            puVar2 = puVar2 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
        if (DAT_005fba20 == 0x20) {
          puVar3 = (uint *)(param_2 * 4 + *(int *)(&DAT_01c5faec + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar3 = _DAT_01bdd7bc;
            puVar3 = puVar3 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
      }
      _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01d71de4 = 0x3a6;
      iVar1 = FUN_004e4330("Invalid bitsPerPixel!");
      return iVar1;
    }
  }
  return param_2;
}
