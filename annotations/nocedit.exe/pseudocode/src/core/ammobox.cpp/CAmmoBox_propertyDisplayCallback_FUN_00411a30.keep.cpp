// Name: core_ammobox.cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30
// Address: 00411a30
// MANUAL RECONSTRUCTION
// Address Range: [[00411a30, 00411a99]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30(CAmmoBox *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30(CAmmoBox *this_ptr,CActorProperty *property,char *output_buffer)

{
  CAmmoBox *pCVar2;
  char *pcVar2;

  pCVar2 = (CAmmoBox *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CAmmoBoxClassInfo.name_hash);
  switch(pCVar2->ammo_type) {
  case AMMOBOX_TYPE_GENERIC:
    pcVar2 = "Generic";
    break;
  case AMMOBOX_TYPE_HOLY:
    pcVar2 = "Holy";
    break;
  case AMMOBOX_TYPE_WOOD:
    pcVar2 = "Wood";
    break;
  case AMMOBOX_TYPE_SILVER:
    pcVar2 = "Silver";
    break;
  case AMMOBOX_TYPE_GOLD:
    pcVar2 = "Gold";
    break;
  default:
    return;
  }
  strcpy(output_buffer,pcVar2);
  return;
}
