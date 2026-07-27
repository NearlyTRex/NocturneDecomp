// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_00523ba0
// Address: 00523ba0
// Address Range: [[00523ba0, 00523ca1]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(int param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_CSfxSample_lock_FUN_00523ba0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x154) != 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x74d;
    core_main_c_FUN_004c8440("SfxSample::lock - already locked!");
  }
  if ((param_2 < 0) || (*(int *)(param_1 + 0x138) < param_2 + param_3)) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x752;
    core_main_c_FUN_004c8440("SfxSample::lock - invalid region");
  }
  if (*(int *)(param_1 + 0x130) == 0) {
    if (*(int *)(param_1 + 0x120) == 0) {
      PTR_01cc4800 = "..\\sound\\sndmain.cpp";
      INT_01cc4804 = 0x759;
      core_main_c_FUN_004c8440("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(param_1);
    iVar1 = iVar1 * param_2 + *(int *)(param_1 + 0x120);
  }
  else {
    if (_DAT_02dc8318 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*_DAT_02dc8318 + 0x34))
                      (_DAT_02dc8318,*(uint *)(param_1 + 0x130),param_2,param_3,param_1);
  }
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x154) = param_3;
    *(int *)(param_1 + 0x150) = param_2;
  }
  return iVar1;
}
