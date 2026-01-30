// Name: core_msnedit.cpp_FUN_00536bc0
// Address: 00536bc0
// Address Range: [[00536bc0, 00536be8]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_FUN_00536bc0(int param_1)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_FUN_00536bc0(int param_1)

{
  if ((((g_CharacterClassificationTable[(byte)((char)param_1 + 1)] & 0xe0U) == 0) &&
      (param_1 != 0x2d)) && (param_1 != 0x5f)) {
    return 1;
  }
  return 0;
}
