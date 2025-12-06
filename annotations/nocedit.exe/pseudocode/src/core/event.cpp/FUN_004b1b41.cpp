// Name: core_event.cpp_FUN_004b1b41
// Address: 004b1b41
// Address Range: [[004b1b41, 004b1b52]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004b1b41()

#include "nocturne.h"

void core_event_cpp_FUN_004b1b41
               (uint param_1,ushort *param_2,uint param_3,ushort *param_4)

{
  *(byte *)(param_4 + 1) = *(byte *)(param_2 + 1);
  *param_4 = *param_2;
  return;
}
