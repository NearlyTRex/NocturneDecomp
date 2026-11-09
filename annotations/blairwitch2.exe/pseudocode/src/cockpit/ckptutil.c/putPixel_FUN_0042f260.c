// Name: cockpit_ckptutil.c_putPixel_FUN_0042f260
// Address: 0042f260
// Address Range: [[0042f260, 0042f2e1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_0042f260(int x,int y,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_putPixel_FUN_0042f260(int x,int y,int color)

{
  int iVar1;
  
  if ((((_DAT_01c35e48 <= x) && (x <= _DAT_01c35e50)) && (_DAT_01c35e4c <= y)) &&
     (y <= _DAT_01c35e54)) {
    iVar1 = y * 4;
    if (0xf < DAT_006141c0) {
      if (DAT_006141c0 < 0x11) {
        *(ushort *)(x * 2 + *(int *)(&DAT_01c2a38c + iVar1)) =
             *(ushort *)(color * 2 + 0x1c35614);
        return;
      }
      if (DAT_006141c0 != 0x20) {
        return;
      }
      *(uint *)(x * 4 + *(int *)(&DAT_01c2a38c + iVar1)) =
           *(uint *)(&DAT_01c35214 + color * 4);
      return;
    }
    if (DAT_006141c0 == 8) {
      *(char *)(x + *(int *)(&DAT_01c2a38c + iVar1)) = (char)color;
      return;
    }
  }
  return;
}
