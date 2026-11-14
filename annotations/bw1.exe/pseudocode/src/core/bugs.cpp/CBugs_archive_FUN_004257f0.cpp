// Name: core_bugs.cpp_CBugs_archive_FUN_004257f0
// Address: 004257f0
// Address Range: [[004257f0, 00425908]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_archive_FUN_004257f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_archive_FUN_004257f0(CBugs *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->count,"?count" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->model_count,"modelCount");
  if (DAT_007c3038 == 1) {
    pCVar1 = this_ptr->models;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00468950(pCVar1,&DAT_005d5061);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)this_ptr->ground_heights);
  }
  iVar2 = 0;
  if (0 < this_ptr->model_count) {
    pCVar1 = this_ptr->models;
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b770(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->model_count);
  }
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->allow_chase,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->allow_swarm,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->allow_chase_event,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->allow_swarm_event,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b440(this_ptr->animate_event,"animateEvent");
  return;
}
