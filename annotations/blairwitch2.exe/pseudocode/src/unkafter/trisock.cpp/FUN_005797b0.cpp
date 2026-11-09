// Name: unkafter_trisock.cpp_FUN_005797b0
// Address: 005797b0
// Address Range: [[005797b0, 00579812]]
// Convention: unknown
// Signature: void unkafter_trisock_cpp_FUN_005797b0(uchar param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,undefined4 param_5,undefined4 param_6,uint param_7)

#include "nocturne.h"

void unkafter_trisock_cpp_FUN_005797b0(uchar param_1,byte param_2,byte param_3,byte param_4,uint param_5,uint param_6,uint param_7)

{
  uint uStack_4;
  
  support_trisock_cpp_extractIPOctets_FUN_00578dd0
            (&param_1,(uint *)&stack0xfffffff0,(uint *)&stack0xfffffff4,(uint *)&stack0xfffffff8,
             &uStack_4);
  uStack_4 = param_7;
  gethostbyaddr(&stack0x00000000,4,2);
  unkafter_trisock_cpp_FUN_00579550();
  return;
}
