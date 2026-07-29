// Name: engine_keys.cpp_CKeys_getKeyState_FUN_004c4180
// Address: 004c4180
// Address Range: [[004c4180, 004c418c]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004c4180(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004c4180(CKeys *this_ptr,EInputCodeType key_code)

{
  return (uint)(byte)(&DAT_01c02598)[key_code];
}
