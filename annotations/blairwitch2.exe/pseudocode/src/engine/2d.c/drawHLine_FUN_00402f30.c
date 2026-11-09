// Name: engine_2d.c_drawHLine_FUN_00402f30
// Address: 00402f30
// Address Range: [[00402f30, 00403037]]
// Convention: __cdecl
// Signature: void __cdecl engine_2d_c_drawHLine_FUN_00402f30(int x1,int y,int x2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_2d_c_drawHLine_FUN_00402f30(int x1,int y,int x2)

{
  ushort uVar1;
  uint uVar2;
  ulong count;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  
  if ((_DAT_01c35e4c <= y) && (y <= _DAT_01c35e54)) {
    if (x1 < _DAT_01c35e48) {
      x1 = _DAT_01c35e48;
    }
    if (_DAT_01c35e50 < x2) {
      x2 = _DAT_01c35e50;
    }
    count = (x2 - x1) + 1;
    if (0 < (int)count) {
      iVar3 = y * 4;
      if (DAT_006141c0 < 0x10) {
        if (DAT_006141c0 != 8) {
LAB_00403012:
          _DAT_01d046a0 = "..\\engine\\2d.c";
          _DAT_01d046a4 = 0x887;
          core_main_c_FUN_004e4500("hLine - invalid bitsPerPixel");
          return;
        }
        memset
                  ((void *)(x1 + *(int *)(&DAT_01c2a38c + iVar3)),_DAT_01c35e60,count);
      }
      else if (DAT_006141c0 < 0x11) {
        uVar1 = *(ushort *)(&DAT_01c34910 + _DAT_01c35e60 * 2);
        puVar4 = (ushort *)(x1 * 2 + *(int *)(&DAT_01c2a38c + iVar3));
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
        if (DAT_006141c0 != 0x20) goto LAB_00403012;
        uVar2 = *(uint *)(_DAT_01c35e60 * 4 + 0x1c34b10);
        puVar5 = (uint *)(x1 * 4 + *(int *)(&DAT_01c2a38c + iVar3));
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
