// Name: crt_process.c_set_shell_execute_flag_FUN_00609c80
// Address: 00609c80
// Address Range: [[00609c80, 00609c8f]]
// Convention: __cdecl
// Signature: void __cdecl crt_process_c_set_shell_execute_flag_FUN_00609c80(char *buffer)

#include "nocturne.h"

void __cdecl crt_process_c_set_shell_execute_flag_FUN_00609c80(char *buffer)

{
  *buffer = '/';
  buffer[1] = 'c';
  buffer[2] = '\0';
  return;
}
