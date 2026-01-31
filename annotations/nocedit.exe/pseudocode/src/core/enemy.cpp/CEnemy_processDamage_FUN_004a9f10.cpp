// Name: core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
// Address: 004a9f10
// Address Range: [[004a9f10, 004a9f96]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl
core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy *this_ptr,SDamageInfo *damage_info)

{
  CDemonActor *pCVar1;
  
  (*(((this_ptr->base).base.vtable._uc)->_uc).cfunc9)();
  core_charactr_cpp_CCharacter_processDamage_FUN_0042c3c0(&this_ptr->base,damage_info);
  if (0.0 < damage_info->damage_amount) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (damage_info->wielder,g_CCharacterClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (damage_info->attacker,g_CCharacterClassInfo.name_hash);
    }
    if (pCVar1 != (CDemonActor *)0x0) {
      this_ptr->unk2[8] = '\0';
      this_ptr->unk2[9] = '\0';
      this_ptr->unk2[10] = 'p';
      this_ptr->unk2[0xb] = 'A';
      this_ptr->unk1 = 1;
      *(CDemonActor **)(this_ptr->unk2 + 4) = pCVar1;
      return;
    }
  }
  return;
}
