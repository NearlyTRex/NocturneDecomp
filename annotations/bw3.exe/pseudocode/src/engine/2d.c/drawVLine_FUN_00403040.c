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
  
  if ((_DAT_01c6b5a8 <= x) && (x <= _DAT_01c6b5b0)) {
    if (y1 < _DAT_01c6b5ac) {
      y1 = _DAT_01c6b5ac;
    }
    if (_DAT_01c6b5b4 < y2) {
      y2 = _DAT_01c6b5b4;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if (DAT_005fba20 < 0x10) {
        if (DAT_005fba20 != 8) {
LAB_0040313e:
          _DAT_01d71de0 = "..\\engine\\2d.c";
          _DAT_01d71de4 = 0x8d3;
          core_main_c_FUN_004e4330("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)(&DAT_01c5faec + iVar5) + x) = DAT_01c6b5c0;
        }
      }
      else if (DAT_005fba20 < 0x11) {
        uVar3 = *(ushort *)(&DAT_01c6a070 + _DAT_01c6b5c0 * 2);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c5faec + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (DAT_005fba20 != 0x20) goto LAB_0040313e;
        uVar4 = *(uint *)(_DAT_01c6b5c0 * 4 + 0x1c6a270);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c5faec + iVar5);
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
