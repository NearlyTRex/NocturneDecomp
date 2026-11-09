// Name: core_vehicle.cpp_FUN_00584d90
// Address: 00584d90
// Address Range: [[00584d90, 00584dd7]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_FUN_00584d90(CVehicle *this_ptr,char *sound_name)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_FUN_00584d90(CVehicle *this_ptr,char *sound_name)

{
  uint uVar1;
  
  sound_sndmain_cpp_FUN_00550450();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00550170((CVector3f *)&this_ptr->field_0x20);
  sound_sndmain_cpp_setNextSfxTrackedVelocity1_FUN_00550210((CVector3f *)&this_ptr->field_0x11bc);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_0055ae80
                    (0x0264B290,(CDemonActor *)this_ptr,sound_name,
                     (CVector3f *)&this_ptr->field_0x20);
  sound_sndmain_cpp_FUN_005504d0();
  return uVar1;
}
