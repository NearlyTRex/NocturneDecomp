// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004c41d0
// Address: 004c41d0
// Address Range: [[004c41d0, 004c41e3]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004c41d0(CKeys *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
  iVar2 = toupper(uVar1 & 0xff);
  return iVar2;
}
