// Name: FUN_004694f0
// Address: 004694f0
// Address Range: [[004694f0, 00469688]]
// Convention: unknown
// Signature: int FUN_004694f0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004694f0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  
  param_4 = param_4 + *(int *)(param_1 + 8);
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_5 = param_5 + *(int *)(param_1 + 0xc);
  if (param_2 < *(int *)(param_1 + 0x10)) {
    param_2 = *(int *)(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x18) < param_4) {
    param_4 = *(int *)(param_1 + 0x18);
  }
  if (param_2 <= param_4) {
    if (param_3 < *(int *)(param_1 + 0x14)) {
      param_3 = *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x1c) < param_5) {
      param_5 = *(int *)(param_1 + 0x1c);
    }
    if (param_3 <= param_5) {
      if (_DAT_01bdd7c8 == 0) {
        param_1 = param_5 * 4;
        param_3 = param_3 * 4;
        if (DAT_005fba20 < 0x10) {
          if (DAT_005fba20 == 8) {
            do {
              piVar1 = (int *)(&DAT_01c5faec + param_3);
              param_3 = param_3 + 4;
              iVar4 = FUN_005a28f0(*piVar1 + param_2,_DAT_01bdd7bc,(param_4 - param_2) + 1);
            } while (param_3 <= param_1);
            return iVar4;
          }
LAB_0046965e:
          _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d71de4 = 0x525;
          iVar4 = FUN_004e4330("Invalid bitsPerPixel!");
          return iVar4;
        }
        if (DAT_005fba20 < 0x11) {
          do {
            if (param_2 <= param_4) {
              iVar4 = param_2;
              puVar3 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01c5faec + param_3));
              do {
                iVar4 = iVar4 + 1;
                *puVar3 = _DAT_01bdd7bc;
                puVar3 = puVar3 + 1;
              } while (iVar4 <= param_4);
            }
            param_3 = param_3 + 4;
          } while (param_3 <= param_1);
        }
        else {
          if (DAT_005fba20 != 0x20) goto LAB_0046965e;
          do {
            if (param_2 <= param_4) {
              puVar2 = (uint *)(param_2 * 4 + *(int *)(&DAT_01c5faec + param_3));
              iVar4 = param_2;
              do {
                iVar4 = iVar4 + 1;
                *puVar2 = _DAT_01bdd7bc;
                puVar2 = puVar2 + 1;
              } while (iVar4 <= param_4);
            }
            param_3 = param_3 + 4;
          } while (param_3 <= param_1);
        }
      }
      else {
        do {
          iVar4 = param_3 + 1;
          param_1 = FUN_00468090(param_2,param_4,param_3);
          param_3 = iVar4;
        } while (iVar4 <= param_5);
      }
    }
  }
  return param_1;
}
