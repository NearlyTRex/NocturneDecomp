// Name: core_event.cpp_formatEventError_FUN_0047a210
// Address: 0047a210
// Address Range: [[0047a210, 0047a250]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_0047a210(char *format,...)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_0047a210(char *format,...)

{
  int iVar1;
  byte *local_8;
  
  iVar1 = _sprintf(&DAT_01c08b60,"Event command parse error:\n");
  local_8 = &stack0x00000008;
  _vsprintf(&DAT_01c08b60 + iVar1,format,(va_list_t)&local_8);
  return 0;
}
