// Name: engine_special.cpp_FUN_00530cf0
// Address: 00530cf0
// Address Range: [[00530cf0, 00530d22]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_FUN_00530cf0(int *param_1,int param_2)

#include "nocturne.h"

void __cdecl engine_special_cpp_FUN_00530cf0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    return;
  }
  g_CurrentFilename = "..\\engine\\special.c";
  g_CurrentLineNumber = 134;
  core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to find function!");
  return;
}
