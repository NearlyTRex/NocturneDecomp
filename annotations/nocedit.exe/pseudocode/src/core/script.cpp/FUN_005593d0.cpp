// Name: core_script.cpp_FUN_005593d0
// Address: 005593d0
// Address Range: [[005593d0, 005593e9]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_005593d0(char *param_1)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_005593d0(char *param_1)

{
  while ((g_CharacterClassificationTable[(byte)(*param_1 + 1)] & 2U) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
