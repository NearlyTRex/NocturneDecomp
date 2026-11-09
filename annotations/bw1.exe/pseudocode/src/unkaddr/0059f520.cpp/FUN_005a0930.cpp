// Name: unkaddr_0059f520.cpp_FUN_005a0930
// Address: 005a0930
// Address Range: [[005a0930, 005a099d]]
// Convention: unknown
// Signature: undefined4 * unkaddr_0059f520_cpp_FUN_005a0930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * unkaddr_0059f520_cpp_FUN_005a0930(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)unkaddr_0059f520_cpp_FUN_0059f540(param_1);
  *puVar1 = &g_CInStreamFileVTable;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  support_trstream_cpp_FUN_005a0f60(puVar1,param_2,param_3);
  return puVar1;
}
