// Name: engine_2d.c_drawHLine_FUN_00403bd0
// Address: 00403bd0
// Address Range: [[00403bd0, 00403cd7]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawHLine_FUN_00403bd0(int x1,int y,int x2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawHLine_FUN_00403bd0(int x1,int y,int x2)

{
  ushort uVar1;
  uint uVar2;
  ulong count;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  
  if ((_DAT_01c00c5c <= y) && (y <= _DAT_01c00c64)) {
    if (x1 < _DAT_01c00c58) {
      x1 = _DAT_01c00c58;
    }
    if (_DAT_01c00c60 < x2) {
      x2 = _DAT_01c00c60;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      iVar3 = y * 4;
      if (DAT_005b7624 < 0x10) {
        if (DAT_005b7624 != 8) {
LAB_00403cb2:
          g_CHAR_PTR_01cc4800 = "..\\engine\\2d.c";
          g_INT_01cc4804 = 0x8a4;
          core_main_c_FUN_004c8440("hLine - invalid bitsPerPixel");
          return;
        }
        memset
                  ((void *)(x1 + *(int *)(&DAT_01bd2fa0 + iVar3)),_DAT_01c00c70,count);
      }
      else if (DAT_005b7624 < 0x11) {
        uVar1 = *(ushort *)(&DAT_01bff720 + _DAT_01c00c70 * 2);
        puVar4 = (ushort *)(x1 * 2 + *(int *)(&DAT_01bd2fa0 + iVar3));
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
          } while (0 < (int)count);
          return;
        }
      }
      else {
        if (DAT_005b7624 != 0x20) goto LAB_00403cb2;
        uVar2 = *(uint *)(_DAT_01c00c70 * 4 + 0x1bff920);
        puVar5 = (uint *)(x1 * 4 + *(int *)(&DAT_01bd2fa0 + iVar3));
        if (0 < (int)count) {
          do {
            count = count - 1;
            *puVar5 = uVar2;
            puVar5 = puVar5 + 1;
          } while (0 < (int)count);
          return;
        }
      }
    }
  }
  return;
}
