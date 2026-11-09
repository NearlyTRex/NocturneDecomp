// Name: cockpit_ckptutil.c_putPixel_FUN_00439f70
// Address: 00439f70
// Address Range: [[00439f70, 00439ff1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00439f70(int x,int y,int color)

{
  int iVar1;
  
  if ((((_DAT_01c4f008 <= x) && (x <= _DAT_01c4f010)) && (_DAT_01c4f00c <= y)) &&
     (y <= _DAT_01c4f014)) {
    iVar1 = y * 4;
    if (0xf < DAT_0061b4a0) {
      if (DAT_0061b4a0 < 0x11) {
        *(ushort *)(x * 2 + *(int *)(&DAT_01c4354c + iVar1)) =
             *(ushort *)(color * 2 + 0x1c4e7d4);
        return;
      }
      if (DAT_0061b4a0 != 0x20) {
        return;
      }
      *(uint *)(x * 4 + *(int *)(&DAT_01c4354c + iVar1)) =
           *(uint *)(&DAT_01c4e3d4 + color * 4);
      return;
    }
    if (DAT_0061b4a0 == 8) {
      *(char *)(x + *(int *)(&DAT_01c4354c + iVar1)) = (char)color;
      return;
    }
  }
  return;
}
