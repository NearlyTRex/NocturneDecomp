// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_0043a4c0
// Address: 0043a4c0
// Address Range: [[0043a4c0, 0043a571]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043a4c0(CCrossbow *this_ptr)

{
  CWeapon *pCVar1;
  CFlame *pCVar2;
  
  pCVar1 = core_weapon_cpp_CWeapon_ctor_FUN_005899d0(&this_ptr->base);
  pCVar2 = core_flame_cpp_CFlame_ctor_FUN_0049f180((CFlame *)(pCVar1[1].base.actor_name + 4));
  *(CWeapon_full_vtable **)(pCVar2[-2].off_event + 0x60) = &g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar2[-2].intensity,(char *)0x5ce210);
  pCVar2[-1].base.particle_systems[0].fade_timer = 0.0;
  pCVar2[-1].render_corona = 0;
  (pCVar2->flame_size).x = 0.45;
  (pCVar2->flame_size).y = 0.85;
  (pCVar2->flame_size).z = 0.45;
  pCVar2[-1].base.particle_systems[0].position.z = 0.0;
  pCVar2[-1].base.particle_systems[0].fade_current = 0.0;
  pCVar2[-1].base.particle_systems[0].active = 1;
  pCVar2[-1].base.particle_systems[0].owner = (CDemonActor *)0x0;
  pCVar2[-1].base.particle_systems[0].max_particles = 0x42480000;
  pCVar2[-1].base.particle_systems[0].next_particle = 0;
  return (CCrossbow *)&pCVar2[-2].base.dead2;
}
