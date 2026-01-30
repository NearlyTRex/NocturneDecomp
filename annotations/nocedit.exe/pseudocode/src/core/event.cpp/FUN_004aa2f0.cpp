// Name: core_event.cpp_FUN_004aa2f0
// Address: 004aa2f0
// Address Range: [[004aa2f0, 004aa311]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_FUN_004aa2f0(int param_1,int *param_2)

#include "nocturne.h"

void __cdecl core_event_cpp_FUN_004aa2f0(int param_1,int *param_2)

{
  while ((g_CharacterClassificationTable[(byte)(*(char *)(param_1 + *param_2) + 1)] & 2U) != 0) {
    *param_2 = *param_2 + 1;
  }
  return;
}
