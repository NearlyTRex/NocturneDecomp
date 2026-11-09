// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_004dfee0
// Address: 004dfee0
// Address Range: [[004dfee0, 004dfefe]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(CKeys *this_ptr,int enable_extended)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004dfee0(CKeys *this_ptr,int enable_extended)

{
  if (enable_extended != 0) {
    DAT_006141cc = 0x1ff;
    return;
  }
  DAT_006141cc = 0x7f;
  return;
}
