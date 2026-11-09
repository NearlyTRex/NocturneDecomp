// Name: core_slew.cpp_FUN_00550590
// Address: 00550590
// Address Range: [[00550590, 005505d0]]
// Convention: unknown
// Signature: undefined8 core_slew_cpp_FUN_00550590(undefined4 *param_1)

#include "nocturne.h"

ulonglong core_slew_cpp_FUN_00550590(uint *param_1)

{
  param_1[2] = 0;
  param_1[1] = param_1[2];
  *param_1 = param_1[1];
  param_1[5] = 0;
  param_1[4] = param_1[5];
  param_1[3] = param_1[4];
  param_1[6] = 0x41e00000;
  return CONCAT44(param_1,param_1 + 3);
}
