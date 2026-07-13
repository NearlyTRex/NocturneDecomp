// Name: FUN_100091b0
// Address: 100091b0
// Address Range: [[100091b0, 100091df]]
// Convention: unknown
// Signature: byte FUN_100091b0(uint param_1)

#include "nocturne.h"

byte FUN_100091b0(uint param_1)

{
  if (DAT_10241970 <= param_1) {
    return 0;
  }
  return *(byte *)(*(int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3)) + 4 +
                  (param_1 & 0x1f) * 0x24) & 0x40;
}
