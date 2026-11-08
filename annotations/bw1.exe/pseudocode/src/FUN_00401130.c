// Name: FUN_00401130
// Address: 00401130
// Address Range: [[00401130, 0040119a]]
// Convention: unknown
// Signature: void FUN_00401130(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00401130(int param_1,int param_2)

{
  param_2 = param_2 * 4;
  if (DAT_0061b4a0 == 8) {
    *(byte *)(param_1 + *(int *)(&DAT_01c4354c + param_2)) = DAT_01c4f020;
    return;
  }
  if (DAT_0061b4a0 == 0x10) {
    *(ushort *)(param_1 * 2 + *(int *)(&DAT_01c4354c + param_2)) =
         *(ushort *)((_DAT_01c4f020 & 0xff) * 2 + 0x1c4dad0);
    return;
  }
  *(uint *)(param_1 * 4 + *(int *)(&DAT_01c4354c + param_2)) =
       *(uint *)((_DAT_01c4f020 & 0xff) * 4 + 0x1c4dcd0);
  return;
}
