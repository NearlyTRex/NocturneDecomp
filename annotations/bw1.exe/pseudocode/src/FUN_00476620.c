// Name: FUN_00476620
// Address: 00476620
// Address Range: [[00476620, 00476648]]
// Convention: unknown
// Signature: void FUN_00476620(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00476620(uint param_1,uint param_2,uint param_3)

{
  uint *unaff_ESI;
  
  *unaff_ESI = param_1;
  unaff_ESI[1] = param_3;
  unaff_ESI[2] = param_2;
  return;
}
