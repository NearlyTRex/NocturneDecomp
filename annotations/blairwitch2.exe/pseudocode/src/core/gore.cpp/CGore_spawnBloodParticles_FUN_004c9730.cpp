// Name: core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
// Address: 004c9730
// Address Range: [[004c9730, 004c9781]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  
  if (blood_type != BLOOD_TYPE_NONE) {
    iVar1 = g_BloodParticleIndex + 1;
    this_ptr_00 = g_BloodParticles + g_BloodParticleIndex;
    g_BloodParticleIndex = iVar1;
    if (0xff < iVar1) {
      g_BloodParticleIndex = 0;
    }
    core_gore_cpp_CBloodParticle_setup_FUN_004c7460(this_ptr_00,position,velocity,blood_type);
  }
  return;
}
