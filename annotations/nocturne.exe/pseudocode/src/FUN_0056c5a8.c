// Name: FUN_0056c5a8
// Address: 0056c5a8
// Address Range: [[0056c5a8, 0056c5e5]]
// Convention: unknown
// Signature: undefined4 FUN_0056c5a8(void)

#include "nocturne.h"

uint FUN_0056c5a8(void)

{
  char in_AL;
  uint uVar1;
  float10 in_ST0;
  float10 in_ST1;
  
  LOCK();
  uVar1 = 0;
  UNLOCK();
  if (in_ST0 < (float10)0) {
    if (in_AL != '\x03') {
      in_ST0 = in_ST1;
    }
    FUN_005707db((double)in_ST0);
    uVar1 = 1;
  }
  return uVar1;
}
