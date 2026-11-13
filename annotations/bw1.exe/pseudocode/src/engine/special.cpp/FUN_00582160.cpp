// Name: engine_special.cpp_FUN_00582160
// Address: 00582160
// Address Range: [[00582160, 00582195]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582160(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00582160(void)

{
  uint uVar1;
  
  if ((_DAT_01c50948 != 0) && (_DAT_02c833bc != (code *)0x0)) {
    uVar1 = (*_DAT_02c833bc)();
    return uVar1;
  }
  return 0;
}
