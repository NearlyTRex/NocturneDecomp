// Name: support_trisock.cpp_FUN_00579cc0
// Address: 00579cc0
// Address Range: [[00579cc0, 00579ce4]]
// Convention: unknown
// Signature: void support_trisock_cpp_FUN_00579cc0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

void support_trisock_cpp_FUN_00579cc0(uint *param_1,uint param_2)

{
  param_1[0x202] = 0;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[0x203] = param_1 + 2;
  return;
}
