// Name: core_lightpis.cpp_CLightPis_ctor_FUN_00501610
// Address: 00501610
// Address Range: [[00501610, 005016cf]]
// Convention: __cdecl
// Signature: CLightPis * __cdecl core_lightpis_cpp_CLightPis_ctor_FUN_00501610(CLightPis *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CLightPis * __cdecl core_lightpis_cpp_CLightPis_ctor_FUN_00501610(CLightPis *this_ptr)

{
  float fVar1;
  float fVar2;
  CLightPis *pCVar3;
  
  pCVar3 = (CLightPis *)core_weapon_cpp_CWeapon_ctor_FUN_005ad4c0(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CLightPisVTable._ub;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950
            (&(pCVar3->base).model,"ecre_pistol.kfm");
  pCVar3->sfx_handle = 0;
  pCVar3->fire_flash_pending = 0;
  (pCVar3->base).is_spread_weapon = 0;
  (pCVar3->base).fire_mode = FIRE_MODE_AUTOMATIC;
  (pCVar3->base).weapon_type = WEAPON_TYPE_GUN;
  (pCVar3->base).can_penetrate = 0;
  (pCVar3->base).bolt_velocity = 32.0;
  (pCVar3->base).fire_cooldown = 0;
  pCVar3->unknown_0x58c = 1;
  fVar1 = _DAT_0060316c;
  (pCVar3->base).can_attach_light = 1;
  fVar2 = _DAT_00603170;
  pCVar3->hit_enemy = 0;
  pCVar3->charge_ratio = 1.0;
  (pCVar3->base).weight = fVar1;
  pCVar3->charge_level = fVar2;
  return pCVar3;
}
