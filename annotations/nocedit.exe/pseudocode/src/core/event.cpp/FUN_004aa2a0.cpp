// Name: core_event.cpp_FUN_004aa2a0
// Address: 004aa2a0
// Address Range: [[004aa2a0, 004aa2c9]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004aa2a0(char *param_1)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004aa2a0(char *param_1)

{
  byte *local_4;
  
  local_4 = &stack0x00000008;
  _vsprintf(&DAT_02d0a460,param_1,(va_list_t)&local_4);
  return 0;
}
