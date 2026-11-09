// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_004fd2b0
// Address: 004fd2b0
// Address Range: [[004fd2b0, 004fd2ce]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys *this_ptr,int enable_extended)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004fd2b0(CKeys *this_ptr,int enable_extended)

{
  if (enable_extended != 0) {
    DAT_0061b4ac = 0x1ff;
    return;
  }
  DAT_0061b4ac = 0x7f;
  return;
}
