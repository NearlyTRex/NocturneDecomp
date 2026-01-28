// Name: engine_keys.cpp_CKeys_toggleInputMask_FUN_005024b0
// Address: 005024b0
// Address Range: [[005024b0, 005024ce]]
// Convention: __cdecl
// Signature: void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys *this_ptr,int enable_extended)

#include "nocturne.h"

void __cdecl engine_keys_cpp_CKeys_toggleInputMask_FUN_005024b0(CKeys *this_ptr,int enable_extended)

{
  if (enable_extended != 0) {
    g_InputKeyMask = 0x1ff;
    return;
  }
  g_InputKeyMask = 0x7f;
  return;
}
