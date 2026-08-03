// Name: engine_2d.c_drawVLine_FUN_00403ce0
// Address: 00403ce0
// Address Range: [[00403ce0, 00403e04]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawVLine_FUN_00403ce0(int x,int y1,int y2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  if ((_DAT_01c00c58 <= x) && (x <= _DAT_01c00c60)) {
    if (y1 < _DAT_01c00c5c) {
      y1 = _DAT_01c00c5c;
    }
    if (_DAT_01c00c64 < y2) {
      y2 = _DAT_01c00c64;
    }
    if (y1 <= y2) {
      iVar2 = y2 * 4;
      iVar5 = y1 * 4;
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 != 8) {
LAB_00403dde:
          g_CHAR_PTR_01cc4800 = "..\\engine\\2d.c";
          g_INT_01cc4804 = 0x8d6;
          core_main_c_FUN_004c8440("vLine - invalid bitsPerPixel");
          return;
        }
        for (; iVar5 <= iVar2; iVar5 = iVar5 + 4) {
          *(byte *)(*(int *)(&DAT_01bd2fa0 + iVar5) + x) = DAT_01c00c70;
        }
      }
      else if (DAT_005b7624 < 0x11) {
        uVar3 = *(ushort *)(&DAT_01bff720 + _DAT_01c00c70 * 2);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01bd2fa0 + iVar5);
            iVar5 = iVar5 + 4;
            *(ushort *)(*piVar1 + x * 2) = uVar3;
          } while (iVar5 <= iVar2);
        }
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_00403dde;
        uVar4 = *(uint *)(_DAT_01c00c70 * 4 + 0x1bff920);
        if (y1 <= y2) {
          do {
            piVar1 = (int *)(&DAT_01bd2fa0 + iVar5);
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
