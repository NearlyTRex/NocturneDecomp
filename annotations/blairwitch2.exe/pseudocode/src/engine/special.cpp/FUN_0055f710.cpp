// Name: engine_special.cpp_FUN_0055f710
// Address: 0055f710
// Address Range: [[0055f710, 0055f745]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_0055f710(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_0055f710(void)

{
  uint uVar1;
  
  if ((_DAT_01c37788 != 0) && (_DAT_0264bbec != (code *)0x0)) {
    uVar1 = (*_DAT_0264bbec)();
    return uVar1;
  }
  return 0;
}
