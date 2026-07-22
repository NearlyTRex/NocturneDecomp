// Name: core_filmreel.cpp_CFilmReel_setup_FUN_00481ca0
// Address: 00481ca0
// Address Range: [[00481ca0, 00481d22]]
// Convention: unknown
// Signature: void core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(int param_1)

#include "nocturne.h"

void core_filmreel_cpp_CFilmReel_setup_FUN_00481ca0(int param_1)

{
  float fVar1;
  float fVar2;
  float afStack_24 [2];
  float fStack_1c;
  float fStack_18;
  float fStack_10;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,afStack_24);
  fVar1 = (fStack_18 - afStack_24[0]) * (float)0.5;
  fVar2 = (fStack_10 - fStack_1c) * (float)0.5;
  if (fVar1 < fVar2) {
    fVar2 = fVar1;
  }
  *(float *)(param_1 + 0x2f0) = fVar2;
  *(uint *)(param_1 + 0x2cc) = 0;
  return;
}
