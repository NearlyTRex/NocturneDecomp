// Name: crt_unknown.c_FUN_00574540
// Address: 00574540
// Address Range: [[00574540, 0057456c]]
// Convention: unknown
// Signature: short * crt_unknown_c_FUN_00574540(short *param_1,short param_2)

#include "nocturne.h"

short * FUN_00574540(short *param_1,short param_2)

{
  short sVar1;
  
  sVar1 = *param_1;
  while( true ) {
    if (param_2 == sVar1) {
      return param_1;
    }
    sVar1 = *param_1;
    param_1 = param_1 + 1;
    if (sVar1 == 0) break;
    sVar1 = *param_1;
  }
  return (short *)0x0;
}
