// Name: crt_unknown.c_FUN_0056c4d4
// Address: 0056c4d4
// Address Range: [[0056c4d4, 0056c51f]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056c4d4(uint param_1)

#include "nocturne.h"

uint FUN_0056c4d4(uint param_1)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_1 & 0x7f800000) == 0x7f800000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_0056c416();
    return in_EAX;
  }
  FUN_0056c416();
  return in_EAX;
}
