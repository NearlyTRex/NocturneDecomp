// Name: engine_console.cpp_CConsole_reset_FUN_0043ae00
// Address: 0043ae00
// Address Range: [[0043ae00, 0043ae3a]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_reset_FUN_0043ae00(int param_1)

#include "nocturne.h"

void __cdecl engine_console_cpp_CConsole_reset_FUN_0043ae00(int param_1)

{
  memset(param_1 + 4,0,4000);
  *(uint *)(param_1 + 0xfa4) = 0;
  *(uint *)(param_1 + 0xfa8) = 0;
  remove("console.txt");
  return;
}
