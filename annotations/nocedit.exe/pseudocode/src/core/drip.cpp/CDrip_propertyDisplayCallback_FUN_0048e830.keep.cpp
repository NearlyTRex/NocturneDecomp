// Name: core_drip.cpp_CDrip_propertyDisplayCallback_FUN_0048e830
// Address: 0048e830
// MANUAL RECONSTRUCTION
// Address Range: [[0048e830, 0048e8cb]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830(CDrip *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830(CDrip *this_ptr,CActorProperty *property,char *output_buffer)

{
  EDripType EVar2;
  CDrip *pCVar3;

  pCVar3 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CDripClassInfo.name_hash);
  EVar2 = pCVar3->type;
  if (EVar2 == DRIP_TYPE_WATER) {
    strcpy(output_buffer, "Water");
    return;
  }
  if (EVar2 < DRIP_TYPE_STALAG) {
    strcpy(output_buffer, "Lava");
    return;
  }
  if (EVar2 == DRIP_TYPE_STALAG) {
    strcpy(output_buffer, "Stalagwhatever");
    return;
  }
  return;
}
