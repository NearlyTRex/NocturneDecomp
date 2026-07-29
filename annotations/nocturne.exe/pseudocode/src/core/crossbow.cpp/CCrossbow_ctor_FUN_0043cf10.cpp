// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_0043cf10
// Address: 0043cf10
// Address Range: [[0043cf10, 0043cfc1]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_0043cf10(CCrossbow *this_ptr)

{
  CFlame *pCVar1;
  CWeapon *pCVar2;
  CFlame *pCVar3;
  
  pCVar2 = core_weapon_cpp_CWeapon_ctor_FUN_00553d90(&this_ptr->base);
  pCVar3 = core_flame_cpp_CFlame_ctor_FUN_0048cf60((CFlame *)(pCVar2[1].base.actor_name + 4));
  pCVar3[-2].base.scale.z = (int)&g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)&pCVar3[-2].base.blood_effect_timer,"crossbow.kfm")
  ;
  pCVar3[-1].base.location.position.x = 0.0;
  pCVar3[-1].render_corona = 0;
  (pCVar3->flame_size).x = 0.45;
  (pCVar3->flame_size).y = 0.85;
  (pCVar3->flame_size).z = 0.45;
  pCVar3[-2].enemy_burn_index = 0;
  pCVar3[-2].render_corona = 0;
  pCVar3[-0xffffffff00000001].base.actor_name[0] = '\x01';
  pCVar3[-0xffffffff00000001].base.actor_name[1] = '\0';
  pCVar3[-0xffffffff00000001].base.actor_name[2] = '\0';
  pCVar3[-0xffffffff00000001].base.actor_name[3] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[4] = '\0';
  (pCVar1->base).actor_name[5] = '\0';
  (pCVar1->base).actor_name[6] = '\0';
  (pCVar1->base).actor_name[7] = '\0';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[8] = '\0';
  (pCVar1->base).actor_name[9] = '\0';
  (pCVar1->base).actor_name[10] = 'H';
  (pCVar1->base).actor_name[0xb] = 'B';
  pCVar1 = pCVar3 + -1;
  (pCVar1->base).actor_name[0xc] = '\0';
  (pCVar1->base).actor_name[0xd] = '\0';
  (pCVar1->base).actor_name[0xe] = '\0';
  (pCVar1->base).actor_name[0xf] = '\0';
  return (CCrossbow *)(pCVar3[-3].off_event + 0x4c);
}
