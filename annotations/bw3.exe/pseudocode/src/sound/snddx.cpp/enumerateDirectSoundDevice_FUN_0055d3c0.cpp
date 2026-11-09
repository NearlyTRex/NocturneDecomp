// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0
// Address: 0055d3c0
// Address Range: [[0055d3c0, 0055d466]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(int param_1,int param_2)

#include "nocturne.h"

uint __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(int param_1,int param_2)

{
  uint uVar1;
  
  if (DAT_00604510 < 0) {
    DAT_00604510 = 0;
    DirectSoundEnumerateA((LPDSENUMCALLBACKA)0x55d0e0,(LPVOID)0x0);
  }
  if ((-1 < param_1) && (param_1 < DAT_00604510)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    *(uint *)(param_2 + 0x100) = 1;
    uVar1 = *(uint *)(param_1 + 0x2cf3d8c);
    *(uint *)(param_2 + 0x10c) = 0;
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2cf3d88);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2cf3c74);
    FUN_005a28c0(param_2,"DirectSound: %s",param_1 + 0x2cf3c88);
    return 1;
  }
  return 0;
}
