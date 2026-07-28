// Name: core_sound.cpp_stopTrainSounds_FUN_0052dcc0
// Address: 0052dcc0
// Address Range: [[0052dcc0, 0052dcfc]]
// Convention: unknown
// Signature: void core_sound_cpp_stopTrainSounds_FUN_0052dcc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_sound_cpp_stopTrainSounds_FUN_0052dcc0(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = (uint *)(iVar2 + 0x2dc9cb0);
    iVar2 = iVar2 + 0x10;
    sound_sndmain_cpp_killSfx_FUN_00527230(*puVar1);
  } while (iVar2 != 0xa0);
  sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d58);
  sound_sndmain_cpp_killSfx_FUN_00527230(_DAT_02dc9d5c);
  return;
}
