// Name: core_event.cpp_formatEventError_FUN_0048b7f0
// Address: 0048b7f0
// Address Range: [[0048b7f0, 0048b819]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_0048b7f0(char *format)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_0048b7f0(char *format)

{
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(&DAT_01c734b0,format,(va_list_t)&local_4);
  return 0;
}
