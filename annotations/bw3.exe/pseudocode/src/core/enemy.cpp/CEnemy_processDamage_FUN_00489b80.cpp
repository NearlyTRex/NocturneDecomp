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
  
  if (*(int *)&(this_ptr->base).field_0x27b0 != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_0048c150
              (0x01C6E360,"@@ShotInvulnerable" + 2);
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).releaseVictim)(&this_ptr->base);
  core_charactr_cpp_CCharacter_processDamage_FUN_00430d60(&this_ptr->base,damage_info);
  if (0.0 < *(float *)(damage_info + 4)) {
    pCVar1 = (CCharacter *)
             core_actor_cpp_castToClassHash_FUN_0040c840
                       (*(uint *)(damage_info + 0x38),g_CCharacterClassInfo.name_hash);
    if (pCVar1 == (CCharacter *)0x0) {
      pCVar1 = (CCharacter *)
               core_actor_cpp_castToClassHash_FUN_0040c840
                         (*(uint *)(damage_info + 0x34),g_CCharacterClassInfo.name_hash);
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
  if (((((*(uint *)&(this_ptr->base).field_0x3254 & 0x7fffffff) != 0) &&
       (*(int *)&(this_ptr->base).field_0x3258 == 0)) && (*(int *)(damage_info + 0x30) == 0x71)) &&
     ((this_ptr->base).hit_points <= 0.0)) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&(this_ptr->base).field_0x325c);
    core_charactr_cpp_FUN_0042ff70(this_ptr);
    return;
  }
  return;
}
