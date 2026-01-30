// Name: core_event.cpp_FUN_004b0f90
// Address: 004b0f90
// Address Range: [[004b0f90, 004b0fb9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004b0f90(int param_1)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004b0f90(int param_1)

{
  if ((((g_CharacterClassificationTable[(byte)((char)param_1 + 1)] & 0xe0U) == 0) &&
      (param_1 != 0x5f)) && (param_1 != 0x2d)) {
    return 0;
  }
  return 1;
}
