// Name: core_charactr.cpp_CCharacter_applyDamage_FUN_004239b0
// Address: 004239b0
// Address Range: [[004239b0, 00423a03]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_004239b0(CCharacter *this_ptr,int damage_type,float damage_amount)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_004239b0(CCharacter *this_ptr,int damage_type,float damage_amount)

{
  EDeathState EVar1;
  SDamageInfo SStack_40;
  
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (0 < (int)EVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_40);
  SStack_40.damage_type = damage_type;
  SStack_40.damage_amount = damage_amount;
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,&SStack_40);
  return;
}
