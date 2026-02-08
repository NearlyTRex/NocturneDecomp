// Name: core_vehicle.cpp_CVehicle_FUN_005e8b50
// Address: 005e8b50
// Address Range: [[005e8b50, 005e8b97]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_CVehicle_FUN_005e8b50(CVehicle *this_ptr)

#include "nocturne.h"

uint __cdecl core_vehicle_cpp_CVehicle_FUN_005e8b50(CVehicle *this_ptr)

{
  CLocation *position_source_ptr;
  uint uVar1;
  char *in_stack_00000008;
  
  position_source_ptr = &(this_ptr->base).location;
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940(&position_source_ptr->position);
  sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00((CVector3f *)(this_ptr->unk3 + 0xc));
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                    (g_CSoundPtr,&this_ptr->base,in_stack_00000008,&position_source_ptr->position);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
