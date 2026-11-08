// Name: FUN_00437b80
// Address: 00437b80
// Address Range: [[00437b80, 00437c01]]
// Convention: unknown
// Signature: void FUN_00437b80(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00437b80(int param_1,int param_2,int param_3)

{
  if ((((_DAT_01c6b5a8 <= param_1) && (param_1 <= _DAT_01c6b5b0)) && (_DAT_01c6b5ac <= param_2)) &&
     (param_2 <= _DAT_01c6b5b4)) {
    param_2 = param_2 * 4;
    if (0xf < DAT_005fba20) {
      if (DAT_005fba20 < 0x11) {
        *(ushort *)(param_1 * 2 + *(int *)(&DAT_01c5faec + param_2)) =
             *(ushort *)(param_3 * 2 + 0x1c6ad74);
        return;
      }
      if (DAT_005fba20 != 0x20) {
        return;
      }
      *(uint *)(param_1 * 4 + *(int *)(&DAT_01c5faec + param_2)) =
           *(uint *)(&DAT_01c6a974 + param_3 * 4);
      return;
    }
    if (DAT_005fba20 == 8) {
      *(char *)(param_1 + *(int *)(&DAT_01c5faec + param_2)) = (char)param_3;
      return;
    }
  }
  return;
}
