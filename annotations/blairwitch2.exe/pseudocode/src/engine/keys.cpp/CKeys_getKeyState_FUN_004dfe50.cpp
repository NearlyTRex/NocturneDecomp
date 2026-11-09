// Name: engine_keys.cpp_CKeys_getKeyState_FUN_004dfe50
// Address: 004dfe50
// Address Range: [[004dfe50, 004dfe5c]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004dfe50(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004dfe50(CKeys *this_ptr,EInputCodeType key_code)

{
  return (uint)(byte)(&DAT_01c37790)[key_code];
}
