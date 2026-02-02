// Name: core_ammo.cpp_CAmmo_propertyDisplayCallback_FUN_00411200
// Address: 00411200
// Address Range: [[00411200, 00411285]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_propertyDisplayCallback_FUN_00411200 (CAmmo *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_ammo_cpp_CAmmo_propertyDisplayCallback_FUN_00411200
          (CAmmo *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CAmmo *pCVar2;
  char *pcVar2;
  
  pCVar2 = (CAmmo *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CAmmoClassInfo.name_hash);
  switch(pCVar2->ammo_type) {
  case AMMO_TYPE_GENERIC:
    pcVar2 = "Generic";
    break;
  case AMMO_TYPE_HOLY:
    pcVar2 = "Holy";
    break;
  case AMMO_TYPE_WOOD:
    pcVar2 = "Wood";
    break;
  case AMMO_TYPE_SILVER:
    pcVar2 = "Silver";
    break;
  case AMMO_TYPE_GOLD:
    pcVar2 = "Gold";
    break;
  case AMMO_TYPE_FLAMING:
    pcVar2 = "Flaming";
    break;
  case AMMO_TYPE_BLANKS:
    pcVar2 = "Blanks";
    break;
  case AMMO_TYPE_LITHIUM:
    pcVar2 = "Lithium";
    break;
  case AMMO_TYPE_MERCURY:
    pcVar2 = "Mercury";
    break;
  default:
    goto switchD_00411225_default;
  }
  do {
    cVar1 = *pcVar2;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
switchD_00411225_default:
  return;
}
