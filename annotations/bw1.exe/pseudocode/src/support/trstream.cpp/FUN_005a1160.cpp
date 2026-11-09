// Name: support_trstream.cpp_FUN_005a1160
// Address: 005a1160
// Address Range: [[005a1160, 005a11aa]]
// Convention: unknown
// Signature: undefined4 * support_trstream_cpp_FUN_005a1160(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * support_trstream_cpp_FUN_005a1160(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)unkaddr_0059f520_cpp_FUN_0059f540(param_1);
  *puVar1 = &g_CInStreamMemoryVTable;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  support_trstream_cpp_FUN_005a1450(puVar1,param_2,param_3);
  return puVar1;
}
