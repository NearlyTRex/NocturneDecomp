// Name: crt_math.c_acos_FUN_00565ca4
// Address: 00565ca4
// Address Range: [[00565ca4, 00565ce0]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_00565ca4(double x)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00565ccf) */

double __fpustack_safe acos(double x)

{
  double dVar1;
  
  dVar1 = 1.0 - x * x;
  if (dVar1 == 0.0) {
    if (x < dVar1) {
      dVar1 = 3.141592653589793;
    }
    else {
      dVar1 = 0.0;
    }
  }
  else {
    dVar1 = sqrt(dVar1);
  }
  return dVar1;
}
