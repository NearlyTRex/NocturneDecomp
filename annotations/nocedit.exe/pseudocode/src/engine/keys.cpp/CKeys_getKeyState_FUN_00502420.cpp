// Name: engine_keys.cpp_CKeys_getKeyState_FUN_00502420
// Address: 00502420
// Address Range: [[00502420, 0050242c]]
// Convention: __cdecl
// Signature: int engine_keys.cpp_CKeys_getKeyState_FUN_00502420(CKeys * this_ptr, int key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getKeyState_FUN_00502420(CKeys *this_ptr,int key_code)

{
  return (uint)(byte)g_KeyboardState[key_code];
}
