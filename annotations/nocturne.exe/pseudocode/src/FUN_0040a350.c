// Name: FUN_0040a350
// Address: 0040a350
// Address Range: [[0040a350, 0040a37f]]
// Convention: unknown
// Signature: undefined4 FUN_0040a350(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint FUN_0040a350(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = core_sound_cpp_CSound_playTrackedActorSoundWithDelay_FUN_0052eb50
                    (0x02DC9450,param_1,param_2,param_1 + 0x20,param_3);
  return uVar1;
}
