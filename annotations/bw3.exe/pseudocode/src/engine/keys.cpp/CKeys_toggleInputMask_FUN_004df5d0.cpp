// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_004df5d0
// Address: 004df5d0
// Address Range: [[004df5d0, 004df5ee]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys *this_ptr,int enable_extended)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004df5d0(CKeys *this_ptr,int enable_extended)

{
  if (enable_extended != 0) {
    DAT_005fba2c = 0x1ff;
    return;
  }
  DAT_005fba2c = 0x7f;
  return;
}
