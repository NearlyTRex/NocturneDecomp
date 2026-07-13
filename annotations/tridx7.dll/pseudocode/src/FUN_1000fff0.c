// Name: FUN_1000fff0
// Address: 1000fff0
// Address Range: [[1000fff0, 10010021]]
// Convention: unknown
// Signature: void FUN_1000fff0(void)

#include "nocturne.h"

void FUN_1000fff0(void)

{
  if (DAT_100185dc == 0) {
    __lock(0xb);
    if (DAT_100185dc == 0) {
      FUN_10010050();
      DAT_100185dc = DAT_100185dc + 1;
    }
    FUN_10005a10(0xb);
  }
  return;
}
