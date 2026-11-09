// Name: unkafter_2d.cpp_FUN_005b0048
// Address: 005b0048
// Address Range: [[005b0048, 005b0086]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005b0048(undefined4 param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005b0048(uint param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)unkafter_asgaya_cpp_FUN_005afed4(2);
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    unkafter_asgaya_cpp_FUN_005afe80(2,2);
    (*pcVar1)(2,param_1);
    return 0;
  }
  return 0xffffffff;
}
