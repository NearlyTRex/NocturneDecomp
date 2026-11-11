// Name: core_basicene.cpp_CBasicEnemy_checkVictim_FUN_0059f6b0
// Address: 0059f6b0
// Address Range: [[0059f6b0, 0059f73f]]
// Convention: __cdecl
// Signature: int __cdecl core_basicene_cpp_CBasicEnemy_checkVictim_FUN_0059f6b0(CBasicEnemy *this_ptr)

#include "nocturne.h"

int __cdecl core_basicene_cpp_CBasicEnemy_checkVictim_FUN_0059f6b0(CBasicEnemy *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  EDeathState EVar2;
  uint uVar3;
  
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->state_machine,"Death");
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->state_machine,"Animation");
  if (iVar1 == 0) {
    this_ptr_00 = (this_ptr->base).victim;
    if ((this_ptr_00 == (CCharacter *)0x0) ||
       (EVar2 = (*(((this_ptr_00->base).vtable._uc)->_uc).getDeathState)(this_ptr_00),
       (int)EVar2 < 2)) {
      if ((this_ptr->base).victim != (CCharacter *)0x0) {
        return 1;
      }
    }
    else {
      (this_ptr->base).victim = (CCharacter *)0x0;
    }
    uVar3 = unkaddr_0059d350_cpp_FUN_0059db90(&this_ptr->state_machine);
    unkaddr_0059d350_cpp_FUN_0059d8e0(&this_ptr->state_machine,uVar3);
    return 0;
  }
  return 1;
}
