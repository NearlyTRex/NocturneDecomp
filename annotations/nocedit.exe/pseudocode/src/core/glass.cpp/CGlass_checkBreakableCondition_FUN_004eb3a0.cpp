// Name: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004eb3a0
// Address: 004eb3a0
// Address Range: [[004eb3a0, 004eb3b9]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004eb3a0(CGlass *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                    (g_CEventListPtr,this_ptr->breakable_condition);
  return iVar1;
}
