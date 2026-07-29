// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_004c4190
// Address: 004c4190
// Address Range: [[004c4190, 004c41a6]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004c4190(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_004c4190(CKeys *this_ptr,EInputCodeType key_code)

{
  byte bVar1;
  
  bVar1 = (&DAT_01c02598)[key_code];
  (&DAT_01c02598)[key_code] = 0;
  return (uint)bVar1;
}
