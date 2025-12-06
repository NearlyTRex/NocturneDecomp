// Name: crt_stdio.c_formatTwoDigits_FUN_006002a0
// Address: 006002a0
// Address Range: [[006002a0, 006002d2]]
// Convention: __cdecl
// Signature: void crt_stdio.c_formatTwoDigits_FUN_006002a0(char * buffer, int value)

#include "nocturne.h"

void __cdecl crt_stdio_c_formatTwoDigits_FUN_006002a0(char *buffer,int value)

{
  *buffer = (char)((longlong)value / 10) + '0';
  buffer[2] = '\0';
  buffer[1] = (char)((longlong)value % 10) + '0';
  return;
}
