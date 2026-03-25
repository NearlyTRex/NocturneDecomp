// Name: core_event.cpp_formatEventError_FUN_004aa2a0
// Address: 004aa2a0
// Address Range: [[004aa2a0, 004aa2c9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_004aa2a0(char *format,...)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_004aa2a0(char *format,...)

{
  va_list_t local_4;
  
  VA_START_T(local_4, format);
  _vsprintf(g_EventErrorMessageBuffer,format,local_4);
  return 0;
}
