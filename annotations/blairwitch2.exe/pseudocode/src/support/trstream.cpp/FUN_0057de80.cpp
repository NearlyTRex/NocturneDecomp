// Name: support_trstream.cpp_FUN_0057de80
// Address: 0057de80
// Address Range: [[0057de80, 0057ded1]]
// Convention: unknown
// Signature: undefined4 * support_trstream_cpp_FUN_0057de80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * support_trstream_cpp_FUN_0057de80(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)support_trstream_cpp_FUN_0057d860(param_1);
  *puVar1 = &g_COutStreamMemoryVTable;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 1;
  support_trstream_cpp_FUN_0057e110(puVar1,param_2,param_3);
  return puVar1;
}
