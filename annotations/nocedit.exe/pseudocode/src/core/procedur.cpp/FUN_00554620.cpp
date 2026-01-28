// Name: core_procedur.cpp_FUN_00554620
// Address: 00554620
// Address Range: [[00554620, 00554660]]
// Convention: unknown
// Signature: float core_procedur_cpp_FUN_00554620(void)

#include "nocturne.h"

float core_procedur_cpp_FUN_00554620(void)

{
  float in_stack_00000008;
  float in_stack_0000000c;
  
  in_stack_00000008 =
       in_stack_0000000c * (float)128 * (float)0.0625 + in_stack_00000008;
  if (in_stack_00000008 <= (float)128) {
    return in_stack_00000008;
  }
  return in_stack_00000008 + -128.0f;
}
