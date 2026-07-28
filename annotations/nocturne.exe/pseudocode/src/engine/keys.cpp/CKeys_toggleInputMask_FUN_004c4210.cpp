// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_004c4210
// Address: 004c4210
// Address Range: [[004c4210, 004c422e]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(CKeys *this_ptr,int enable_extended)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_004c4210(CKeys *this_ptr,int enable_extended)

{
  if (enable_extended != 0) {
    DAT_005b7630 = 0x1ff;
    return;
  }
  DAT_005b7630 = 0x7f;
  return;
}
