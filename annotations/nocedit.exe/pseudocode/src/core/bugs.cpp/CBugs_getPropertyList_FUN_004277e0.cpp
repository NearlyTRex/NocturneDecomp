// Name: core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004278c4]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModelInstance *data_ptr;
  int in_stack_0000000c;
  char acStack_68 [92];
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  pCVar1 = core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
                     (property_list,"bugCount",(int *)(in_stack_0000000c + 0xbec0),0,400,
                      (CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  iVar3 = *(int *)(in_stack_0000000c + 0x122c4) + 1;
  if (4 < iVar3) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    data_ptr = (CKeyFramedModelInstance *)(in_stack_0000000c + 0x122c8);
    do {
      _sprintf(acStack_68,"Bug model %d",iVar2);
      iVar2 = iVar2 + 1;
      core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
                (property_list,acStack_68,data_ptr,1);
      data_ptr = data_ptr + 1;
    } while (iVar2 < iVar3);
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"allowChaseEvent",(char *)(in_stack_0000000c + 0x198a0));
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"allowSwarmvent",(char *)(in_stack_0000000c + 0x19904));
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"animateEvent",(char *)(in_stack_0000000c + 0x19968));
  return;
}
