// Name: core_bugs.cpp_CBugs_archive_FUN_0041f7c0
// Address: 0041f7c0
// Address Range: [[0041f7c0, 0041f8d8]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_archive_FUN_0041f7c0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_archive_FUN_0041f7c0(CBugs *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->count,"?count" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->model_count,"modelCount");
  if (DAT_007bc038 == 1) {
    pCVar1 = this_ptr->models;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(pCVar1,&DAT_005cc972);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)this_ptr->ground_heights);
  }
  iVar2 = 0;
  if (0 < this_ptr->model_count) {
    pCVar1 = this_ptr->models;
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->model_count);
  }
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->allow_chase,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b960(&this_ptr->allow_swarm,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->allow_chase_event,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->allow_swarm_event,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b730(this_ptr->animate_event,"animateEvent");
  return;
}
