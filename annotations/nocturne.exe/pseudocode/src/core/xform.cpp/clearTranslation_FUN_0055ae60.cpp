// Name: core_xform.cpp_clearTranslation_FUN_0055ae60
// Address: 0055ae60
// Address Range: [[0055ae60, 0055ae77]]
// Convention: unknown
// Signature: void core_xform_cpp_clearTranslation_FUN_0055ae60(int param_1)

#include "nocturne.h"

void core_xform_cpp_clearTranslation_FUN_0055ae60(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x1c);
  return;
}
