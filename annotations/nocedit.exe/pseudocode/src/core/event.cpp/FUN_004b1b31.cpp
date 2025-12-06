// Name: core_event.cpp_FUN_004b1b31
// Address: 004b1b31
// Address Range: [[004b1b31, 004b1b40]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b31()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b31
               (uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  *(byte *)(param_4 + 1) = *(byte *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}
