// Name: core_frankgen.cpp_FUN_004aca40
// Address: 004aca40
// Address Range: [[004aca40, 004aca8b]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004aca40(int param_1,float param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_frankgen_cpp_FUN_004aca40(int param_1,float param_2,uint param_3)

{
  if ((_DAT_01cb0620 <= param_2) && (param_2 < *(float *)(param_1 + 0x2b8))) {
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)(param_1 + 0x5ec));
    sound_sndmain_cpp_FUN_005506b0(param_3);
    sound_sndmain_cpp_FUN_005504d0();
    return;
  }
  return;
}
