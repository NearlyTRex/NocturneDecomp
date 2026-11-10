// Name: core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
// Address: 004a0f00
// Address Range: [[004a0f00, 004a0fa9]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy *this_ptr,SDamageInfo *damage_info)

{
  CCharacter *pCVar1;
  
  if (*(int *)&(this_ptr->base).field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@@ShotInvulnerable" + 2);
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  core_charactr_cpp_CCharacter_processDamage_FUN_004319e0(&this_ptr->base,damage_info);
  if (0.0 < *(float *)(damage_info + 4)) {
    pCVar1 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c600
                       (*(uint *)(damage_info + 0x38),g_CCharacterClassInfo.name_hash);
    if (pCVar1 == (CCharacter *)0x0) {
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c600
                         (*(uint *)(damage_info + 0x34),g_CCharacterClassInfo.name_hash);
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
