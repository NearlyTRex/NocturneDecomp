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
  
  if ((_DAT_01c6b5ac <= param_2) && (param_2 <= _DAT_01c6b5b4)) {
    if (param_1 < _DAT_01c6b5a8) {
      param_1 = _DAT_01c6b5a8;
    }
    if (_DAT_01c6b5b0 < param_3) {
      param_3 = _DAT_01c6b5b0;
    }
    param_3 = (param_3 - param_1) + 1;
    if (0 < param_3) {
      param_2 = param_2 * 4;
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 != 8) {
LAB_00403012:
          _DAT_01d71de0 = "..\\engine\\2d.c";
          _DAT_01d71de4 = 0x8a1;
          iVar3 = FUN_004e4330("hLine - invalid bitsPerPixel");
          return iVar3;
        }
        param_3 = FUN_005a28f0(param_1 + *(int *)(&DAT_01c5faec + param_2),_DAT_01c6b5c0,param_3);
      }
      else if (DAT_005fba20 < 0x11) {
        uVar1 = *(ushort *)(_DAT_01c6b5c0 * 2 + 0x1c6a070);
        puVar4 = (ushort *)(param_1 * 2 + *(int *)(&DAT_01c5faec + param_2));
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
        if (DAT_005fba20 != 0x20) goto LAB_00403012;
        uVar2 = *(uint *)(_DAT_01c6b5c0 * 4 + 0x1c6a270);
        puVar5 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c5faec + param_2));
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
