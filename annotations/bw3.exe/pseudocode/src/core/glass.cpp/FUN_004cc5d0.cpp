// Name: core_glass.cpp_FUN_004cc5d0
// Address: 004cc5d0
// Address Range: [[004cc5d0, 004cc5e9]]
// Convention: __cdecl
// Signature: int __cdecl core_glass_cpp_FUN_004cc5d0(CGlass *this_ptr)

#include "nocturne.h"

int __cdecl core_glass_cpp_FUN_004cc5d0(CGlass *this_ptr)

{
  int iVar1;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,&this_ptr->field_0x33c);
  return iVar1;
}
