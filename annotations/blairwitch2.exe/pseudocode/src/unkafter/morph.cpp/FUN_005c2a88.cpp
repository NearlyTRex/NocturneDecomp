// Name: unkafter_morph.cpp_FUN_005c2a88
// Address: 005c2a88
// Address Range: [[005c2a88, 005c2a93]]
// Convention: unknown
// Signature: BOOL unkafter_morph_cpp_FUN_005c2a88(void)

#include "nocturne.h"

BOOL unkafter_morph_cpp_FUN_005c2a88(void)

{
  BOOL BVar1;
  
  BVar1 = unkafter_morph_cpp_FUN_005c2a34(1);
  if (DAT_0061f2a0 != -1) {
    BVar1 = TlsFree(DAT_0061f2a0);
    DAT_0061f2a0 = -1;
  }
  return BVar1;
}
