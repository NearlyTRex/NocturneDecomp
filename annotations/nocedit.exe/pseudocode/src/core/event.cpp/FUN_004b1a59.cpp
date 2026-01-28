// Name: core_event.cpp_FUN_004b1a59
// Address: 004b1a59
// Address Range: [[004b1a59, 004b1a6e]]
// Convention: unknown
// Signature: char core_event_cpp_FUN_004b1a59 (char param_1,undefined2 param_2,undefined4 param_3,undefined2 *param_4)

#include "nocturne.h"

char core_event_cpp_FUN_004b1a59
               (char param_1,ushort param_2,uint param_3,ushort *param_4)

{
  *(char *)(param_4 + 1) = (char)param_2;
  *param_4 = param_2;
  return param_1 + -0x77;
}
