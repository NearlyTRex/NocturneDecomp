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
  
  if ((_DAT_01c35e48 <= x) && (x <= _DAT_01c35e50)) {
    if (y1 < _DAT_01c35e4c) {
      y1 = _DAT_01c35e4c;
    }
    if (_DAT_01c35e54 < y2) {
      y2 = _DAT_01c35e54;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if (DAT_006141c0 < 0x10) {
        if (DAT_006141c0 != 8) {
LAB_0040313e:
          _DAT_01d046a0 = "..\\engine\\2d.c";
          _DAT_01d046a4 = 0x8b9;
          core_main_c_FUN_004e4500("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)(&DAT_01c2a38c + iVar5) + x) = DAT_01c35e60;
        }
      }
      else if (DAT_006141c0 < 0x11) {
        uVar3 = *(ushort *)(&DAT_01c34910 + _DAT_01c35e60 * 2);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c2a38c + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (DAT_006141c0 != 0x20) goto LAB_0040313e;
        uVar4 = *(uint *)(_DAT_01c35e60 * 4 + 0x1c34b10);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01c2a38c + iVar5);
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
