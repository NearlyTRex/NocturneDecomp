// Name: sound_snddx.cpp_FUN_0055bd50
// Address: 0055bd50
// Address Range: [[0055bd50, 0055be29]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055bd50(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0055bd50(uint param_1,int param_2)

{
  uint error_code;
  char *pcVar1;
  int *piStack_1ac;
  char *pcStack_1a8;
  int iStack_1a4;
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2cf49fc) < 1)) {
    iStack_1a4 = param_2;
    pcStack_1a8 = "DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x45c;
    piStack_1ac = (int *)0x55bd8f;
    core_main_c_FUN_004e4330();
  }
  param_2 = param_2 * 0x18;
  pcStack_1a8 = *(char **)(param_2 + 0x2cf4a04);
  if (pcStack_1a8 != (char *)0x0) {
    iStack_1a4 = *(uint *)(param_2 + 0x2cf4a08);
    piStack_1ac = *(int **)(param_2 + 0x2cf49f4);
    error_code = (**(code **)(*piStack_1ac + 0x4c))();
    if (error_code != 0) {
      pcVar1 = sound_snddx_cpp_FUN_0055a670(error_code);
      FUN_005a28c0
                (&piStack_1ac,"DirectSux: Unable to %s.  (%s)","Unlock hw sample buffer",
                 pcVar1);
      sound_sndmain_cpp_FUN_0055a560(&piStack_1ac);
    }
    *(uint *)(param_2 + 0x2cf4a04) = 0;
  }
  return;
}
