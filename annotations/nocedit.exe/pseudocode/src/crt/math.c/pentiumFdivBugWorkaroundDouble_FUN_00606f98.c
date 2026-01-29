// Name: crt_math.c_pentiumFdivBugWorkaroundDouble_FUN_00606f98
// Address: 00606f98
// Address Range: [[00606f98, 00606fe3]]
// Convention: __fpustack
// Signature: float10 __fpustack crt_math_c_pentiumFdivBugWorkaroundDouble_FUN_00606f98(float10 param0,double param1)

#include "nocturne.h"

float10 __fpustack
pentiumFdivBugWorkaroundDouble(float10 param0,double param1)

{
  ushort in_FPUStatusWord;
  float10 fVar1;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  
  if ((param1._4_4_ & 0x7ff00000) == 0x7ff00000) {
    return param0 / (float10)param1;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    fVar1 = pentiumFdivpWorkaround(in_ST1,in_ST2);
    return fVar1;
  }
  fVar1 = pentiumFdivpWorkaround(in_ST2,in_ST3);
  return fVar1;
}
