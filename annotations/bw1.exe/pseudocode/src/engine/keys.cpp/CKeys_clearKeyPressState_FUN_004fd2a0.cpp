// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004fd2a0
// Address: 004fd2a0
// Address Range: [[004fd2a0, 004fd2ac]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004fd2a0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c50950)[key_code] = 0;
  return;
}
