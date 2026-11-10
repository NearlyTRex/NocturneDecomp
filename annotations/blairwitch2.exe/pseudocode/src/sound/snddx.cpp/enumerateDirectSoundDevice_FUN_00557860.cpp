// Name: sound_snddx.cpp_enumerateDirectSoundDevice_FUN_00557860
// Address: 00557860
// Address Range: [[00557860, 00557906]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(int param_1,char *param_2)

#include "nocturne.h"

uint __cdecl sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860(int param_1,char *param_2)

{
  uint uVar1;
  
  if (DAT_0061bf80 < 0) {
    DAT_0061bf80 = 0;
    DirectSoundEnumerateA((LPDSENUMCALLBACKA)0x557540,(LPVOID)0x0);
  }
  if ((-1 < param_1) && (param_1 < DAT_0061bf80)) {
    *(int *)(param_2 + 0x104) = param_1;
    param_1 = param_1 * 0x11c;
    param_2[0x100] = '\x01';
    param_2[0x101] = '\0';
    param_2[0x102] = '\0';
    param_2[0x103] = '\0';
    uVar1 = *(uint *)(param_1 + 0x264998c);
    param_2[0x10c] = '\0';
    param_2[0x10d] = '\0';
    param_2[0x10e] = '\0';
    param_2[0x10f] = '\0';
    *(uint *)(param_2 + 0x108) = uVar1;
    *(uint *)(param_2 + 0x114) = *(uint *)(param_1 + 0x2649988);
    *(uint *)(param_2 + 0x110) = *(uint *)(param_1 + 0x2649874);
    _sprintf(param_2,"DirectSound: %s");
    return 1;
  }
  return 0;
}
