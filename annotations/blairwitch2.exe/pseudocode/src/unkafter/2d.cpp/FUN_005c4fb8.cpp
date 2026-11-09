// Name: unkafter_2d.cpp_FUN_005c4fb8
// Address: 005c4fb8
// Address Range: [[005c4fb8, 005c4ff6]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005c4fb8(undefined4 param_1)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005c4fb8(uint param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)unkafter_morph_cpp_FUN_005c4e44(2);
  if (((pcVar1 != (code *)0x1) && (pcVar1 != (code *)0x2)) && (pcVar1 != (code *)0x3)) {
    unkafter_morph_cpp_FUN_005c4df0(2,2);
    (*pcVar1)(2,param_1);
    return 0;
  }
  return 0xffffffff;
}
