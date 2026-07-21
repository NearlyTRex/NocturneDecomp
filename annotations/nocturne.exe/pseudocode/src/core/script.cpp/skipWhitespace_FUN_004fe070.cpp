// Name: core_script.cpp_skipWhitespace_FUN_004fe070
// Address: 004fe070
// Address Range: [[004fe070, 004fe089]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *param_1)

#include "nocturne.h"

void __cdecl core_script_cpp_skipWhitespace_FUN_004fe070(char *param_1)

{
  while (((&DAT_005c168c)[(byte)(*param_1 + 1)] & 2) != 0) {
    param_1 = param_1 + 1;
  }
  return;
}
