// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004c41f0
// Address: 004c41f0
// Address Range: [[004c41f0, 004c41fb]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004c41f0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c02598)[key_code] = 1;
  return;
}
