// Name: core_bugs.cpp_CBugs_archive_FUN_00421960
// Address: 00421960
// Address Range: [[00421960, 00421a98]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_archive_FUN_00421960(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_archive_FUN_00421960(CBugs *this_ptr)

{
  CKeyFramedModelInstance *model_ptr;
  int iVar1;
  
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->count,"?count" + 1);
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->model_count,"modelCount");
  if (DAT_007df9b8 == 1) {
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
              (this_ptr->models,&DAT_005b7782);
  }
  iVar1 = 0;
  if (0 < this_ptr->model_count) {
    model_ptr = this_ptr->models;
    do {
      iVar1 = iVar1 + 1;
      core_actor_cpp_archiveKeyframedModelInstance_FUN_0040b9b0(model_ptr,"modelName");
      model_ptr = model_ptr + 1;
    } while (iVar1 < this_ptr->model_count);
  }
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->allow_chase,"allowChase");
  core_actor_cpp_archiveInteger_FUN_0040b8b0(&this_ptr->allow_swarm,"allowSwarm");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->allow_chase_event,"allowChaseEvent");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->allow_swarm_event,"allowSwarmEvent");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->animate_event,"animateEvent");
  if (1 < g_CBugsClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&this_ptr->remove_bug_timer,"remove_bug_timer");
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->max_life_timer,"max_life_timer");
    return;
  }
  return;
}
