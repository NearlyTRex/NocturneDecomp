// Name: core_glass.cpp_FUN_004c72d0
// Address: 004c72d0
// Address Range: [[004c72d0, 004c72e9]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_FUN_004c72d0(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_FUN_004c72d0(CGlass *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,&this_ptr->field_0x468);
  return iVar1;
}
