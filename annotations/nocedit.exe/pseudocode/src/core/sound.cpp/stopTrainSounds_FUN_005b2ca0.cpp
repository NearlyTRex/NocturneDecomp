// Name: core_sound.cpp_stopTrainSounds_FUN_005b2ca0
// Address: 005b2ca0
// Address Range: [[005b2ca0, 005b2cdc]]
// Convention: __watcallRegister
// Signature: void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)

#include "nocturne.h"

void __watcallRegister core_sound_cpp_stopTrainSounds_FUN_005b2ca0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = (uint *)((int)&g_TrainNoiseArray[0].sfx_handle + iVar2);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainRailNoiseHandle);
  sound_sndmain_cpp_killSfx_FUN_005a9c40(g_TrainExteriorAmbientHandle);
  return;
}
