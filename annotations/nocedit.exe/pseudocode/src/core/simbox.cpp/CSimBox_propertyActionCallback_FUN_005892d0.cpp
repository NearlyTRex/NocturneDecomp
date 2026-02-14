// Name: core_simbox.cpp_CSimBox_propertyActionCallback_FUN_005892d0
// Address: 005892d0
// Address Range: [[005892d0, 00589302]]
// Convention: __cdecl
// Signature: int __cdecl core_simbox_cpp_CSimBox_propertyActionCallback_FUN_005892d0(CSimBox *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl core_simbox_cpp_CSimBox_propertyActionCallback_FUN_005892d0(CSimBox *this_ptr,CActorProperty *property)

{
  CSimBox *pCVar1;
  
  pCVar1 = (CSimBox *)
           core_actor_cpp_castToClassHash_FUN_0040c790(&this_ptr->base,g_CSimBoxClassInfo.name_hash)
  ;
  pCVar1->type = (uint)(pCVar1->type == 0);
  return 1;
}
