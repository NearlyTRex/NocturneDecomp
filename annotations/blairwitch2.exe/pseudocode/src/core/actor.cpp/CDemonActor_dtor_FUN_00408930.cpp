// Name: core_actor.cpp_CDemonActor_dtor_FUN_00408930
// Address: 00408930
// Address Range: [[00408930, 0040897f] [00408981, 004089a8]]
// Convention: __cdecl
// Signature: CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408930(CDemonActor *this_ptr,uint flags)

#include "nocturne.h"

CDemonActor * __cdecl core_actor_cpp_CDemonActor_dtor_FUN_00408930(CDemonActor *this_ptr,uint flags)

{
  float *ptr;
  CVector3f *pCVar1;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDemonActorTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->vtable)._ub = &g_CDemonActorVTable;
  this_ptr->validation_magic = 0x495fd67;
  pCVar1 = core_actor_cpp_CVector3f_arrdtor10_FUN_0040d400
                     (&this_ptr->particle_systems[0].position,0);
  ptr = &pCVar1[-0x1d].z;
  if ((flags & 2) == 0) {
    return (CDemonActor *)ptr;
  }
  debugFreeChecked(ptr);
  return (CDemonActor *)ptr;
}
