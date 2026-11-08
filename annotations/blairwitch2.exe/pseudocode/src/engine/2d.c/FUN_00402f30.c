// Name: FUN_00402f30
// Address: 00402f30
// Address Range: [[00402f30, 00403037]]
// Convention: unknown
// Signature: int FUN_00402f30(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00402f30(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  
  if ((_DAT_01c35e4c <= param_2) && (param_2 <= _DAT_01c35e54)) {
    if (param_1 < _DAT_01c35e48) {
      param_1 = _DAT_01c35e48;
    }
    if (_DAT_01c35e50 < param_3) {
      param_3 = _DAT_01c35e50;
    }
    param_3 = (param_3 - param_1) + 1;
    if (0 < param_3) {
      param_2 = param_2 * 4;
      if (DAT_006141c0 < 0x10) {
        if (DAT_006141c0 != 8) {
LAB_00403012:
          _DAT_01d046a0 = "..\\engine\\2d.c";
          _DAT_01d046a4 = 0x887;
          iVar3 = FUN_004e4500("hLine - invalid bitsPerPixel");
          return iVar3;
        }
        param_3 = FUN_005b77c0(param_1 + *(int *)(&DAT_01c2a38c + param_2),_DAT_01c35e60,param_3);
      }
      else if (DAT_006141c0 < 0x11) {
        uVar1 = *(ushort *)(_DAT_01c35e60 * 2 + 0x1c34910);
        puVar4 = (ushort *)(param_1 * 2 + *(int *)(&DAT_01c2a38c + param_2));
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
        if (DAT_006141c0 != 0x20) goto LAB_00403012;
        uVar2 = *(uint *)(_DAT_01c35e60 * 4 + 0x1c34b10);
        puVar5 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c2a38c + param_2));
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
