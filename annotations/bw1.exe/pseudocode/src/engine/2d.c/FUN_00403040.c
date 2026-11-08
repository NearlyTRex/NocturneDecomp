// Name: FUN_00403040
// Address: 00403040
// Address Range: [[00403040, 00403164]]
// Convention: unknown
// Signature: undefined8 FUN_00403040(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00403040(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if ((_DAT_01c4f008 <= param_1) && (param_1 <= _DAT_01c4f010)) {
    if (param_2 < _DAT_01c4f00c) {
      param_2 = _DAT_01c4f00c;
    }
    if (_DAT_01c4f014 < param_3) {
      param_3 = _DAT_01c4f014;
    }
    if (param_2 <= param_3) {
      iVar2 = param_3 * 4;
      iVar5 = param_2 * 4;
      if (DAT_0061b4a0 < 0x10) {
        param_3 = iVar5;
        if (DAT_0061b4a0 != 8) {
LAB_0040313e:
          _DAT_01d1d400 = "..\\engine\\2d.c";
          _DAT_01d1d404 = 0x8d3;
          uVar6 = FUN_005030e0("vLine - invalid bitsPerPixel");
          return uVar6;
        }
        for (; param_3 <= iVar2; param_3 = param_3 + 4) {
          param_2 = param_2 + 1;
          *(byte *)(*(int *)(&DAT_01c4354c + param_3) + param_1) = DAT_01c4f020;
        }
      }
      else if (DAT_0061b4a0 < 0x11) {
        uVar3 = *(ushort *)(_DAT_01c4f020 * 2 + 0x1c4dad0);
        if (param_2 <= param_3) {
          param_3 = iVar5;
          do {
            piVar1 = (int *)(&DAT_01c4354c + param_3);
            param_3 = param_3 + 4;
            param_2 = param_2 + 1;
            *(ushort *)(*piVar1 + param_1 * 2) = uVar3;
          } while (param_3 <= iVar2);
        }
      }
      else {
        if (DAT_0061b4a0 != 0x20) goto LAB_0040313e;
        uVar4 = *(uint *)(_DAT_01c4f020 * 4 + 0x1c4dcd0);
        if (param_2 <= param_3) {
          do {
            piVar1 = (int *)(&DAT_01c4354c + iVar5);
            iVar5 = iVar5 + 4;
            param_2 = param_2 + 1;
            *(uint *)(*piVar1 + param_1 * 4) = uVar4;
          } while (iVar5 <= iVar2);
          return CONCAT44(iVar5,param_2);
        }
      }
    }
  }
  return CONCAT44(param_3,param_2);
}
