// Name: FUN_0056c520
// Address: 0056c520
// Address Range: [[0056c520, 0056c56b]]
// Convention: unknown
// Signature: undefined4 FUN_0056c520(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_0056c520(uint param_1,uint param_2)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    FUN_0056c416();
    return in_EAX;
  }
  FUN_0056c416();
  return in_EAX;
}
