// Name: core_event.cpp_FUN_0047a210
// Address: 0047a210
// Address Range: [[0047a210, 0047a250]]
// Convention: unknown
// Signature: undefined4 core_event_cpp_FUN_0047a210(undefined4 param_1)

#include "nocturne.h"

uint core_event_cpp_FUN_0047a210(uint param_1)

{
  int iVar1;
  byte *local_8;
  
  iVar1 = _sprintf(&DAT_01c08b60,"Event command parse error:\n");
  local_8 = &stack0x00000008;
  _vsprintf(&DAT_01c08b60 + iVar1,param_1,&local_8);
  return 0;
}
