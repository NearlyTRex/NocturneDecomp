// Name: engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90
// Address: 004dfe90
// Address Range: [[004dfe90, 004dfe9a]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004dfe90(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004dfe90(CKeys *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  return uVar1 & 0xff;
}
