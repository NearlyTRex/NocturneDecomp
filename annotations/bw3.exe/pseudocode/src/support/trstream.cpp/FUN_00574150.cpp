// Name: support_trstream.cpp_FUN_00574150
// Address: 00574150
// Address Range: [[00574150, 0057419a]]
// Convention: unknown
// Signature: undefined4 * support_trstream_cpp_FUN_00574150(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * support_trstream_cpp_FUN_00574150(uint param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)unkafter_turret_cpp_FUN_00572530(param_1);
  *puVar1 = &g_CInStreamMemoryVTable;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  support_trstream_cpp_FUN_00574440(puVar1,param_2,param_3);
  return puVar1;
}
