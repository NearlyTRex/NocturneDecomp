// Name: FUN_00529980
// Address: 00529980
// Address Range: [[00529980, 005299d9]]
// Convention: unknown
// Signature: void FUN_00529980(undefined4 param_1)

#include "nocturne.h"

void FUN_00529980(uint param_1)

{
  byte local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x00000008;
  _vsprintf(local_408,param_1,&local_8);
  local_8 = (byte *)0x0;
  engine_console_cpp_CConsole_printf_FUN_0043ac60(PTR_DAT_005ad350,&DAT_00593b86,local_408);
  return;
}
