// Name: engine_special.cpp_FUN_00582c10
// Address: 00582c10
// Address Range: [[00582c10, 00582c5d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00582c10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_00582c10(void)

{
  int iVar1;
  uint in_stack_0000000c;
  
  _DAT_02c834d4 = 0;
  if ((_DAT_02c83430 != (code *)0x0) && (iVar1 = (*_DAT_02c83430)(), iVar1 != 0)) {
    _DAT_02c834d4 = in_stack_0000000c;
    return 1;
  }
  return 0;
}
