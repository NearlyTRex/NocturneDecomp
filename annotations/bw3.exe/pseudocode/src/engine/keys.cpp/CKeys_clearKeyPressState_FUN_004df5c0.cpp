// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004df5c0
// Address: 004df5c0
// Address Range: [[004df5c0, 004df5cc]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004df5c0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c6cef0)[key_code] = 0;
  return;
}
