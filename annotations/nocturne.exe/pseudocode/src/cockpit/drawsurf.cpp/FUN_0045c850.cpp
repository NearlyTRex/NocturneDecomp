// Name: FUN_0045c850
// Address: 0045c850
// Address Range: [[0045c850, 0045ca44]]
// Convention: unknown
// Signature: int FUN_0045c850(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0045c850(int param_1,int param_2,int param_3,int param_4)

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
      if (_DAT_01b4d71c != 0) {
        if (DAT_005b7624 < 0x10) {
          if (DAT_005b7624 == 8) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *(byte *)(param_2 + *piVar1) =
                   *(byte *)(*(byte *)(param_2 + *piVar1) + 0x1bf5d20);
            } while (iVar3 <= param_4);
            return param_3;
          }
        }
        else {
          if (DAT_005b7624 < 0x11) {
            do {
              piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *(ushort *)(*piVar1 + iVar2) =
                   *(ushort *)(*piVar1 + iVar2) >> (DAT_01b4d720 & 0x1f) & (ushort)_DAT_01b4d730;
            } while (iVar3 <= param_4);
            return param_3;
          }
          if (DAT_005b7624 == 0x20) {
            do {
              puVar4 = (uint *)(*(int *)(&DAT_01bd2fa0 + iVar3) + param_2 * 4);
              iVar3 = iVar3 + 4;
              param_3 = param_3 + 1;
              *puVar4 = *puVar4 >> (DAT_01b4d720 & 0x1f) & _DAT_01b4d730;
            } while (iVar3 <= param_4);
            return param_3;
          }
        }
        _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
        _DAT_01cc4804 = 0x3fb;
        iVar3 = FUN_004c8440("Invalid bitsPerPixel!");
        return iVar3;
      }
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 != 8) {
LAB_0045c933:
          _DAT_01cc4800 = "..\\cockpit\\drawsurf.cpp";
          _DAT_01cc4804 = 0x3db;
          iVar3 = FUN_004c8440("Invalid bitsPerPixel!");
          return iVar3;
        }
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(byte *)(*piVar1 + param_2) = DAT_01b4d710;
        } while (iVar3 <= param_4);
      }
      else if (DAT_005b7624 < 0x11) {
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(ushort *)(*piVar1 + iVar2) = _DAT_01b4d710;
        } while (iVar3 <= param_4);
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_0045c933;
        do {
          piVar1 = (int *)(&DAT_01bd2fa0 + iVar3);
          iVar3 = iVar3 + 4;
          param_3 = param_3 + 1;
          *(uint *)(*piVar1 + param_2 * 4) = _DAT_01b4d710;
        } while (iVar3 <= param_4);
      }
    }
  }
  return param_3;
}
