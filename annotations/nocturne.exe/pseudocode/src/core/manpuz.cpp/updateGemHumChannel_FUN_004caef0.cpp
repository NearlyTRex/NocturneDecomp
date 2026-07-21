// Name: core_manpuz.cpp_updateGemHumChannel_FUN_004caef0
// Address: 004caef0
// Address Range: [[004caef0, 004cb00e]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 param_5,float *param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *param_1,float param_2,float param_3,uint *param_4,uint param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_2 - *param_1 < -param_3) {
    param_3 = *param_1 - param_3;
  }
  else {
    if (param_2 - *param_1 <= param_3) {
      uVar5 = 1;
      *param_1 = param_2;
      goto LAB_004caf37;
    }
    param_3 = *param_1 + param_3;
  }
  *param_1 = param_3;
LAB_004caf37:
  fVar1 = *param_1;
  fVar2 = (float)_DAT_00587fc2;
  if (fVar1 * fVar2 <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_00527230();
    return uVar5;
  }
  iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
  if (iVar3 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_00526e10
              (*param_4,(double)*param_6,(double)param_6[1],(double)param_6[2]);
    sound_sndmain_cpp_setSfxVolume_FUN_005270d0(*param_4,fVar1 * fVar2);
    return uVar5;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005260f0();
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_00525f50
            ((double)*param_6,(double)param_6[1],(double)param_6[2]);
  uVar4 = sound_sndmain_cpp_startSfx_FUN_005265a0();
  *param_4 = uVar4;
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar5;
}
