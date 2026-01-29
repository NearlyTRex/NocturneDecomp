// Name: core_setutil.cpp_FUN_00585220
// Address: 00585220
// Address Range: [[00585220, 00585239]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_FUN_00585220(void)

#include "nocturne.h"

void __cdecl core_setutil_cpp_FUN_00585220(void)

{
  double dVar1;
  int in_stack_00000004;
  float in_stack_00000008;
  
  dVar1 = round((double)(in_stack_00000008 * (float)65536));
  *(int *)(in_stack_00000004 + 0x2fa4) = (int)ROUND(dVar1);
  return;
}
