// Name: crt_unknown.c_FUN_005c7cd4
// Address: 005c7cd4
// Address Range: [[005c7cd4, 005c7d1f]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c7cd4(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_005c7cd4(uint param_1,uint param_2)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_005c7c4f();
    return in_EAX;
  }
  FUN_005c7c4f();
  return in_EAX;
}
