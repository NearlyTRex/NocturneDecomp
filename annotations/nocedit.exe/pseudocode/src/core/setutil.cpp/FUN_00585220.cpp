// Name: core_setutil.cpp_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void core_setutil.cpp_FUN_00585220(void)

#include "nocturne.h"

void __cdecl core_setutil_cpp_FUN_00585220(void)

{
  uint in_EDX;
  float10 fVar1;
  double dVar2;
  uint in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = (float10)in_stack_00000008 * (float10)65536;
  dVar2 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,in_stack_00000004));
  *(int *)(SUB84 /* extract 2-byte value */(dVar2,0) + 0x2fa4) = (int)ROUND(fVar1);
  return;
}
