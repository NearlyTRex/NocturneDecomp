// Name: FUN_0047f5c0
// Address: 0047f5c0
// Address Range: [[0047f5c0, 0047f790]]
// Convention: unknown
// Signature: int FUN_0047f5c0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0047f5c0(int param_1,int param_2,int param_3,int param_4)

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
      if (_DAT_01bc11f0 != 0) {
        if (DAT_0061b4a0 < 0x10) {
          if (DAT_0061b4a0 == 8) {
            return param_3;
          }
        }
        else {
          if (DAT_0061b4a0 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01c4354c + iVar3);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01bc11f4 & 0x1f) & (ushort)_DAT_01bc1204;
            } while (iVar3 <= param_4);
            return param_3;
          }
          if (DAT_0061b4a0 == 0x20) {
            do {
              puVar4 = (uint *)(*(int *)(&DAT_01c4354c + iVar3) + param_2 * 4);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *puVar4 = *puVar4 >> (DAT_01bc11f4 & 0x1f) & _DAT_01bc1204;
            } while (iVar3 <= param_4);
            return param_3;
          }
        }
        _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
        _DAT_01d1d404 = 0x3fc;
        iVar3 = FUN_005030e0("Invalid bitsPerPixel!");
        return iVar3;
      }
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 != 8) {
LAB_0047f6a3:
          _DAT_01d1d400 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01d1d404 = 0x3dc;
          iVar3 = FUN_005030e0("Invalid bitsPerPixel!");
          return iVar3;
        }
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(byte *)(param_2 + *piVar1) = DAT_01bc11e4;
        } while (iVar3 <= param_4);
      }
      else if (DAT_0061b4a0 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01bc11e4;
        } while (iVar3 <= param_4);
      }
      else {
        if (DAT_0061b4a0 != 0x20) goto LAB_0047f6a3;
        do {
          piVar1 = (int *)(&DAT_01c4354c + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(uint *)(*piVar1 + param_2 * 4) = _DAT_01bc11e4;
        } while (iVar3 <= param_4);
      }
    }
  }
  return param_3;
}
