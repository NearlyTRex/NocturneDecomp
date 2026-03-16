// Name: crt_math.c_acos_FUN_00600162
// Address: 00600162
// Address Range: [[00600162, 0060019e]]
// Convention: __fpustack_safe
// Signature: double __fpustack_safe crt_math_c_acos_FUN_00600162(double x)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Removing unreachable block (ram,0x0060018d) */

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
