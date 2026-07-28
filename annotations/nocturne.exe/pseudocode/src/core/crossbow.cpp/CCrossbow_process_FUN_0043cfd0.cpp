// Name: core_crossbow.cpp_CCrossbow_process_FUN_0043cfd0
// Address: 0043cfd0
// Address Range: [[0043cfd0, 0043d093]]
// Convention: unknown
// Signature: void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CWeapon *param_1,float param_2)

#include "nocturne.h"

void core_crossbow_cpp_CCrossbow_process_FUN_0043cfd0(CWeapon *param_1,float param_2)

{
  CVector3f *pCVar1;
  CVector3f aCStack_1c [2];
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  pCVar1 = (CVector3f *)(*((param_1->base).vtable._ub)->initializeInEditor)(&param_1->base);
  pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                     (&param_1->base,aCStack_1c,pCVar1);
  param_1[1].base.location.position.y = pCVar1->x;
  param_1[1].base.location.position.z = pCVar1->y;
  param_1[1].base.location.area_id = (int)pCVar1->z;
  if ((((param_1->weapon_state != 2) || (param_1->ammo_count < 1)) || (param_1->ammo_type != 5)) ||
     (0.0 < param_1->fire_cooldown_timer)) {
    core_flame_cpp_FUN_0048df10(param_1[1].base.actor_name + 4);
    param_1[1].base.actor_name[0] = '\0';
    param_1[1].base.actor_name[1] = '\0';
    param_1[1].base.actor_name[2] = '\0';
    param_1[1].base.actor_name[3] = '\0';
  }
  else {
    param_1[1].base.actor_name[0] = '\x01';
    param_1[1].base.actor_name[1] = '\0';
    param_1[1].base.actor_name[2] = '\0';
    param_1[1].base.actor_name[3] = '\0';
  }
  core_flame_cpp_CFlame_process_FUN_0048d0c0((CFlame *)(param_1[1].base.actor_name + 4),param_2);
  (param_1->base).is_transparent = *(int *)param_1[1].base.actor_name;
  return;
}
