// Name: core_lever.cpp_CLever_archive_FUN_004c66f0
// Address: 004c66f0
// Address Range: [[004c66f0, 004c68ca]]
// Convention: __cdecl
// Signature: void __cdecl core_lever_cpp_CLever_archive_FUN_004c66f0(CLever *this_ptr)

#include "nocturne.h"

void __cdecl core_lever_cpp_CLever_archive_FUN_004c66f0(CLever *this_ptr)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char local_d4 [200];
  
  core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(&this_ptr->base);
  pcVar3 = local_d4;
  if (DAT_00763e88 == 1) {
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"modelName");
    core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(&this_ptr->model,local_d4);
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
    core_actor_cpp_archiveString_FUN_0040c6d0(local_d4,"modelName");
  }
  core_actor_cpp_archiveInteger_FUN_0040c900((int *)&this_ptr->lever_type,"leverType");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->on_event,"onEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->off_event,"offEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(this_ptr->sound,"sound");
  core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->param,"param");
  if (1 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->momentary_flag,"momentaryFlag");
  }
  if (2 < INT_005bacbc) {
    core_actor_cpp_archiveActor_FUN_0040c980
              ((CDemonActor **)&this_ptr->linked_lever,"linkedLever");
  }
  if (3 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900
              (&this_ptr->end_vertex_index,"endVertexIndex");
  }
  if (4 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->moving,"moving");
    core_actor_cpp_archiveFloat_FUN_0040c880(&this_ptr->move_to_pct,"moveToPct");
  }
  if (5 < INT_005bacbc) {
    core_actor_cpp_archiveRules_FUN_0040d110(&this_ptr->rule,"rules");
  }
  if (6 < INT_005bacbc) {
    core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->allowed_sides,"allowedSides");
  }
  if (INT_005bacbc < 8) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(&this_ptr->enable_collision,"enableCollision")
  ;
  return;
}
