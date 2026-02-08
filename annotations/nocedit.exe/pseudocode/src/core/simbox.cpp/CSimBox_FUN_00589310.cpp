// Name: core_simbox.cpp_CSimBox_FUN_00589310
// Address: 00589310
// Address Range: [[00589310, 005893bd]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_FUN_00589310(CSimBox *this_ptr)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_FUN_00589310(CSimBox *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
            (in_stack_00000008,"Model file (.kfm)",(CKeyFramedModelInstance *)this_ptr->unk,0)
  ;
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Weight (lbs)",(float *)(this_ptr->unk + 0x180),
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addAction_FUN_0040e670
            (in_stack_00000008,"Type",core_simbox_cpp_FUN_00589270,
             core_simbox_cpp_FUN_005892d0);
  if (*(int *)(this_ptr->unk + 0x17c) != 1) {
    return;
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (in_stack_00000008,"Event condition : ",this_ptr->unk + 0x184);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (in_stack_00000008,"Initial velocity",(CVector3f *)(this_ptr->unk + 0x1e8),
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addVector_FUN_0040e260
            (in_stack_00000008,"Initial rotation velocity",
             (CVector3f *)(this_ptr->unk + 500),(CActorPropertyValidatorFunc *)0x0);
  return;
}
