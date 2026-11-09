// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004df5b0
// Address: 004df5b0
// Address Range: [[004df5b0, 004df5bb]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004df5b0(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c6cef0)[key_code] = 1;
  return;
}
