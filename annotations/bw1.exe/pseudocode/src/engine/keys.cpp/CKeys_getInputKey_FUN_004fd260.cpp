// Name: engine_keys.cpp_CKeys_getInputKey_FUN_004fd260
// Address: 004fd260
// Address Range: [[004fd260, 004fd26a]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004fd260(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004fd260(CKeys *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
  return uVar1 & 0xff;
}
