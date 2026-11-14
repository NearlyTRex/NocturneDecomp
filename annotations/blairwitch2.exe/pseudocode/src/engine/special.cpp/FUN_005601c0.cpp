// Name: engine_special.cpp_FUN_005601c0
// Address: 005601c0
// Address Range: [[005601c0, 0056020d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005601c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_005601c0(void)

{
  int iVar1;
  uint in_stack_0000000c;
  
  _DAT_0264bd04 = 0;
  if ((_DAT_0264bc60 != (code *)0x0) && (iVar1 = (*_DAT_0264bc60)(), iVar1 != 0)) {
    _DAT_0264bd04 = in_stack_0000000c;
    return 1;
  }
  return 0;
}
