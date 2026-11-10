// Name: core_weapon.cpp_CWeapon_isReadyToFire_FUN_0057b930
// Address: 0057b930
// Address Range: [[0057b930, 0057b9fc]]
// Convention: __cdecl
// Signature: int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0057b930(CWeapon *this_ptr)

#include "nocturne.h"

int __cdecl core_weapon_cpp_CWeapon_isReadyToFire_FUN_0057b930(CWeapon *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
  if ((0.0 < this_ptr->fire_cooldown_timer) ||
     (((iVar1 != 0 && (*(int *)(iVar1 + 0x20b60) != 0)) && (*(int *)&this_ptr->field_0x56c == 10))))
  {
    return 0;
  }
  if (*(int *)&this_ptr->field_0x590 != 0) {
    iVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
    if (iVar1 != 0) {
      if ((*(int *)&this_ptr->field_0x56c == 10) &&
         (*(int *)(iVar1 + 0x20b80) < *(int *)&this_ptr->field_0x58c)) {
        core_sound_cpp_CSound_playActorSound_FUN_005609d0
                  (0x02CF5680,&this_ptr->base,"=wp_nomana.wav" + 1,
                   &(this_ptr->base).location.position);
        this_ptr->fire_cooldown_timer = 1.0;
        return 0;
      }
      if ((*(int *)&this_ptr->field_0x56c == 0xb) &&
         (*(int *)(iVar1 + 0x20b84) < *(int *)&this_ptr->field_0x58c)) {
        return 0;
      }
    }
  }
  return 1;
}
