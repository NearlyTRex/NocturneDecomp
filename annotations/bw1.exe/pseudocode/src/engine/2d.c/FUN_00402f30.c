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
  
  if ((_DAT_01c4f00c <= param_2) && (param_2 <= _DAT_01c4f014)) {
    if (param_1 < _DAT_01c4f008) {
      param_1 = _DAT_01c4f008;
    }
    if (_DAT_01c4f010 < param_3) {
      param_3 = _DAT_01c4f010;
    }
    param_3 = (param_3 - param_1) + 1;
    if (0 < param_3) {
      param_2 = param_2 * 4;
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 != 8) {
LAB_00403012:
          _DAT_01d1d400 = "..\\engine\\2d.c";
          _DAT_01d1d404 = 0x8a1;
          iVar3 = FUN_005030e0("hLine - invalid bitsPerPixel");
          return iVar3;
        }
        param_3 = FUN_005bfb70(param_1 + *(int *)(&DAT_01c4354c + param_2),_DAT_01c4f020,param_3);
      }
      else if (DAT_0061b4a0 < 0x11) {
        uVar1 = *(ushort *)(_DAT_01c4f020 * 2 + 0x1c4dad0);
        puVar4 = (ushort *)(param_1 * 2 + *(int *)(&DAT_01c4354c + param_2));
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
        if (DAT_0061b4a0 != 0x20) goto LAB_00403012;
        uVar2 = *(uint *)(_DAT_01c4f020 * 4 + 0x1c4dcd0);
        puVar5 = (uint *)(param_1 * 4 + *(int *)(&DAT_01c4354c + param_2));
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
