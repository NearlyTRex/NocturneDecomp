// Name: core_lever.cpp_CLever_archive_FUN_00504e80
// Address: 00504e80
// Address Range: [[00504e80, 0050505a]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_archive_FUN_00504e80(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_archive_FUN_00504e80(CLever *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040c1c0(&this_ptr->base);
  pcVar3 = local_d4;
  if (g_ActorReadingMode == 1) {
    core_actor_cpp_archiveString_FUN_0040b5c0(local_d4,"modelName");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(&this_ptr->model,local_d4);
  }
  else {
    pcVar2 = (this_ptr->model).model_name;
    do {
      cVar1 = *pcVar2;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    core_actor_cpp_archiveString_FUN_0040b5c0(local_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0((int *)&this_ptr->lever_type,"leverType");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->on_event,"onEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->off_event,"offEvent");
  core_actor_cpp_archiveString_FUN_0040b5c0(this_ptr->sound,"sound");
  core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->param,"param");
  if (1 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->momentary_flag,"momentaryFlag");
  }
  if (2 < g_CLeverClassVersion) {
    core_actor_cpp_archiveActor_FUN_0040b870
              ((CDemonActor *)&this_ptr->linked_lever,"linkedLever");
  }
  if (3 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0
              (&this_ptr->end_vertex_index,"endVertexIndex");
  }
  if (4 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->moving,"moving");
    core_actor_cpp_archiveFloat_FUN_0040b770(&this_ptr->move_to_pct,"moveToPct");
  }
  if (5 < g_CLeverClassVersion) {
    core_actor_cpp_archiveRules_FUN_0040c000(&this_ptr->rule,"rules");
  }
  if (6 < g_CLeverClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->allowed_sides,"allowedSides");
  }
  if (g_CLeverClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b7f0(&this_ptr->enable_collision,"enableCollision")
  ;
  return;
}
