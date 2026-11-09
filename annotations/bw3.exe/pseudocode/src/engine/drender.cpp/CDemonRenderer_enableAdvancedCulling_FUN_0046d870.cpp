// Name: engine_drender.cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870
// Address: 0046d870
// Address Range: [[0046d870, 0046d87b]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(CDemonRenderer *this_ptr,int enabled)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_enableAdvancedCulling_FUN_0046d870(CDemonRenderer *this_ptr,int enabled)

{
  *(int *)(this_ptr + 0x18) = enabled;
  return;
}
