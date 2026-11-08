// Name: FUN_0042f260
// Address: 0042f260
// Address Range: [[0042f260, 0042f2e1]]
// Convention: unknown
// Signature: void FUN_0042f260(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f260(int param_1,int param_2,int param_3)

{
  if ((((_DAT_01c35e48 <= param_1) && (param_1 <= _DAT_01c35e50)) && (_DAT_01c35e4c <= param_2)) &&
     (param_2 <= _DAT_01c35e54)) {
    param_2 = param_2 * 4;
    if (0xf < DAT_006141c0) {
      if (DAT_006141c0 < 0x11) {
        *(ushort *)(param_1 * 2 + *(int *)(&DAT_01c2a38c + param_2)) =
             *(ushort *)(param_3 * 2 + 0x1c35614);
        return;
      }
      if (DAT_006141c0 != 0x20) {
        return;
      }
      *(uint *)(param_1 * 4 + *(int *)(&DAT_01c2a38c + param_2)) =
           *(uint *)(&DAT_01c35214 + param_3 * 4);
      return;
    }
    if (DAT_006141c0 == 8) {
      *(char *)(param_1 + *(int *)(&DAT_01c2a38c + param_2)) = (char)param_3;
      return;
    }
  }
  return;
}
