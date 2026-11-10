// Name: core_vehicle.cpp_CVehicle_playTrackedSound_FUN_00584d90
// Address: 00584d90
// Address Range: [[00584d90, 00584dd7]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_playTrackedSound_FUN_00584d90(CVehicle *this_ptr,char *sound_name)

{
  byte *position_source_ptr;
  uint uVar1;
  
  position_source_ptr = &(this_ptr->base).field_0x20;
  sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)position_source_ptr);
  sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210(&this_ptr->sound_velocity);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                    (0x0264B290,&this_ptr->base,sound_name,(CVector3f *)position_source_ptr);
  sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
  return uVar1;
}
