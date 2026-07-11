// Name: FUN_00403bd0
// Address: 00403bd0
// Address Range: [[00403bd0, 00403cd7]]
// Convention: unknown
// Signature: int FUN_00403bd0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00403bd0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  
  if ((_DAT_01c00c5c <= param_2) && (param_2 <= _DAT_01c00c64)) {
    if (param_1 < _DAT_01c00c58) {
      param_1 = _DAT_01c00c58;
    }
    if (_DAT_01c00c60 < param_3) {
      param_3 = _DAT_01c00c60;
    }
    param_3 = (param_3 - param_1) + 1;
    if (0 < param_3) {
      param_2 = param_2 * 4;
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 != 8) {
LAB_00403cb2:
          _DAT_01cc4800 = "..\\engine\\2d.c";
          _DAT_01cc4804 = 0x8a4;
          iVar3 = FUN_004c8440("hLine - invalid bitsPerPixel");
          return iVar3;
        }
        param_3 = FUN_00563cc0(param_1 + *(int *)(&DAT_01bd2fa0 + param_2),_DAT_01c00c70,param_3);
      }
      else if (DAT_005b7624 < 0x11) {
        uVar1 = *(ushort *)(_DAT_01c00c70 * 2 + 0x1bff720);
        puVar4 = (ushort *)(param_1 * 2 + *(int *)(&DAT_01bd2fa0 + param_2));
        if (0 < param_3) {
          do {
            param_3 = param_3 + -1;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
          } while (0 < param_3);
          return param_3;
        }
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_00403cb2;
        uVar2 = *(uint *)(_DAT_01c00c70 * 4 + 0x1bff920);
        puVar5 = (uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + param_2));
        if (0 < param_3) {
          do {
            param_3 = param_3 + -1;
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
          } while (0 < param_3);
          return param_3;
        }
      }
    }
  }
  return param_3;
}
