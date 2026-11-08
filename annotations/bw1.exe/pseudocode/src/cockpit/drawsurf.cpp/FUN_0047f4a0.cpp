// Name: FUN_0047f4a0
// Address: 0047f4a0
// Address Range: [[0047f4a0, 0047f5ba]]
// Convention: unknown
// Signature: int FUN_0047f4a0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047f4a0(int param_1,int param_2,int param_3,int param_4)

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
      if (_DAT_01bc11f0 != 0) {
        iVar1 = FUN_0047e9d0(param_2,param_4,param_3);
        return iVar1;
      }
      param_3 = param_3 * 4;
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 == 8) {
          iVar1 = FUN_005bfb70(*(int *)(&DAT_01c4354c + param_3) + param_2,_DAT_01bc11e4,
                               (param_4 - param_2) + 1);
          return iVar1;
        }
      }
      else {
        if (DAT_0061b4a0 < 0x11) {
          puVar2 = (ushort *)(param_2 * 2 + *(int *)(&DAT_01c4354c + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar2 = _DAT_01bc11e4;
            puVar2 = puVar2 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
        if (DAT_0061b4a0 == 0x20) {
          puVar3 = (uint *)(param_2 * 4 + *(int *)(&DAT_01c4354c + param_3));
          do {
            param_2 = param_2 + 1;
            *puVar3 = _DAT_01bc11e4;
            puVar3 = puVar3 + 1;
          } while (param_2 <= param_4);
          return param_2;
        }
      }
      _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
      _DAT_01d1d404 = 0x3a6;
      iVar1 = FUN_005030e0("Invalid bitsPerPixel!");
      return iVar1;
    }
  }
  return param_2;
}
