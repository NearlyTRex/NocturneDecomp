// Name: FUN_100047b0
// Address: 100047b0
// Address Range: [[100047b0, 100047fe]]
// Convention: unknown
// Signature: void FUN_100047b0(void)

#include "nocturne.h"

void FUN_100047b0(void)

{
  if ((DAT_10014204 != 0) && (DAT_10014228 != 0)) {
    (**(code **)(*DAT_100141e0 + 0x74))
              (DAT_100141e0,4,0x1c4,&DAT_1013b8d8,DAT_10014228,&DAT_10238910,DAT_1001422c,0x1c);
    DAT_10014228 = 0;
    DAT_1001422c = 0;
  }
  return;
}
