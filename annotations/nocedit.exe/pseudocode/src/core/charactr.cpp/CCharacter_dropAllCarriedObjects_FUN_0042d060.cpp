// Name: core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060
// Address: 0042d060
// Address Range: [[0042d060, 0042d083]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_0042d060(CCharacter *this_ptr)

{
  int hand_index;
  int iVar1;
  
  hand_index = 0;
  do {
    iVar1 = hand_index + 1;
    (*(((this_ptr->base).vtable._uc)->_uc).dropCarriedObject)(this_ptr,hand_index,(CVector3f *)0x0);
    hand_index = iVar1;
  } while (iVar1 < 2);
  return;
}
