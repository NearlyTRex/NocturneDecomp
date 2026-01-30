// Name: core_procedur.cpp_FUN_00554620
// Address: 00554620
// Address Range: [[00554620, 00554660]]
// Convention: __cdecl
// Signature: float __cdecl core_procedur_cpp_FUN_00554620(void)

#include "nocturne.h"

float __cdecl core_procedur_cpp_FUN_00554620(void)

{
  float fVar1;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  fVar1 = in_stack_0000000c * (float)128 * (float)0.0625 + in_stack_00000008;
  if (fVar1 <= (float)128) {
    return fVar1;
  }
  return fVar1 + -128.0f;
}
