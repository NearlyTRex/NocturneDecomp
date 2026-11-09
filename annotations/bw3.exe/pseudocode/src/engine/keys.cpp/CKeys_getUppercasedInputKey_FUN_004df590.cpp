// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004df590
// Address: 004df590
// Address Range: [[004df590, 004df5a3]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys *this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_004df590(CKeys *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_00580790();
  iVar2 = toupper(uVar1 & 0xff);
  return iVar2;
}
