// Name: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_0054f7a0
// Address: 0054f7a0
// Address Range: [[0054f7a0, 0054f7e7]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(CVehicle *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_0054f7a0(CVehicle *this_ptr,char *sound_name)

{
  CLocation *position_source_ptr;
  uint uVar1;
  
  position_source_ptr = &(this_ptr->base).location;
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(&position_source_ptr->position);
  sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00526090(&this_ptr->sound_velocity);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0052ea90
                    (0x02DC9450,&this_ptr->base,sound_name,&position_source_ptr->position);
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return uVar1;
}
