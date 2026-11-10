// Name: core_glass.cpp_CGlass_process_FUN_004c5250
// Address: 004c5250
// Address Range: [[004c5250, 004c5292]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_process_FUN_004c5250(CGlass *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004c5250(CGlass *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004c6d40(this_ptr,&(this_ptr->base).field_0x20);
      return;
    }
  }
  else {
    *(uint *)&(this_ptr->base).field_0x104 = 1;
  }
  return;
}
