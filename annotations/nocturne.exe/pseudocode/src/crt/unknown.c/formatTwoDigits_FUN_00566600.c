// Name: crt_unknown.c_formatTwoDigits_FUN_00566600
// Address: 00566600
// Address Range: [[00566600, 00566632]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_formatTwoDigits_FUN_00566600(char *buffer,int value)

#include "nocturne.h"

void __cdecl formatTwoDigits(char *buffer,int value)

{
  *buffer = (char)((longlong)value / 10) + '0';
  buffer[2] = '\0';
  buffer[1] = (char)((longlong)value % 10) + '0';
  return;
}
