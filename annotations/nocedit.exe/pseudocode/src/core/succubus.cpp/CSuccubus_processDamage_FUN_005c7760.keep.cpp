// Name: core_succubus.cpp_CSuccubus_processDamage_FUN_005c7760
// Address: 005c7760
// MANUAL RECONSTRUCTION
// Address Range: [[005c7760, 005c7779]]
// Convention: __cdecl
// Signature: void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760(CSuccubus *this_ptr,SDamageInfo *damage_info)

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_processDamage_FUN_005c7760(CSuccubus *this_ptr,SDamageInfo *damage_info)

{
#if NOCTURNE_AUTHENTIC_SUCCUBUS
  damage_info->damage_amount = 0.0;
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
#else
  if (damage_info->damage_type != DAMAGE_TYPE_FALL_APART) {
    damage_info->damage_amount = 0.0;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_004a9f10(&this_ptr->base,damage_info);
  if ((this_ptr->base).base.base.lifecycle_state == ACTOR_DESTROYED) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(this_ptr->sfx_handle);
  }
#endif
  return;
}
