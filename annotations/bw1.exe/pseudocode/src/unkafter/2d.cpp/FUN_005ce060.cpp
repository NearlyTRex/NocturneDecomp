// Name: unkafter_2d.cpp_FUN_005ce060
// Address: 005ce060
// Address Range: [[005ce060, 005ce0ad]]
// Convention: unknown
// Signature: uint unkafter_2d_cpp_FUN_005ce060(uint param_1,uint param_2)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005ce060(uint param_1,uint param_2)

{
  ushort in_FPUControlWord;
  uint uStack_c;
  
  uStack_c = 0;
  if ((DAT_0062621c != '\0') && (uStack_c = (uint)in_FPUControlWord, param_2 != 0)) {
    uStack_c = ~param_2 & uStack_c | param_1 & param_2 & 0xffff;
  }
  return uStack_c;
}
