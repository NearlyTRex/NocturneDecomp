// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0
// Address: 004c41d0
// Address Range: [[004c41d0, 004c41e3]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(void)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(void)

{
  byte uVar1;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  toupper(uVar1);
  return;
}
