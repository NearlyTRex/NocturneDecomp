// Name: crt_math.c_atan2_FUN_005a5cc1
// Address: 005a5cc1
// Address Range: [[005a5cc1, 005a5cd5]]
// Convention: unknown
// Signature: void crt_math_c_atan2_FUN_005a5cc1(void)

#include "nocturne.h"

void atan2(void)

{
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  
  if ((DAT_00607b5c & 1) == 0) {
    fpatan(in_ST0,in_ST1);
  }
  else {
    FUN_005accb8();
  }
  return;
}
