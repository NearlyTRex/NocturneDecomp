// Name: core_boxactor.cpp_CLightActor_propertyActionTypeCallback_FUN_00423380
// Address: 00423380
// Address Range: [[00423380, 004233ff]]
// Convention: __cdecl
// Signature: int __cdecl core_boxactor_cpp_CLightActor_propertyActionTypeCallback_FUN_00423380 (CLightActor *this_ptr,CActorProperty *property)

#include "nocturne.h"

int __cdecl
core_boxactor_cpp_CLightActor_propertyActionTypeCallback_FUN_00423380
          (CLightActor *this_ptr,CActorProperty *property)

{
  CLightActor *this_ptr_00;
  ELightActorType EVar1;
  char local_138 [300];
  
  this_ptr_00 = (CLightActor *)
                core_actor_cpp_castToClassHash_FUN_0040c790
                          ((CDemonActor *)this_ptr,g_CLightActorClassInfo.name_hash);
  _sprintf(local_138,"Select light type for CLightActor %s",this_ptr);
  EVar1 = core_boxactor_cpp_FUN_00423110();
  if ((int)EVar1 < 0) {
    return 0;
  }
  this_ptr_00->light_actor_type = EVar1;
  core_boxactor_cpp_CLightActor_FUN_00422d60(this_ptr_00);
  return 1;
}
