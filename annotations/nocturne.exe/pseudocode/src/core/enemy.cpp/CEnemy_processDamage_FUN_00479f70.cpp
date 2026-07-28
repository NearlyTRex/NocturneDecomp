// Name: core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
// Address: 00479f70
// Address Range: [[00479f70, 00479ff6]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(CEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(CEnemy *this_ptr,SDamageInfo *damage_info)

{
  CCharacter *pCVar1;
  float unaff_EBX;
  int unaff_EBP;
  CVector3f *unaff_ESI;
  
  (*(((this_ptr->base).base.vtable._uc)->_uc).kill)(&this_ptr->base,unaff_EBP,unaff_ESI,unaff_EBX);
  core_charactr_cpp_CCharacter_processDamage_FUN_00428510(&this_ptr->base,damage_info);
  if (0.0 < damage_info->damage_amount) {
    pCVar1 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040d890
                       (damage_info->wielder,g_CCharacterActorType_00765a60.name_hash);
    if (pCVar1 == (CCharacter *)0x0) {
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040d890
                         (damage_info->attacker,g_CCharacterActorType_00765a60.name_hash);
    }
    if (pCVar1 != (CCharacter *)0x0) {
      this_ptr->victim_search_timer = 15.0;
      this_ptr->is_in_combat = 1;
      this_ptr->victim = pCVar1;
      return;
    }
  }
  return;
}
