// Name: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004aded0
// Address: 004aded0
// Address Range: [[004aded0, 004adee9]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004aded0(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004aded0(CGlass *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,this_ptr->breakable_condition);
  return iVar1;
}
