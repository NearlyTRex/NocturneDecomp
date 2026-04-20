// Name: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
// Address: 005b2ca0
// MANUAL RECONSTRUCTION
// Address Range: [[005b2ca0, 005b2cdc]]
// Convention: __watcallRegister
// Signature: void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)

#include "nocturne.h"

void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)

{
  int iVar2;

  iVar2 = 0;
  do {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainNoiseArray[iVar2].sfx_handle);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 10);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  return;
}
