// Name: engine_keys.cpp_CKeys_getKeyState_FUN_004fd220
// Address: 004fd220
// Address Range: [[004fd220, 004fd22c]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004fd220(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004fd220(CKeys *this_ptr,EInputCodeType key_code)

{
  return (uint)(byte)(&DAT_01c50950)[key_code];
}
