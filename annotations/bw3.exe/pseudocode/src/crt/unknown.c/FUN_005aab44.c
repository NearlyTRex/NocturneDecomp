// Name: crt_unknown.c_FUN_005aab44
// Address: 005aab44
// Address Range: [[005aab44, 005aab8f]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005aab44(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_005aab44(uint param_1,uint param_2)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_005aaabf();
    return in_EAX;
  }
  FUN_005aaabf();
  return in_EAX;
}
