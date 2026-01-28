// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_00502490
// Address: 00502490
// Address Range: [[00502490, 0050249b]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys *this_ptr,int key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_00502490(CKeys *this_ptr,int key_code)

{
  g_KeyboardState[key_code] = '\x01';
  return;
}
