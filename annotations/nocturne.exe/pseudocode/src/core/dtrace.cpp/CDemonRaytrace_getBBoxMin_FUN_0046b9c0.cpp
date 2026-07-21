// Name: core_dtrace.cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
// Address: 0046b9c0
// Address Range: [[0046b9c0, 0046b9e3]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint * __cdecl core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x10);
  param_2[1] = *(uint *)(param_1 + 0x14);
  param_2[2] = *(uint *)(param_1 + 0x18);
  return param_2;
}
