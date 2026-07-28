// Name: engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
// Address: 004c41c0
// Address Range: [[004c41c0, 004c41ca]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(CKeys *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  return uVar1 & 0xff;
}
