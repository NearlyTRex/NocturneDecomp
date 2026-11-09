// Name: engine_keys.cpp_CKeys_getKeyState_FUN_004df540
// Address: 004df540
// Address Range: [[004df540, 004df54c]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004df540(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_004df540(CKeys *this_ptr,EInputCodeType key_code)

{
  return (uint)(byte)(&DAT_01c6cef0)[key_code];
}
