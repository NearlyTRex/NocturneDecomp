// Name: core_glass.cpp_CGlass_process_FUN_004ca550
// Address: 004ca550
// Address Range: [[004ca550, 004ca592]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_process_FUN_004ca550(CGlass *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004ca550(CGlass *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                      (0x01C6E360,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_FUN_004cc040(this_ptr,&(this_ptr->base).location);
      return;
    }
  }
  else {
    (this_ptr->base).process_disabled = 1;
  }
  return;
}
