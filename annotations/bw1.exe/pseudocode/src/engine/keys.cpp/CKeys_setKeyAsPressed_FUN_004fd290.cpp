// Name: engine_keys.cpp_CKeys_setKeyAsPressed_FUN_004fd290
// Address: 004fd290
// Address Range: [[004fd290, 004fd29b]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys *this_ptr,EInputCodeType key_code)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_setKeyAsPressed_FUN_004fd290(CKeys *this_ptr,EInputCodeType key_code)

{
  (&DAT_01c50950)[key_code] = 1;
  return;
}
