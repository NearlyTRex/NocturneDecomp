// Name: engine_keys.cpp_CKeys_getInputKey_FUN_004c41c0
// Address: 004c41c0
// Address Range: [[004c41c0, 004c41ca]]
// Convention: __cdecl
// Signature: undefined1 __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(void)

#include "nocturne.h"

byte __cdecl engine_keys_cpp_CKeys_getInputKey_FUN_004c41c0(void)

{
  byte uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  return uVar1;
}
