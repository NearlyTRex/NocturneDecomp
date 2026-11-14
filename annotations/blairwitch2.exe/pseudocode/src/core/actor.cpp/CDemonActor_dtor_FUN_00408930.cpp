// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408930
// Address: 00408930
// Address Range: [[00408930, 0040897f] [00408981, 004089a8]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408930(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408930(CDemonActor *this_ptr,uint flags)

{
  CDemonActor *pCVar1;
  int iVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDemonActorTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  (this_ptr->vtable)._ub = &g_CDemonActorVTable;
  this_ptr->validation_magic = 0x495fd67;
  iVar2 = core_actor_cpp_FUN_0040d400(this_ptr->particle_systems,0);
  pCVar1 = (CDemonActor *)(iVar2 + -0x154);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
