// Name: core_setutil.cpp_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_FUN_00585220(void)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_setutil_cpp_FUN_00585220(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  
  *(int *)(in_stack_00000004 + 0x2fa4) =
       (int)ROUND(ROUND(in_stack_00000008 * (float)65536));
  return;
}
