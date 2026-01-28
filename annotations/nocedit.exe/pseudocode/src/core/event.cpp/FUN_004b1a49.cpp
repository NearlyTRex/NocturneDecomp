// Name: core_event.cpp_FUN_004b1a49
// Address: 004b1a49
// Address Range: [[004b1a49, 004b1a55]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004b1a49 (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

void core_event_cpp_FUN_004b1a49
               (uint param_1,uint param_2,uint param_3,uint *param_4)

{
  *(short *)(param_4 + 1) = (short)param_2;
  *param_4 = param_2;
  return;
}
