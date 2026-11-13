// Name: sound_snddx.cpp_FUN_00556f80
// Address: 00556f80
// Address Range: [[00556f80, 0055709d]]
// Convention: unknown
// Signature: double sound_snddx_cpp_FUN_00556f80(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double sound_snddx_cpp_FUN_00556f80(uint param_1,int param_2)

{
  int *piVar1;
  uint error_code;
  int iVar2;
  char *apcStack_1bc [101];
  int iStack_28;
  char acStack_20 [16];
  
  iVar2 = *(int *)(param_2 + 0x60);
  if (((iVar2 < 1) || (0x1e < iVar2)) || (*(int *)(iVar2 * 0x24 + 0x264ac10) == 0)) {
    apcStack_1bc[0] = "DirectSoundDevice::getSfxPlaybackPos - invalid handle";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x601;
    core_main_c_FUN_004e4500();
  }
  if (*(int *)(param_2 + 0x68) != 0) {
    apcStack_1bc[0] = acStack_20;
    piVar1 = *(int **)(iVar2 * 0x24 + 0x264ac10);
    error_code = (**(code **)(*piVar1 + 0x10))(piVar1);
    if (error_code != 0) {
      sound_snddx_cpp_FUN_00554ad0(error_code);
      _sprintf((char *)apcStack_1bc,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0((char *)apcStack_1bc);
      return -1.0;
    }
    iVar2 = sound_sndmain_cpp_CSfxSample_bytesToFrames_FUN_0054fd70
                      (*(CSfxSample **)(param_2 + 0x68),iStack_28);
    return (double)iVar2;
  }
  return -1.0;
}
