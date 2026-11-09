// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004dfed0
// Address: 004dfed0
// Address Range: [[004dfed0, 004dfedc]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004dfed0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c37790)[key_code] = 0;
  return;
}
