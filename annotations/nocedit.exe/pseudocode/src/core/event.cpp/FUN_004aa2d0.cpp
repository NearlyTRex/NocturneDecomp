// Name: core_event.cpp_FUN_004aa2d0
// Address: 004aa2d0
// Address Range: [[004aa2d0, 004aa2e9]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_004aa2d0(char *param_1)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004aa2d0(char *param_1)

{
  while ((g_CharacterClassificationTable[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
