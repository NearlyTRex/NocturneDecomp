// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004dfe60
// Address: 004dfe60
// Address Range: [[004dfe60, 004dfe76]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004dfe60(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004dfe60(CKeys *this_ptr,EInputCodeType key_code)

{
  byte bVar1;
  
  bVar1 = (&DAT_01c37790)[key_code];
  (&DAT_01c37790)[key_code] = 0;
  return (uint)bVar1;
}
