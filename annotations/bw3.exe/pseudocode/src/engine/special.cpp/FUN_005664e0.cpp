// Name: engine_special.cpp_FUN_005664e0
// Address: 005664e0
// Address Range: [[005664e0, 0056652d]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_005664e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint engine_special_cpp_FUN_005664e0(void)

{
  int iVar1;
  uint in_stack_0000000c;
  
  _DAT_02cf6130 = 0;
  if ((_DAT_02cf608c != (code *)0x0) && (iVar1 = (*_DAT_02cf608c)(), iVar1 != 0)) {
    _DAT_02cf6130 = in_stack_0000000c;
    return 1;
  }
  return 0;
}
