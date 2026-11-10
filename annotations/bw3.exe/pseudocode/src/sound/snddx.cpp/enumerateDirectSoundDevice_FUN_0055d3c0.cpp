// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_0055d3c0
// Address: 0055d3c0
// Address Range: [[0055d3c0, 0055d466]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(int param_1,char *param_2)

#include "nocturne.h"

uint __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0(int param_1,char *param_2)

{
  uint uVar1;
  
  if (DAT_00604510 < 0) {
    DAT_00604510 = 0;
    DirectSoundEnumerateA((LPDSENUMCALLBACKA)0x55d0e0,(LPVOID)0x0);
  }
  if ((-1 < param_1) && (param_1 < DAT_00604510)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    param_2[0x100] = '\x01';
    param_2[0x101] = '\0';
    param_2[0x102] = '\0';
    param_2[0x103] = '\0';
    uVar1 = *(uint *)(param_1 + 0x2cf3d8c);
    param_2[0x10c] = '\0';
    param_2[0x10d] = '\0';
    param_2[0x10e] = '\0';
    param_2[0x10f] = '\0';
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2cf3d88);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2cf3c74);
    _sprintf(param_2,"DirectSound: %s");
    return 1;
  }
  return 0;
}
