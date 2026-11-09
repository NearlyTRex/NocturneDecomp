// Name: unkafter_2d.cpp_FUN_005c5d60
// Address: 005c5d60
// Address Range: [[005c5d60, 005c5dad]]
// Convention: unknown
// Signature: uint unkafter_2d_cpp_FUN_005c5d60(uint param_1,uint param_2)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005c5d60(uint param_1,uint param_2)

{
  ushort in_FPUControlWord;
  uint uStack_c;
  
  uStack_c = 0;
  if ((DAT_0061ee9c != '\0') && (uStack_c = (uint)in_FPUControlWord, param_2 != 0)) {
    uStack_c = ~param_2 & uStack_c | param_1 & param_2 & 0xffff;
  }
  return uStack_c;
}
