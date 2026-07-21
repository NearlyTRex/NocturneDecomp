// Name: cockpit_ckptutil.c_putPixel_FUN_00430140
// Address: 00430140
// Address Range: [[00430140, 004301c1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_putPixel_FUN_00430140(int param_1,int param_2,int param_3)

{
  if ((((_DAT_01c00c58 <= param_1) && (param_1 <= _DAT_01c00c60)) && (_DAT_01c00c5c <= param_2)) &&
     (param_2 <= _DAT_01c00c64)) {
    param_2 = param_2 * 4;
    if (0xf < DAT_005b7624) {
      if (DAT_005b7624 < 0x11) {
        *(ushort *)(param_1 * 2 + *(int *)(&DAT_01bd2fa0 + param_2)) =
             *(ushort *)(param_3 * 2 + 0x1c00424);
        return;
      }
      if (DAT_005b7624 != 0x20) {
        return;
      }
      *(uint *)(param_1 * 4 + *(int *)(&DAT_01bd2fa0 + param_2)) =
           *(uint *)(&DAT_01c00024 + param_3 * 4);
      return;
    }
    if (DAT_005b7624 == 8) {
      *(char *)(param_1 + *(int *)(&DAT_01bd2fa0 + param_2)) = (char)param_3;
      return;
    }
  }
  return;
}
