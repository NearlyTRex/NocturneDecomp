// Name: core_charactr.cpp_CCharacter_isCarryingAnything_FUN_00429180
// Address: 00429180
// Address Range: [[00429180, 004291af]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_isCarryingAnything_FUN_00429180(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&this_ptr->field_0x2620;
  iVar2 = 0;
  while( true ) {
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    iVar1 = *(int *)&this_ptr->field_0x2698;
    this_ptr = (CCharacter *)&(this_ptr->base).field_0x78;
  }
  return 0;
}
