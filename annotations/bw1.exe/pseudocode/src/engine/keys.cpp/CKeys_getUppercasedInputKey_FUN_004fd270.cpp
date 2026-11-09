// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004fd270
// Address: 004fd270
// Address Range: [[004fd270, 004fd283]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004fd270(CKeys *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
  iVar2 = toupper(uVar1 & 0xff);
  return iVar2;
}
