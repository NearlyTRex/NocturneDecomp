// Name: engine_2d.c_drawVLine_FUN_00403040
// Address: 00403040
// Address Range: [[00403040, 00403164]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawVLine_FUN_00403040(int x,int y1,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawVLine_FUN_00403040(int x,int y1,int y2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((_DAT_01c4f008 <= x) && (x <= _DAT_01c4f010)) {
    if (y1 < _DAT_01c4f00c) {
      y1 = _DAT_01c4f00c;
    }
    if (_DAT_01c4f014 < y2) {
      y2 = _DAT_01c4f014;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if (DAT_0061b4a0 < 0x10) {
        if (DAT_0061b4a0 != 8) {
LAB_0040313e:
          _DAT_01d1d400 = "..\\engine\\2d.c";
          _DAT_01d1d404 = 0x8d3;
          core_main_c_FUN_005030e0("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)(&DAT_01c4354c + iVar5) + x) = DAT_01c4f020;
        }
      }
      else if (DAT_0061b4a0 < 0x11) {
        uVar3 = *(ushort *)(&DAT_01c4dad0 + _DAT_01c4f020 * 2);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c4354c + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (DAT_0061b4a0 != 0x20) goto LAB_0040313e;
        uVar4 = *(uint *)(_DAT_01c4f020 * 4 + 0x1c4dcd0);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c4354c + iVar5);
            iVar5 = iVar5 + 4;
            *(uint *)(*piVar1 + x * 4) = uVar4;
          } while (iVar5 <= iVar2);
          return;
        }
      }
    }
  }
  return;
}
