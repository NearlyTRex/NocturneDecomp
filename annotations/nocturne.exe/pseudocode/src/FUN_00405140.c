// Name: FUN_00405140
// Address: 00405140
// Address Range: [[00405140, 004051d7]]
// Convention: unknown
// Signature: int FUN_00405140(int param_1)

#include "nocturne.h"

int FUN_00405140(int param_1)

{
  DAT_006b0260 = *(uint *)(param_1 + 4);
  if (((*(byte *)(param_1 + 7) & 0x80) != 0) && ((*(byte *)(param_1 + 7) & 0x40) == 0)) {
    DAT_006b0260 = -(uint)(byte)(&DAT_01bf7720)
                                [((int)(*(int *)(param_1 + 4) >> 0x10 & 0xffU) >> 3) +
                                 ((int)(*(uint *)(param_1 + 4) & 0xff) >> 3) * 0x400 +
                                 ((int)(*(int *)(param_1 + 4) >> 8 & 0xffU) >> 3) * 0x20];
    return param_1 + 8;
  }
  return param_1 + 8;
}
