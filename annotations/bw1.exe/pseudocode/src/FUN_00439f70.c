// Name: FUN_00439f70
// Address: 00439f70
// Address Range: [[00439f70, 00439ff1]]
// Convention: unknown
// Signature: void FUN_00439f70(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00439f70(int param_1,int param_2,int param_3)

{
  if ((((_DAT_01c4f008 <= param_1) && (param_1 <= _DAT_01c4f010)) && (_DAT_01c4f00c <= param_2)) &&
     (param_2 <= _DAT_01c4f014)) {
    param_2 = param_2 * 4;
    if (0xf < DAT_0061b4a0) {
      if (DAT_0061b4a0 < 0x11) {
        *(ushort *)(param_1 * 2 + *(int *)(&DAT_01c4354c + param_2)) =
             *(ushort *)(param_3 * 2 + 0x1c4e7d4);
        return;
      }
      if (DAT_0061b4a0 != 0x20) {
        return;
      }
      *(uint *)(param_1 * 4 + *(int *)(&DAT_01c4354c + param_2)) =
           *(uint *)(&DAT_01c4e3d4 + param_3 * 4);
      return;
    }
    if (DAT_0061b4a0 == 8) {
      *(char *)(param_1 + *(int *)(&DAT_01c4354c + param_2)) = (char)param_3;
      return;
    }
  }
  return;
}
