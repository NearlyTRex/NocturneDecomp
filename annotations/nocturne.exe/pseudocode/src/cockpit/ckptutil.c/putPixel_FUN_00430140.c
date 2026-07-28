// Name: cockpit_ckptutil.c_putPixel_FUN_00430140
// Address: 00430140
// Address Range: [[00430140, 004301c1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int x,int y,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int x,int y,int color)

{
  int iVar1;
  
  if ((((_DAT_01c00c58 <= x) && (x <= _DAT_01c00c60)) && (_DAT_01c00c5c <= y)) &&
     (y <= _DAT_01c00c64)) {
    iVar1 = y * 4;
    if (0xf < DAT_005b7624) {
      if (DAT_005b7624 < 0x11) {
        *(ushort *)(x * 2 + *(int *)(&DAT_01bd2fa0 + iVar1)) =
             *(ushort *)(color * 2 + 0x1c00424);
        return;
      }
      if (DAT_005b7624 != 0x20) {
        return;
      }
      *(uint *)(x * 4 + *(int *)(&DAT_01bd2fa0 + iVar1)) =
           *(uint *)(&DAT_01c00024 + color * 4);
      return;
    }
    if (DAT_005b7624 == 8) {
      *(char *)(x + *(int *)(&DAT_01bd2fa0 + iVar1)) = (char)color;
      return;
    }
  }
  return;
}
