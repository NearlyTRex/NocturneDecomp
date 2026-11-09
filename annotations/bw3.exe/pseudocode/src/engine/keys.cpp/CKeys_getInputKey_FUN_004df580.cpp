// Name: engine_keys.cpp_CKeys_getInputKey_FUN_004df580
// Address: 004df580
// Address Range: [[004df580, 004df58a]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004df580(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004df580(CKeys *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00580790();
  return uVar1 & 0xff;
}
