// Name: core_barrier.cpp_CBarrier_getPropertyList_FUN_00414400
// Address: 00414400
// Address Range: [[00414400, 0041445e]]
// Convention: __cdecl
// Signature: void __cdecl core_barrier_cpp_CBarrier_getPropertyList_FUN_00414400 (CBarrier *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_barrier_cpp_CBarrier_getPropertyList_FUN_00414400
          (CBarrier *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (property_list,"size",(CVector3f *)this_ptr->unk,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"effectClassNameList",this_ptr->unk + 0x10,200,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"addToPathGrid",(int *)(this_ptr->unk + 0xc));
  return;
}
