// Name: FUN_0045c730
// Address: 0045c730
// Address Range: [[0045c730, 0045c84a]]
// Convention: unknown
// Signature: int FUN_0045c730(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045c730(int param_1,int param_2,int param_3,int param_4)

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
      if (_DAT_01b4d71c != 0) {
        iVar1 = FUN_0045bc20(param_2,param_4,param_3);
        return iVar1;
      }
      param_3 = param_3 * 4;
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 == 8) {
          iVar1 = FUN_00563cc0(*(int *)(&DAT_01bd2fa0 + param_3) + param_2,_DAT_01b4d710,
                               (param_4 - param_2) + 1);
          return iVar1;
        }
      }
      else {
        if (DAT_005b7624 < 0x11) {
          puVar2 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01bd2fa0 + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar2 = _DAT_01b4d710;
            puVar2 = puVar2 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
        if (DAT_005b7624 == 0x20) {
          puVar3 = (uint *)(param_2 * 4 + *(int *)(&DAT_01bd2fa0 + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar3 = _DAT_01b4d710;
            puVar3 = puVar3 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
      }
      _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01cc4804 = 0x3a5;
      iVar1 = FUN_004c8440("Invalid bitsPerPixel!");
      return iVar1;
    }
  }
  return param_2;
}
