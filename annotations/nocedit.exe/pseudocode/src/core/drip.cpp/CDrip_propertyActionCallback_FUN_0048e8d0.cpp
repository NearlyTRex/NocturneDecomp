// Name: core_drip.cpp_CDrip_propertyActionCallback_FUN_0048e8d0
// Address: 0048e8d0
// Address Range: [[0048e8d0, 0048e921]]
// Convention: __cdecl
// Signature: int __cdecl core_drip_cpp_CDrip_propertyActionCallback_FUN_0048e8d0(CDrip *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_drip_cpp_CDrip_propertyActionCallback_FUN_0048e8d0(CDrip *this_ptr,CActorProperty *property)

{
  CDrip *pCVar2;
  
  pCVar2 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CDripClassInfo.name_hash);
  if (pCVar2->type == DRIP_TYPE_WATER) {
    pCVar2->type = DRIP_TYPE_LAVA;
  }
  else {
    if (pCVar2->type != DRIP_TYPE_LAVA) {
      pCVar2->type = DRIP_TYPE_WATER;
      return 1;
    }
    pCVar2->type = DRIP_TYPE_STALAG;
  }
  return 1;
}
