// Name: core_charactr.cpp_CCharacter_applyDamage_FUN_004239b0
// Address: 004239b0
// Address Range: [[004239b0, 00423a03]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_004239b0(CCharacter *this_ptr,int damage_type,float damage_amount)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyDamage_FUN_004239b0(CCharacter *this_ptr,int damage_type,float damage_amount)

{
  EDeathState EVar1;
  SDamageInfo aSStack_40 [4];
  float fStack_3c;
  int iStack_10;
  
  EVar1 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (0 < (int)EVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_40);
  iStack_10 = damage_type;
  fStack_3c = damage_amount;
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,aSStack_40);
  return;
}
