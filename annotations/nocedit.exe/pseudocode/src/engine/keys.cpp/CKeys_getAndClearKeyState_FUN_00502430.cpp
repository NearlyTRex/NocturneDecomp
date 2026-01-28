// Name: engine_keys.cpp_CKeys_getAndClearKeyState_FUN_00502430
// Address: 00502430
// Address Range: [[00502430, 00502446]]
// Convention: __cdecl
// Signature: int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys *this_ptr,int key_code)

#include "nocturne.h"

int __cdecl engine_keys_cpp_CKeys_getAndClearKeyState_FUN_00502430(CKeys *this_ptr,int key_code)

{
  byte bVar1;
  
  bVar1 = g_KeyboardState[key_code];
  g_KeyboardState[key_code] = '\0';
  return (uint)bVar1;
}
