// Name: FUN_005716d8
// Address: 005716d8
// Address Range: [[005716d8, 00571716]]
// Convention: unknown
// Signature: undefined4 FUN_005716d8(undefined4 param_1)

#include "nocturne.h"

uint FUN_005716d8(uint param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_00571564(2);
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    FUN_00571510(2,2);
    (*pcVar1)(2,param_1);
    return 0;
  }
  return 0xffffffff;
}
