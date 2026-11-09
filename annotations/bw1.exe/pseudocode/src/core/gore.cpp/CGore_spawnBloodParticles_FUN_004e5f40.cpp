// Name: core_gore.cpp_CGore_spawnBloodParticles_FUN_004e5f40
// Address: 004e5f40
// Address Range: [[004e5f40, 004e5f91]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40(CGore *this_ptr,CVector3f *position,CVector3f *velocity,EBloodType blood_type)

{
  CBloodParticle *this_ptr_00;
  int iVar1;
  
  if (blood_type != BLOOD_TYPE_NONE) {
    iVar1 = _DAT_01cd0ea8 + 1;
    this_ptr_00 = g_BloodParticles + _DAT_01cd0ea8;
    _DAT_01cd0ea8 = iVar1;
    if (0xff < iVar1) {
      _DAT_01cd0ea8 = 0;
    }
    core_gore_cpp_FUN_004e3e20(this_ptr_00,position,velocity,blood_type);
  }
  return;
}
