// Name: core_bride.cpp_CBride_getPropertyList_FUN_00424b10
// Address: 00424b10
// Address Range: [[00424b10, 00424b42]]
// Convention: __cdecl
// Signature: void __cdecl core_bride_cpp_CBride_getPropertyList_FUN_00424b10(CBride *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_bride_cpp_CBride_getPropertyList_FUN_00424b10(CBride *this_ptr,CActorPropertyList *property_list)

{
  int in_stack_0000000c;
  CActorPropertyList *in_stack_00000010;
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
            (in_stack_00000010,"Model",
             (CDeformableModelInstance *)(in_stack_0000000c + 0x158),0);
  return;
}
