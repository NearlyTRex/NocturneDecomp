// Name: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005a89c0
// Address: 005a89c0
// Address Range: [[005a89c0, 005a8a07]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0(CVehicle *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005a89c0(CVehicle *this_ptr,char *sound_name)

{
  CLocation *position_source_ptr;
  uint uVar1;
  
  position_source_ptr = &(this_ptr->base).location;
  sound_sndmain_cpp_pushSfxOptions_FUN_00572ac0();
  sound_sndmain_cpp_FUN_005727e0(&position_source_ptr->position);
  sound_sndmain_cpp_FUN_00572880(&this_ptr->sound_velocity);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0057d8d0
                    (0x02C82A60,&this_ptr->base,sound_name,&position_source_ptr->position);
  sound_sndmain_cpp_popSfxOptions_FUN_00572b40();
  return uVar1;
}
