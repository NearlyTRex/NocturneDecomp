// Name: core_event.cpp_FUN_0048b820
// Address: 0048b820
// Address Range: [[0048b820, 0048b839]]
// Convention: unknown
// Signature: void core_event_cpp_FUN_0048b820(char *param_1)

#include "nocturne.h"

void core_event_cpp_FUN_0048b820(char *param_1)

{
  while (((&DAT_006074b8)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
