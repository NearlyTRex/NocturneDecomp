// Name: core_glass.cpp_CGlass_checkBreakableCondition_FUN_004e3a40
// Address: 004e3a40
// Address Range: [[004e3a40, 004e3a59]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_CGlass_checkBreakableCondition_FUN_004e3a40(CGlass *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&this_ptr->field_0x30c);
  return iVar1;
}
