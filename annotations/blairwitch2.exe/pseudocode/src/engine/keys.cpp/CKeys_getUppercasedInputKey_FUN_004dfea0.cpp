// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0
// Address: 004dfea0
// Address Range: [[004dfea0, 004dfeb3]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004dfea0(CKeys *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
  iVar2 = toupper(uVar1 & 0xff);
  return iVar2;
}
