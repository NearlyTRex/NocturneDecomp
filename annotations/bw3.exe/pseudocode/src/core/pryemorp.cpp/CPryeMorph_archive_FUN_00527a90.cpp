// Name: core_pryemorp.cpp_CPryeMorph_archive_FUN_00527a90
// Address: 00527a90
// Address Range: [[00527a90, 00527ba3]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_archive_FUN_00527a90(CPryeMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_pryemorp_cpp_CPryeMorph_archive_FUN_00527a90(CPryeMorph *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_npc_cpp_CNPC_archive_FUN_00509800(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->transform_event,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->target_model_name,"targetModelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_time,"morphTime");
  if ((1 < g_CPryeMorphClassVersion) && (g_CPryeMorphClassVersion < 5)) {
    model_ptr = &(this_ptr->base).base.model;
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30(model_ptr,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bab0(&model_ptr->base,"motion state");
  }
  if (2 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->morph_size,"morphSize");
  }
  if (3 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->name_of_target,"nameOfTarget");
  }
  if (5 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->transform_wav,"transformWav");
  }
  if (6 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(this_ptr->target_class,"targetClass");
  }
  if (g_CPryeMorphClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(this_ptr->target_state,"targetState");
  return;
}
