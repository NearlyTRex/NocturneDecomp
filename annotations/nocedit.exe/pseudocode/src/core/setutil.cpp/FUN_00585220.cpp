// Name: core_setutil.cpp_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_FUN_00585220(void)

#include "nocturne.h"

void __cdecl core_setutil_cpp_FUN_00585220(void)

{
  int extraout_EAX;
  double dVar1;
  float in_stack_00000008;
  
  dVar1 = crt_math_c_round_FUN_005fe6b0((double)(in_stack_00000008 * (float)65536));
  *(int *)(extraout_EAX + 0x2fa4) = (int)ROUND(dVar1);
  return;
}
