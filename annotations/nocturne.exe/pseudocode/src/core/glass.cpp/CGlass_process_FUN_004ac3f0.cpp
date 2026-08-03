// Name: core_glass.cpp_CGlass_process_FUN_004ac3f0
// Address: 004ac3f0
// Address Range: [[004ac3f0, 004ac432]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004ac3f0(CGlass *this_ptr,float delta_time)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                      (0x01C03A10,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_CGlass_shatter_FUN_004ada20(this_ptr,&(this_ptr->base).location.position);
      return;
    }
  }
  else {
    (this_ptr->base).process_disabled = 1;
  }
  return;
}
