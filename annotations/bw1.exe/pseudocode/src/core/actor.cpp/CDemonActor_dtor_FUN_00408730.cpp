// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408730
// Address: 00408730
// Address Range: [[00408730, 0040875f] [00408761, 00408788]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408730(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408730(CDemonActor *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDemonActorTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  *(uint *)&this_ptr->field_0x68 = 0x495fd67;
  *(byte ***)&this_ptr->field_0x154 = &g_CDemonActorVTable;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
