// Name: core_event.cpp_formatEventError_FUN_004aa2a0
// Address: 004aa2a0
// Address Range: [[004aa2a0, 004aa2c9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_004aa2a0(char *format,...)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_004aa2a0(char *format,...)

{
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(g_EventErrorMessageBuffer,format,(va_list_t)&local_4);
  return 0;
}
