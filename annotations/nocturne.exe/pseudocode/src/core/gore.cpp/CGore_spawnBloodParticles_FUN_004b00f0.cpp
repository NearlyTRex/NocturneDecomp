// Name: core_gore.cpp_CGore_spawnBloodParticles_FUN_004b00f0
// Address: 004b00f0
// Address Range: [[004b00f0, 004b013d]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0(CGore *this_ptr,CVector3f *position,CVector3f *velocity,int blood_type)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  
  if (blood_type != 2) {
    iVar1 = _DAT_01c78ce8 + 1;
    this_ptr_00 = g_CBloodParticle_ARRAY_01c78cec + _DAT_01c78ce8;
    _DAT_01c78ce8 = iVar1;
    if (0xff < iVar1) {
      _DAT_01c78ce8 = 0;
    }
    core_gore_cpp_CBloodParticle_setup_FUN_004ae070(this_ptr_00,position,velocity,blood_type);
  }
  return;
}
