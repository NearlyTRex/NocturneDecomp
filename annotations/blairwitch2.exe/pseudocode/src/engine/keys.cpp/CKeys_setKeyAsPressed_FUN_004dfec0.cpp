// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004dfec0
// Address: 004dfec0
// Address Range: [[004dfec0, 004dfecb]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004dfec0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c37790)[key_code] = 1;
  return;
}
