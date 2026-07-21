// Name: core_filmreel.cpp_CFilmProjector_setup_FUN_00481fd0
// Address: 00481fd0
// Address Range: [[00481fd0, 0048200c]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(int param_1)

#include "nocturne.h"

void core_filmreel_cpp_CFilmProjector_setup_FUN_00481fd0(int param_1)

{
  core_dest_cpp_CActorDestination_setup_FUN_0044b810(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x1ec);
  *(uint *)(param_1 + 0xf8) = 1;
  *(uint *)(param_1 + 0x3d0) = 0;
  *(uint *)(param_1 + 0x3d4) = 0;
  return;
}
