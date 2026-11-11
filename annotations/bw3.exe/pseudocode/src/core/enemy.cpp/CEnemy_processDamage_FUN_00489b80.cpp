// Name: core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
// Address: 00489b80
// Address Range: [[00489b80, 00489c85]]
// Convention: __cdecl
// Signature: void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(CEnemy *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_enemy_cpp_CEnemy_processDamage_FUN_00489b80(CEnemy *this_ptr,SDamageInfo *damage_info)

{
  CCharacter *pCVar1;
  int iVar2;
  
  if ((this_ptr->base).is_invulnerable != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@@ShotInvulnerable" + 2);
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
  if (0.0 < damage_info->damage_amount) {
    pCVar1 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (damage_info->wielder,g_CCharacterClassInfo.name_hash);
    if (pCVar1 == (CCharacter *)0x0) {
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (damage_info->attacker,g_CCharacterClassInfo.name_hash);
    }
    if (pCVar1 != (CCharacter *)0x0) {
      iVar2 = (CBugs *)core_actor_cpp_castToClassHash_FUN_0040c840(pCVar1,g_CBugsClassInfo.name_hash);
      if (iVar2 == 0) {
        this_ptr->victim_search_timer = 15.0;
        this_ptr->is_in_combat = 1;
        this_ptr->victim = pCVar1;
      }
    }
  }
  if ((((ABS((this_ptr->base).bind_time) != 0.0) && ((this_ptr->base).bind_type == 0)) &&
      (damage_info->damage_type == DAMAGE_TYPE_HOLY_CROSS)) && ((this_ptr->base).hit_points <= 0.0))
  {
    sound_sndmain_cpp_killSfx_FUN_00556be0((this_ptr->base).bind_sound_handle);
    core_charactr_cpp_FUN_0042ff70(this_ptr);
    return;
  }
  return;
}
