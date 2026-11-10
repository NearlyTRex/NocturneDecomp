// Name: core_thehand.cpp_CTheHand_renderOpaque_FUN_0056c880
// Address: 0056c880
// Address Range: [[0056c880, 0056c8b2]]
// Convention: __cdecl
// Signature: int __cdecl core_thehand_cpp_CTheHand_renderOpaque_FUN_0056c880(CTheHand *this_ptr)

#include "nocturne.h"

int __cdecl core_thehand_cpp_CTheHand_renderOpaque_FUN_0056c880(CTheHand *this_ptr)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x70))(this_ptr);
  if ((iVar1 != 0) && (*(int *)(0x01D81080 + 0x1008) == 0)) {
    return 0;
  }
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220((CCharacter *)this_ptr);
  return iVar1;
}
