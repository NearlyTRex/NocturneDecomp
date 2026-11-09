// Name: crt_math.c_atan2_FUN_005c1d69
// Address: 005c1d69
// Address Range: [[005c1d69, 005c1d7d]]
// Convention: unknown
// Signature: void crt_math_c_atan2_FUN_005c1d69(void)

#include "nocturne.h"

void atan2(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if ((DAT_006267b8 & 1) == 0) {
    fpatan(in_ST0,in_ST1);
  }
  else {
    FUN_005c7f44();
  }
  return;
}
