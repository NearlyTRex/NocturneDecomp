// Name: FUN_00468c80
// Address: 00468c80
// Address Range: [[00468c80, 00468e50]]
// Convention: unknown
// Signature: int FUN_00468c80(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00468c80(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  param_2 = param_2 + *(int *)(param_1 + 8);
  param_3 = param_3 + *(int *)(param_1 + 0xc);
  param_4 = param_4 + *(int *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 0x10) <= param_2) && (param_2 <= *(int *)(param_1 + 0x18))) {
    if (param_3 < *(int *)(param_1 + 0x14)) {
      param_3 = *(int *)(param_1 + 0x14);
    }
    if (*(int *)(param_1 + 0x1c) < param_4) {
      param_4 = *(int *)(param_1 + 0x1c);
    }
    if (param_3 <= param_4) {
      iVar2 = param_2 * 2;
      param_4 = param_4 * 4;
      iVar3 = param_3 * 4;
      if (_DAT_01bdd7c8 != 0) {
        if (DAT_005fba20 < 0x10) {
          if (DAT_005fba20 == 8) {
            return param_3;
          }
        }
        else {
          if (DAT_005fba20 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01c5faec + iVar3);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01bdd7cc & 0x1f) & (ushort)_DAT_01bdd7dc;
            } while (iVar3 <= param_4);
            return param_3;
          }
          if (DAT_005fba20 == 0x20) {
            do {
              puVar4 = (uint *)(*(int *)(&DAT_01c5faec + iVar3) + param_2 * 4);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *puVar4 = *puVar4 >> (DAT_01bdd7cc & 0x1f) & _DAT_01bdd7dc;
            } while (iVar3 <= param_4);
            return param_3;
          }
        }
        _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
        _DAT_01d71de4 = 0x3fc;
        iVar3 = FUN_004e4330("Invalid bitsPerPixel!");
        return iVar3;
      }
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 != 8) {
LAB_00468d63:
          _DAT_01d71de0 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d71de4 = 0x3dc;
          iVar3 = FUN_004e4330("Invalid bitsPerPixel!");
          return iVar3;
        }
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(byte *)(param_2 + *piVar1) = DAT_01bdd7bc;
        } while (iVar3 <= param_4);
      }
      else if (DAT_005fba20 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01bdd7bc;
        } while (iVar3 <= param_4);
      }
      else {
        if (DAT_005fba20 != 0x20) goto LAB_00468d63;
        do {
          piVar1 = (int *)(&DAT_01c5faec + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(uint *)(*piVar1 + param_2 * 4) = _DAT_01bdd7bc;
        } while (iVar3 <= param_4);
      }
    }
  }
  return param_3;
}
