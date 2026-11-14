// Name: engine_mini3d.cpp_clear_FUN_004f23f0
// Address: 004f23f0
// Address Range: [[004f23f0, 004f2404]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clear_FUN_004f23f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_clear_FUN_004f23f0(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (_DAT_01c37788 == 0) {
    engine_special_cpp_clearScreen_FUN_0055b1f0();
    return extraout_EAX;
  }
  if (_DAT_01c37788 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_0264bc18)();
  return iVar1;
}
