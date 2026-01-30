// Name: core_vehicle.cpp_FUN_005e8b50
// Address: 005e8b50
// Address Range: [[005e8b50, 005e8b97]]
// Convention: __cdecl
// Signature: uint __cdecl core_vehicle_cpp_FUN_005e8b50(void)

#include "nocturne.h"

/* Signature: byte actors_other_vehicle.cpp_FUN_005e8b50(uint param_1, uint
   param_2) */

uint __cdecl core_vehicle_cpp_FUN_005e8b50(void)

{
  uint uVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000008;
  
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940
            (&(in_stack_00000004->location).position);
  sound_sndmain_cpp_setNextSfxTrackedVelocity_FUN_005a8a00
            ((CVector3f *)&in_stack_00000004[0xc].orient_matrix.m[0].y);
  uVar1 = core_sound_cpp_CSound_playTrackedActorSound_FUN_005b3a70
                    (g_CSoundPtr,in_stack_00000004,in_stack_00000008,
                     &(in_stack_00000004->location).position);
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar1;
}
