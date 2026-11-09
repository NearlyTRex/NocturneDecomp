// Name: crt_unknown.c_FUN_005c7f06
// Address: 005c7f06
// Address Range: [[005c7f06, 005c7f43]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c7f06(void)

#include "nocturne.h"

uint FUN_005c7f06(void)

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
    unkafter_zombie_cpp_FUN_005cbedb((double)in_ST0);
    uVar1 = 1;
  }
  return uVar1;
}
