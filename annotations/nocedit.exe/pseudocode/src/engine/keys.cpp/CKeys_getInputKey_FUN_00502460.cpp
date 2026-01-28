// Name: engine_keys.cpp_CKeys_getInputKey_FUN_00502460
// Address: 00502460
// Address Range: [[00502460, 0050246a]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_00502460(CKeys *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  return uVar1 & 0xff;
}
