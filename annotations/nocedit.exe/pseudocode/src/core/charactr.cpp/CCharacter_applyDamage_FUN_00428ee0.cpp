// Name: core_charactr.cpp_CCharacter_applyDamage_FUN_00428ee0
// Address: 00428ee0
// Address Range: [[00428ee0, 00428f33]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyDamage_FUN_00428ee0(CCharacter * this_ptr, int damage_type, float damage_amount)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_applyDamage_FUN_00428ee0
          (CCharacter *this_ptr,int damage_type,float damage_amount)

{
  int iVar1;
  float fStack_c;
  
  iVar1 = (*(((this_ptr->base).vtable._uc)->_uc).isDamageable)(this_ptr);
  if (0 < iVar1) {
    return;
  }
  core_charactr_cpp_SDamageInfo_ctor_FUN_00427db0((SDamageInfo *)&stack0xffffffc4);
  fStack_c = damage_amount;
  (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,(SDamageInfo *)&stack0xffffffc4);
  return;
}
