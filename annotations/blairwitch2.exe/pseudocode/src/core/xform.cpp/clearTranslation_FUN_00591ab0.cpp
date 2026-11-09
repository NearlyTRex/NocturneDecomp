// Name: core_xform.cpp_clearTranslation_FUN_00591ab0
// Address: 00591ab0
// Address Range: [[00591ab0, 00591ac7]]
// Convention: __cdecl
// Signature: void __cdecl core_xform_cpp_clearTranslation_FUN_00591ab0(int param_1)

#include "nocturne.h"

void __cdecl core_xform_cpp_clearTranslation_FUN_00591ab0(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x1c);
  return;
}
