// Name: engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470
// Address: 00502470
// Address Range: [[00502470, 00502483]]
// Convention: __cdecl
// Signature: int engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys * this_ptr)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(CKeys *this_ptr)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
  iVar2 = crt_ctype_c_toupper_FUN_005ff9e0(uVar1 & 0xff);
  return iVar2;
}
