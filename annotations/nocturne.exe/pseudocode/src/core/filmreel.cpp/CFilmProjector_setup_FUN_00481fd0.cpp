// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0
// Address: 00481fd0
// Address Range: [[00481fd0, 0048200c]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CActorDestination *param_1)

#include "nocturne.h"

void core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(CActorDestination *param_1)

{
  core_dest_cpp_CActorDestination_setup_FUN_0044b810(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  (param_1->base).is_renderable = 1;
  param_1[1].persistent_event_flag = 0;
  param_1[1].needs_actor_search = 0;
  return;
}
