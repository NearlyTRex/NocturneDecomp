// Name: core_gabriela.cpp_FUN_004d2a30
// Address: 004d2a30
// Address Range: [[004d2a30, 004d2a7d]]
// Convention: __cdecl
// Signature: float __cdecl core_gabriela_cpp_FUN_004d2a30(void)

#include "nocturne.h"

float __cdecl core_gabriela_cpp_FUN_004d2a30(void)

{
  float in_stack_0000000c;
  int in_stack_00000010;
  uint local_c;
  
  local_c = in_stack_0000000c * FLOAT_02d7b844;
  if (in_stack_00000010 < 1) {
    local_c = local_c * (float)0.69999999999999996;
  }
  else if (in_stack_00000010 != 1) {
    return in_stack_0000000c;
  }
  return local_c;
}
