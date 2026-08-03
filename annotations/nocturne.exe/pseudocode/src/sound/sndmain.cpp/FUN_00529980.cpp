// Name: sound_sndmain.cpp_FUN_00529980
// Address: 00529980
// Address Range: [[00529980, 005299d9]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00529980(char *param_1)

#include "nocturne.h"

void sound_sndmain_cpp_FUN_00529980(char *param_1)

{
  char local_408 [1024];
  byte *local_8;
  
  local_8 = &stack0x00000008;
  _vsprintf(local_408,param_1,(va_list_t)&local_8);
  local_8 = (byte *)0x0;
  engine_console_cpp_CConsole_printf_FUN_0043ac60(g_CConsole_PTR_005ad350,"%s\n");
  return;
}
