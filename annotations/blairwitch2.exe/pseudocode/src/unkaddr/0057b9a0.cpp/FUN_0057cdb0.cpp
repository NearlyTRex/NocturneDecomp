// Name: unkaddr_0057b9a0.cpp_FUN_0057cdb0
// Address: 0057cdb0
// Address Range: [[0057cdb0, 0057ce16]]
// Convention: unknown
// Signature: undefined4 * unkaddr_0057b9a0_cpp_FUN_0057cdb0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint * unkaddr_0057b9a0_cpp_FUN_0057cdb0(uint param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)unkaddr_0057b9a0_cpp_FUN_0057b9c0(param_1);
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
  support_trstream_cpp_FUN_0057d320(puVar1,param_2);
  return puVar1;
}
