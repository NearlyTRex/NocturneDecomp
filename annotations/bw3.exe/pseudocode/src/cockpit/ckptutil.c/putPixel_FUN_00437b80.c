// Name: cockpit_ckptutil.c_putPixel_FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437c01]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00437b80(int x,int y,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00437b80(int x,int y,int color)

{
  int iVar1;
  
  if ((((_DAT_01c6b5a8 <= x) && (x <= _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= y)) &&
     (y <= _DAT_01c6b5b4)) {
    iVar1 = y * 4;
    if (0xf < DAT_005fba20) {
      if (DAT_005fba20 < 0x11) {
        *(ushort *)(x * 2 + *(int *)(&DAT_01c5faec + iVar1)) =
             *(ushort *)(color * 2 + 0x1c6ad74);
        return;
      }
      if (DAT_005fba20 != 0x20) {
        return;
      }
      *(uint *)(x * 4 + *(int *)(&DAT_01c5faec + iVar1)) =
           *(uint *)(&DAT_01c6a974 + color * 4);
      return;
    }
    if (DAT_005fba20 == 8) {
      *(char *)(x + *(int *)(&DAT_01c5faec + iVar1)) = (char)color;
      return;
    }
  }
  return;
}
