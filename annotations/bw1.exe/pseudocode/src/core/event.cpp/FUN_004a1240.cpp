// Name: core_event.cpp_FUN_004a1240
// Address: 004a1240
// Address Range: [[004a1240, 004a1259]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_004a1240(char *param_1)

#include "nocturne.h"

void core_event_cpp_FUN_004a1240(char *param_1)

{
  while (((&DAT_00626114)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
