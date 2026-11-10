// Name: core_glass.cpp_CGlass_process_FUN_004e19c0
// Address: 004e19c0
// Address Range: [[004e19c0, 004e1a02]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_process_FUN_004e19c0(CGlass *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004e19c0(CGlass *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004e34b0(this_ptr,&(this_ptr->base).location);
      return;
    }
  }
  else {
    (this_ptr->base).process_disabled = 1;
  }
  return;
}
