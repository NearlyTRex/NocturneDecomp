// Name: engine_2d.c_getStringWidthFormatted_FUN_004027a0
// Address: 004027a0
// Address Range: [[004027a0, 004027eb]]
// Convention: __cdecl
// Signature: int __cdecl engine_2d_c_getStringWidthFormatted_FUN_004027a0(char *format_string,...)

#include "nocturne.h"

int __cdecl engine_2d_c_getStringWidthFormatted_FUN_004027a0(char *format_string,...)

{
  int iVar1;
  char local_1004 [4096];
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(local_1004,format_string,(va_list_t)&local_4);
  local_4 = (byte *)0x0;
  iVar1 = engine_2d_c_getStringWidth_FUN_004018a0(local_1004);
  return iVar1;
}
