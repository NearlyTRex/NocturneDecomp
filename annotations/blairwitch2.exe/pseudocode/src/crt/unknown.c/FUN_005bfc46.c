// Name: crt_unknown.c_FUN_005bfc46
// Address: 005bfc46
// Address Range: [[005bfc46, 005bfc83]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bfc46(void)

#include "nocturne.h"

uint FUN_005bfc46(void)

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
    unkafter_morph_cpp_FUN_005c3bdb((double)in_ST0);
    uVar1 = 1;
  }
  return uVar1;
}
