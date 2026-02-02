// Name: core_trigger.cpp_CTrigger_FUN_005e0f70
// Address: 005e0f70
// Address Range: [[005e0f70, 005e1172]]
// Convention: __cdecl
// Signature: void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

#include "nocturne.h"

void __cdecl core_trigger_cpp_CTrigger_FUN_005e0f70(CTrigger *this_ptr)

{
  int iVar1;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (in_stack_00000008,"On event",this_ptr->unk + 0xcc);
  core_actor_cpp_CActorPropertyList_addButton_FUN_0040e480
            (in_stack_00000008,"Off event",this_ptr->unk + 0x130);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Event type",4,(int *)&PTR_s_Momentary_00684364);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"What triggers me",10,
             (int *)&PTR_s_Hero_triggers_me_00684384);
  core_actor_cpp_CActorPropertyList_addEnumPair_FUN_0040e640
            (in_stack_00000008,"Shape",2,(int *)&PTR_s_Box_006843d4);
  if (*(int *)(this_ptr->unk + 0x1c) == 1) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (in_stack_00000008,"Actor name",this_ptr->unk + 0x20,0x50,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 9) {
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (in_stack_00000008,"Actor type(s)",this_ptr->unk + 0x70,0x50,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (in_stack_00000008,"Actor name wildcard",this_ptr->unk + 0x20,0x50,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 2) {
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (in_stack_00000008,"Light min",(float *)(this_ptr->unk + 0xc4),0.0,1.0,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
              (in_stack_00000008,"Light max",(float *)(this_ptr->unk + 200),0.0,1.0,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 5) {
    core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
              (in_stack_00000008,"Laser type",(int *)(this_ptr->unk + 0x19c),
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  if (*(int *)(this_ptr->unk + 0x1c) == 7) {
    core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
              (in_stack_00000008,"Hitpoints",(float *)(this_ptr->unk + 0x1a0),
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
    core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
              (in_stack_00000008,"Damage actor name wildcard",this_ptr->unk + 0x1ac,100,
               (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  }
  iVar1 = *(int *)(this_ptr->unk + 0x1c);
  if (((iVar1 == 1) || (iVar1 == 0)) || (iVar1 == 9)) {
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (in_stack_00000008,"pressurePlate",(int *)(this_ptr->unk + 0xc0));
  }
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (in_stack_00000008,"Test radius",(float *)this_ptr->unk,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  if (*(int *)(this_ptr->unk + 0x1c) == 4) {
    core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
              (in_stack_00000008,"Auto aim at me",(int *)(this_ptr->unk + 0x1a8));
    return;
  }
  return;
}
