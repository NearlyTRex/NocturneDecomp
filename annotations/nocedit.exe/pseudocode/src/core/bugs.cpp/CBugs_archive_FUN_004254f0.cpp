// Name: core_bugs.cpp_CBugs_archive_FUN_004254f0
// Address: 004254f0
// Address Range: [[004254f0, 00425608]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_archive_FUN_004254f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_archive_FUN_004254f0(CBugs *this_ptr)

{
  CKeyFramedModelInstance *pCVar1;
  int iVar2;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->count,"count");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->model_count,"modelCount");
  if (g_ActorReadingMode == 1) {
    pCVar1 = this_ptr->models;
    do {
      core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
                (pCVar1,&s_EmptyChar_00616d44);
      pCVar1 = pCVar1 + 1;
    } while (pCVar1 != (CKeyFramedModelInstance *)this_ptr->ground_heights);
  }
  iVar2 = 0;
  if (0 < this_ptr->model_count) {
    pCVar1 = this_ptr->models;
    do {
      iVar2 = iVar2 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b8f0(pCVar1,"modelName");
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->model_count);
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->allow_chase,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->allow_swarm,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->allow_chase_event,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->allow_swarm_event,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->animate_event,"animateEvent");
  return;
}
