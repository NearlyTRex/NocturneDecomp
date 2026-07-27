// Name: engine_special.cpp_FUN_00530cf0
// Address: 00530cf0
// Address Range: [[00530cf0, 00530d22]]
// Convention: unknown
// Signature: void engine_special_cpp_FUN_00530cf0(int *param_1,int param_2)

#include "nocturne.h"

void engine_special_cpp_FUN_00530cf0(int *param_1,int param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\engine\\special.c";
  INT_01cc4804 = 0x86;
  core_main_c_FUN_004c8440("Unable to find function!");
  return;
}
