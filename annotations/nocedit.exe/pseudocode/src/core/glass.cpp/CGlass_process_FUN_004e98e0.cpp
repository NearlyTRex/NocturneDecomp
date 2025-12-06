// Name: core_glass.cpp_CGlass_process_FUN_004e98e0
// Address: 004e98e0
// Address Range: [[004e98e0, 004e9922]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_process_FUN_004e98e0(CGlass * this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_process_FUN_004e98e0(CGlass *this_ptr)

{
  int iVar1;
  
  if (this_ptr->shattered == 0) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                      (g_CEventListPtr,this_ptr->break_event);
    if (iVar1 != 0) {
      core_glass_cpp_CGlass_shatter_FUN_004eaef0(this_ptr,&(this_ptr->base).location.position);
      return;
    }
  }
  else {
    (this_ptr->base).field17_0x104 = 1;
  }
  return;
}
