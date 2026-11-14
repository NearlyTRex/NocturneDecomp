// Name: core_gore.cpp_CGore_spawnBloodParticles_FUN_004c9730
// Address: 004c9730
// Address Range: [[004c9730, 004c9781]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004c9730(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  
  if (blood_type != BLOOD_TYPE_NONE) {
    iVar1 = _DAT_01cb82f0 + 1;
    this_ptr_00 = g_BloodParticles + _DAT_01cb82f0;
    _DAT_01cb82f0 = iVar1;
    if (0xff < iVar1) {
      _DAT_01cb82f0 = 0;
    }
    core_gore_cpp_CBloodParticle_setup_FUN_004c7460(this_ptr_00,position,velocity,blood_type);
  }
  return;
}
