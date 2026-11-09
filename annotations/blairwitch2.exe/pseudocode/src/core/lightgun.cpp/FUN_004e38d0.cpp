// Name: core_lightgun.cpp_FUN_004e38d0
// Address: 004e38d0
// Address Range: [[004e38d0, 004e3ac3]]
// Convention: unknown
// Signature: void core_lightgun_cpp_FUN_004e38d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_lightgun_cpp_FUN_004e38d0(int param_1,uint param_2,uint param_3,float param_4)

{
  float base_frequency;
  float fVar1;
  int iVar2;
  CDemonFilter *filter_ptr;
  uint uVar3;
  
  core_weapon_cpp_FUN_00589c80(param_1,param_2);
  fVar1 = core_inv_cpp_FUN_004dcfb0
                    ((CInventory *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2437c),_DAT_005f95d0
                    );
  fVar1 = (_DAT_005f95d0 / fVar1) * param_4 + *(float *)(param_1 + 0x6dc);
  *(float *)(param_1 + 0x6dc) = fVar1;
  if (_DAT_005f95d0 < fVar1) {
    *(float *)(param_1 + 0x6dc) = _DAT_005f95d0;
  }
  *(float *)(param_1 + 0x6e0) = *(float *)(param_1 + 0x6dc) / _DAT_005f95d0;
  if (*(int *)(param_1 + 0x430) == 2) {
    fVar1 = (_DAT_005f95dc - 0x40000000) * *(float *)(param_1 + 0x6e0) + 0x40000000;
    base_frequency = _DAT_005f95e0 + (_DAT_005f95e4 - _DAT_005f95e0) * *(float *)(param_1 + 0x6e0);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x6d8));
    if (iVar2 == 0) {
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)(param_1 + 0x20));
      sound_sndmain_cpp_FUN_00550270(fVar1);
      sound_sndmain_cpp_FUN_00550290(base_frequency);
      uVar3 = sound_sndmain_cpp_FUN_005506b0("@cre-charge.wav" + 1);
      *(uint *)(param_1 + 0x6d8) = uVar3;
      sound_sndmain_cpp_FUN_005504d0();
    }
    else {
      sound_sndmain_cpp_FUN_00550f20(*(uint *)(param_1 + 0x6d8),fVar1);
      sound_sndmain_cpp_FUN_00550f50(*(uint *)(param_1 + 0x6d8),base_frequency);
    }
    core_lightgun_cpp_FUN_004e2bf0(param_1);
    if (*(int *)(param_1 + 0x6d4) != 0) {
      g_CDemonLightInstance._7376_4_ = 1;
      filter_ptr = (CDemonFilter *)
                   core_dfilter_cpp_FUN_00447660(g_CFilterCachePtr,"spark2.raw",0);
      core_dlight_cpp_CDemonLight_applyFilter_FUN_0044b600(&g_CDemonLightInstance,filter_ptr,0,0,0);
      core_weather_cpp_FUN_0058aa30(0x02661F80,0.1,0);
    }
    core_set_cpp_FUN_00530630(g_CDemonSetPtr,&g_CDemonLightInstance);
    *(uint *)(param_1 + 0x6d4) = 0;
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x6d8));
  *(uint *)(param_1 + 0x6d4) = 0;
  return;
}
