// Name: crt_unknown.c_FUN_005aad76
// Address: 005aad76
// Address Range: [[005aad76, 005aadb3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aad76(void)

#include "nocturne.h"

uint FUN_005aad76(void)

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
    unkafter_asgaya_cpp_FUN_005aed4b((double)in_ST0);
    uVar1 = 1;
  }
  return uVar1;
}
