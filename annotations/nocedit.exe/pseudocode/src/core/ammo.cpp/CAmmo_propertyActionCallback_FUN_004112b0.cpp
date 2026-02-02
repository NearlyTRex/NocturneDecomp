// Name: core_ammo.cpp_CAmmo_propertyActionCallback_FUN_004112b0
// Address: 004112b0
// Address Range: [[004112b0, 00411355]]
// Convention: __cdecl
// Signature: int __cdecl core_ammo_cpp_CAmmo_propertyActionCallback_FUN_004112b0(CAmmo *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl
core_ammo_cpp_CAmmo_propertyActionCallback_FUN_004112b0(CAmmo *this_ptr,CActorProperty *property)

{
  CAmmo *pCVar1;
  
  pCVar1 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CAmmoClassInfo.name_hash);
  switch(pCVar1->ammo_type) {
  case AMMO_TYPE_GENERIC:
    pCVar1->ammo_type = AMMO_TYPE_HOLY;
    break;
  case AMMO_TYPE_HOLY:
    pCVar1->ammo_type = AMMO_TYPE_WOOD;
    return 1;
  case AMMO_TYPE_WOOD:
    pCVar1->ammo_type = AMMO_TYPE_SILVER;
    return 1;
  case AMMO_TYPE_SILVER:
    pCVar1->ammo_type = AMMO_TYPE_GOLD;
    return 1;
  case AMMO_TYPE_GOLD:
    pCVar1->ammo_type = AMMO_TYPE_FLAMING;
    return 1;
  case AMMO_TYPE_FLAMING:
    pCVar1->ammo_type = AMMO_TYPE_LITHIUM;
    return 1;
  case AMMO_TYPE_LITHIUM:
    pCVar1->ammo_type = AMMO_TYPE_MERCURY;
    return 1;
  case AMMO_TYPE_MERCURY:
    pCVar1->ammo_type = AMMO_TYPE_GENERIC;
    return 1;
  }
  return 1;
}
