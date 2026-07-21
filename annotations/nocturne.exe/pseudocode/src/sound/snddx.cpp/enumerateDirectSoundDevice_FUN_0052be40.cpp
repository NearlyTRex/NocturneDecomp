// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0052be40
// Address: 0052be40
// Address Range: [[0052be40, 0052bee6]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(int param_1,int param_2)

#include "nocturne.h"

uint sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_005bed40 < 0) {
    DAT_005bed40 = 0;
    Ordinal_2(&LAB_0052bbd0,0);
  }
  if ((-1 < param_1) && (param_1 < DAT_005bed40)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    *(uint *)(param_2 + 0x100) = 1;
    uVar1 = *(uint *)(param_1 + 0x2dc85dc);
    *(uint *)(param_2 + 0x10c) = 0;
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2dc85d8);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2dc84c4);
    _sprintf(param_2,"DirectSound: %s",param_1 + 0x2dc84d8);
    return 1;
  }
  return 0;
}
