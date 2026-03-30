// Name: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_005e8b50
// Address: 005e8b50
// Address Range: [[005e8b50, 005e8b97]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005e8b50(CVehicle *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_005e8b50(CVehicle *this_ptr,char *sound_name)

{
  CLocation *position_source_ptr;
  uint uVar1;
  
  position_source_ptr = &(this_ptr->base).location;
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&position_source_ptr->position);
  sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_005a8a00(&this_ptr->sound_velocity);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                    (g_CSoundPtr,&this_ptr->base,sound_name,&position_source_ptr->position);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
