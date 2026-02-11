// Name: core_crossbow.cpp_CCrossbow_ctor_FUN_00448c70
// Address: 00448c70
// Address Range: [[00448c70, 00448d21]]
// Convention: __cdecl
// Signature: CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00448c70(CCrossbow *this_ptr)

#include "nocturne.h"

CCrossbow * __cdecl core_crossbow_cpp_CCrossbow_ctor_FUN_00448c70(CCrossbow *this_ptr)

{
  CCrossbow *pCVar2;
  CCrossbow_ptr_1404 pCVar3;
  
  pCVar2 = (CCrossbow *)core_weapon_cpp_CWeapon_ctor_FUN_005ede70(&this_ptr->base);
  pCVar3 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0(&pCVar2->unk2);
  ADJ(pCVar3).base.base.vtable._ub = &g_CCrossbowVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&ADJ(pCVar3).base.model,"crossbow.kfm");
  ADJ(pCVar3).base.fire_cooldown_timer = 0.0;
  pCVar3[-0xffffffff00000001].unk5[0xc] = '\0';
  pCVar3[-0xffffffff00000001].unk5[0xd] = '\0';
  pCVar3[-0xffffffff00000001].unk5[0xe] = '\0';
  pCVar3[-0xffffffff00000001].unk5[0xf] = '\0';
  (pCVar3->flame_size).x = 0.45;
  (pCVar3->flame_size).y = 0.85;
  (pCVar3->flame_size).z = 0.45;
  ADJ(pCVar3).base.is_spread_weapon = 0;
  ADJ(pCVar3).base.fire_mode = 0;
  ADJ(pCVar3).base.weapon_type = 1;
  ADJ(pCVar3).base.can_penetrate = 0;
  ADJ(pCVar3).base.bolt_velocity = 50.0;
  ADJ(pCVar3).base.fire_cooldown = 0.0;
  return ADJ(pCVar3);
}
