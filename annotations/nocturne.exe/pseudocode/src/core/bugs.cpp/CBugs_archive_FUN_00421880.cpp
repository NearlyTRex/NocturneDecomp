// Name: core_bugs.cpp_CBugs_archive_FUN_00421880
// Address: 00421880
// Address Range: [[00421880, 00421998]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_archive_FUN_00421880(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_archive_FUN_00421880(CBugs *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->count,"count");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->model_count,"modelCount");
  if (DAT_00763e88 == 1) {
    pCVar1 = this_ptr->models;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(pCVar1,&CHAR_00h_00579c6e);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)this_ptr->ground_heights);
  }
  iVar2 = 0;
  if (0 < this_ptr->model_count) {
    pCVar1 = this_ptr->models;
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ca00(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->model_count);
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->allow_chase,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->allow_swarm,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->allow_chase_event,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->allow_swarm_event,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->animate_event,"animateEvent");
  return;
}
