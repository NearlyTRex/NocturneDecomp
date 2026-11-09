// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004df550
// Address: 004df550
// Address Range: [[004df550, 004df566]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004df550(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004df550(CKeys *this_ptr,EInputCodeType key_code)

{
  byte bVar1;
  
  bVar1 = (&DAT_01c6cef0)[key_code];
  (&DAT_01c6cef0)[key_code] = 0;
  return (uint)bVar1;
}
