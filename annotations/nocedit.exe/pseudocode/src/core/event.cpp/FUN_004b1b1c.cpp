// Name: core_event.cpp_FUN_004b1b1c
// Address: 004b1b1c
// Address Range: [[004b1b1c, 004b1b30]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b1c()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b1c
               (uint param_1,uint *param_2,uint param_3,uint *param_4)

{
  *(byte *)((int)param_4 + 6) = *(byte *)((int)param_2 + 6);
  *(ushort *)(param_4 + 1) = *(ushort *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}
