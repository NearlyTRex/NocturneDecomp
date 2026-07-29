// Name: engine_keys.cpp_CKeys_clearKeyPressState_FUN_004c4200
// Address: 004c4200
// Address Range: [[004c4200, 004c420c]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_clearKeyPressState_FUN_004c4200(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c02598)[key_code] = 0;
  return;
}
