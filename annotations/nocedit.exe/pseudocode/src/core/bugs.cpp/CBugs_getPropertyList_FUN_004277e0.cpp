// Name: core_bugs.cpp_CBugs_getPropertyList_FUN_004277e0
// Address: 004277e0
// Address Range: [[004277e0, 004278c4]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_getPropertyList_FUN_004277e0(CBugs *this_ptr,CActorPropertyList *property_list)

{
  CActorProperty *pCVar1;
  int iVar2;
  int iVar3;
  CKeyFramedModelInstance *data_ptr;
  char local_70 [100];
  
  core_enemy_cpp_CEnemy_getPropertyList_FUN_004aa170(&this_ptr->base,property_list);
  pCVar1 = core_actor_cpp_CActorPropertyList_addIntRange_FUN_0040e220
                     (property_list,"bugCount",&this_ptr->count,0,400,
                      (CActorPropertyValidatorFunc *)0x0);
  pCVar1->auto_update_flag = 1;
  iVar3 = this_ptr->model_count + 1;
  if (4 < iVar3) {
    iVar3 = 4;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    data_ptr = this_ptr->models;
    do {
      _sprintf(local_70,"Bug model %d",iVar2);
      iVar2 = iVar2 + 1;
      core_actor_cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(property_list,local_70,data_ptr,1);
      data_ptr = data_ptr + 1;
    } while (iVar2 < iVar3);
  }
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"allowChaseEvent",this_ptr->allow_chase_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"allowSwarmvent",this_ptr->allow_swarm_event);
  core_actor_cpp_CActorPropertyList_addEvent_FUN_0040e460
            (property_list,"animateEvent",this_ptr->animate_event);
  return;
}
