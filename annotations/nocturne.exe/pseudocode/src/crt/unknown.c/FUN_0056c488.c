// Name: crt_unknown.c_FUN_0056c488
// Address: 0056c488
// Address Range: [[0056c488, 0056c4d3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_0056c488(undefined4 param_1,uint param_2)

#include "nocturne.h"

uint FUN_0056c488(uint param_1,uint param_2)

{
  uint in_EAX;
  ushort in_FPUStatusWord;
  unkbyte10 in_ST1;
  ushort uStack_8;
  ushort uStack_6;
  
  if ((param_2 & 0x7ff00000) == 0x7ff00000) {
    return in_EAX;
  }
  if ((in_FPUStatusWord & 0x3800) != 0) {
    pentiumFdivpWorkaround();
    return 0x56c4ab;
  }
  uStack_8 = (ushort)((unkuint10)in_ST1 >> 0x40);
  pentiumFdivpWorkaround();
  return CONCAT22(uStack_6,uStack_8);
}
