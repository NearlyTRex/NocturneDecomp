// Name: core_ammobox.cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0
// Address: 00411ab0
// Address Range: [[00411ab0, 00411b25]]
// Convention: __cdecl
// Signature: int __cdecl core_ammobox_cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0(CAmmoBox *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_ammobox_cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0(CAmmoBox *this_ptr,CActorProperty *property)

{
  CAmmoBox *pCVar1;
  
  pCVar1 = (CAmmoBox *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CAmmoBoxClassInfo.name_hash);
  switch(pCVar1->ammo_type) {
  case AMMOBOX_TYPE_GENERIC:
    pCVar1->ammo_type = AMMOBOX_TYPE_HOLY;
    break;
  case AMMOBOX_TYPE_HOLY:
    pCVar1->ammo_type = AMMOBOX_TYPE_WOOD;
    return 1;
  case AMMOBOX_TYPE_WOOD:
    pCVar1->ammo_type = AMMOBOX_TYPE_SILVER;
    return 1;
  case AMMOBOX_TYPE_SILVER:
    pCVar1->ammo_type = AMMOBOX_TYPE_GOLD;
    return 1;
  case AMMOBOX_TYPE_GOLD:
    pCVar1->ammo_type = AMMOBOX_TYPE_GENERIC;
    return 1;
  }
  return 1;
}
