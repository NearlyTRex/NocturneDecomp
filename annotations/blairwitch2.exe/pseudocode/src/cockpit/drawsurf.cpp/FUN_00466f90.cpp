// Name: FUN_00466f90
// Address: 00466f90
// Address Range: [[00466f90, 004670aa]]
// Convention: unknown
// Signature: int FUN_00466f90(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00466f90(int param_1,int param_2,int param_3,int param_4)

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
      if (_DAT_01ba5c34 != 0) {
        iVar1 = FUN_004664c0(param_2,param_4,param_3);
        return iVar1;
      }
      param_3 = param_3 * 4;
      if (DAT_006141c0 < 0x10) {
        if (DAT_006141c0 == 8) {
          iVar1 = FUN_005b77c0(*(int *)(&DAT_01c2a38c + param_3) + param_2,_DAT_01ba5c28,
                               (param_4 - param_2) + 1);
          return iVar1;
        }
      }
      else {
        if (DAT_006141c0 < 0x11) {
          puVar2 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01c2a38c + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar2 = _DAT_01ba5c28;
            puVar2 = puVar2 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
        if (DAT_006141c0 == 0x20) {
          puVar3 = (uint *)(param_2 * 4 + *(int *)(&DAT_01c2a38c + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar3 = _DAT_01ba5c28;
            puVar3 = puVar3 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
      }
      _DAT_01d046a0 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01d046a4 = 0x3a5;
      iVar1 = FUN_004e4500("Invalid bitsPerPixel!");
      return iVar1;
    }
  }
  return param_2;
}
