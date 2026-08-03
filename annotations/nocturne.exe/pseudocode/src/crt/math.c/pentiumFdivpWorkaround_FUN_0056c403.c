// Name: crt_math.c_pentiumFdivpWorkaround_FUN_0056c403
// Address: 0056c403
// Address Range: [[0056c403, 0056c415]]
// Convention: __fpustack_safe
// Signature: void __fpustack_safe crt_math_c_pentiumFdivpWorkaround_FUN_0056c403(void)

#include "nocturne.h"

void __fpustack_safe pentiumFdivpWorkaround(void)

{
  float10 in_ST2;
  float10 in_ST3;
  
  fdiv(in_ST2,in_ST3);
  return;
}
