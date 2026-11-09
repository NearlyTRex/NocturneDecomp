// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004fd230
// Address: 004fd230
// Address Range: [[004fd230, 004fd246]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004fd230(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004fd230(CKeys *this_ptr,EInputCodeType key_code)

{
  byte bVar1;
  
  bVar1 = (&DAT_01c50950)[key_code];
  (&DAT_01c50950)[key_code] = 0;
  return (uint)bVar1;
}
