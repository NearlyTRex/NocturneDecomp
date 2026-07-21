// Name: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0
// Address: 0054f7a0
// Address Range: [[0054f7a0, 0054f7e7]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(int param_1,uint param_2)

{
  uint uVar1;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(param_1 + 0x20);
  sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(param_1 + 0x1058);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                    (0x02DC9450,param_1,param_2,param_1 + 0x20);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
