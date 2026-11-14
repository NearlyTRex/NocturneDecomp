// Name: core_event.cpp_formatEventError_FUN_004a1210
// Address: 004a1210
// Address Range: [[004a1210, 004a1239]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_004a1210(char *format)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_004a1210(char *format)

{
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(&DAT_01c56ed0,format,(va_list_t)&local_4);
  return 0;
}
