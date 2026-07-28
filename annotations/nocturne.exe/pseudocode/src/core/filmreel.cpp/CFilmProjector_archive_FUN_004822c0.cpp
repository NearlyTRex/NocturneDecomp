// Name: core_filmreel.cpp_CFilmProjector_archive_FUN_004822c0
// Address: 004822c0
// Address Range: [[004822c0, 00482304]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(CActorDestination *param_1)

#include "nocturne.h"

void core_filmreel_cpp_CFilmProjector_archive_FUN_004822c0(CActorDestination *param_1)

{
  core_dest_cpp_CActorDestination_archive_FUN_0044bb10(param_1);
  if (INT_005b801c < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040c980((CDemonActor **)&param_1[1].triggered,"keyReel")
  ;
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1[1].what_event,"keyEvent");
  return;
}
