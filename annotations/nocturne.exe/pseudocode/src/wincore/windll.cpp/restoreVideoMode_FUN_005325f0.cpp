// Name: wincore_windll.cpp_restoreVideoMode_FUN_005325f0
// Address: 005325f0
// Address Range: [[005325f0, 00532617]]
// Convention: __cdecl
// Signature: undefined4 __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005325f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl wincore_windll_cpp_restoreVideoMode_FUN_005325f0(void)

{
  uint uVar1;
  
  if ((_DAT_01c02594 != 0) && (_DAT_01c02594 = 0, _DAT_02dc9d88 != (code *)0x0)) {
    uVar1 = (*_DAT_02dc9d88)();
    return uVar1;
  }
  return 0;
}
