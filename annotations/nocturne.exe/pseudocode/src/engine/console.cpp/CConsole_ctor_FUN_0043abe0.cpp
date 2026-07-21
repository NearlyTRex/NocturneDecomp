// Name: engine_console.cpp_CConsole_ctor_FUN_0043abe0
// Address: 0043abe0
// Address Range: [[0043abe0, 0043ac49]]
// Convention: unknown
// Signature: undefined4 * engine_console_cpp_CConsole_ctor_FUN_0043abe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

uint * engine_console_cpp_CConsole_ctor_FUN_0043abe0(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  param_1[0x3eb] = param_2;
  param_1[0x3ec] = param_3;
  param_1[0x3ed] = param_4;
  param_1[0x3ee] = param_5;
  if ((int)param_1[0x3ed] < 1) {
    param_1[0x3ed] = 1;
  }
  if ((int)param_1[0x3ee] < 1) {
    param_1[0x3ee] = 1;
  }
  engine_console_cpp_CConsole_reset_FUN_0043ae00(param_1);
  *param_1 = 0;
  return param_1;
}
