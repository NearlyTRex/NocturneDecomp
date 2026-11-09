// Name: core_event.cpp_formatEventError_FUN_00488ba0
// Address: 00488ba0
// Address Range: [[00488ba0, 00488bc9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_formatEventError_FUN_00488ba0(char *format)

#include "nocturne.h"

int __cdecl core_event_cpp_formatEventError_FUN_00488ba0(char *format)

{
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(&DAT_01c3dd10,format,&local_4);
  return 0;
}
