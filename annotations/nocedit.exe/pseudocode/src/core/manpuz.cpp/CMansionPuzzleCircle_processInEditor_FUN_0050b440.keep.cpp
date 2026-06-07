// Name: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
// MANUAL RECONSTRUCTION
// Address Range: [[0050b440, 0050b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

{
  CVector3f *pCVar2;
  float fVar9;
  CSlew CStack_78;
  CSlew local_5c;
  CSlew local_40;
  CSlew local_24;
  CVector3f *pCVar1;
  float fVar2;
  float fVar7;
  float fVar8;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (g_MansionPuzzleSlewType == 1) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_40);
    if (&local_40 != (CSlew *)&this_ptr->emitter_pos) {
      local_40.position = (this_ptr->emitter_pos).f;
    }
    local_40.orientation.vec.z = 0.0;
    local_40.orientation.vec.y = 0.0;
    local_40.orientation.vec.x = 0.0;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_40);
    if ((CSlew *)&this_ptr->emitter_pos != &local_40) {
      (this_ptr->emitter_pos).f = local_40.position;
    }
  }
  else if (g_MansionPuzzleSlewType == 2) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_24);
    if (&local_24 != (CSlew *)&this_ptr->gem_pos) {
      local_24.position = this_ptr->gem_pos;
    }
    if (&local_24.orientation != &this_ptr->gem_orient) {
      local_24.orientation.vec = (this_ptr->gem_orient).vec;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_24);
    if ((CSlew *)&this_ptr->gem_pos != &local_24) {
      this_ptr->gem_pos = local_24.position;
    }
    if (&this_ptr->gem_orient != &local_24.orientation) {
      (this_ptr->gem_orient).vec = local_24.orientation.vec;
    }
  }
  else if (g_MansionPuzzleSlewType == 3) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&CStack_78);
    if ((SReflector *)&CStack_78 != this_ptr->reflectors) {
      CStack_78.position = this_ptr->reflectors[0].start_position;
    }
    pCVar2 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)&CStack_78.orientation != pCVar2) {
      CStack_78.orientation.vec = *pCVar2;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_78);
    if (this_ptr->reflectors != (SReflector *)&CStack_78) {
      this_ptr->reflectors[0].start_position = CStack_78.position;
    }
    pCVar2 = &this_ptr->reflectors[0].rotation;
    if (pCVar2 != (CVector3f *)&CStack_78.orientation) {
      *pCVar2 = CStack_78.orientation.vec;
    }
    this_ptr->reflectors[0].interp_factor = 0.0;
    fVar9 = this_ptr->reflectors[0].start_position.z;
    this_ptr->reflectors[0].target_position.x = this_ptr->reflectors[0].start_position.x;
    this_ptr->reflectors[0].target_position.z = fVar9;
  }
  else if (g_MansionPuzzleSlewType == 4) {
    core_slew_cpp_CSlew_init_FUN_005a2060(&local_5c);
    pCVar1 = &this_ptr->reflectors[0].target_position;
    if (&local_5c != (CSlew *)pCVar1) {
      local_5c.position = *pCVar1;
    }
    pCVar2 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)&local_5c.orientation != pCVar2) {
      local_5c.orientation.vec = *pCVar2;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_5c);
    pCVar2 = &this_ptr->reflectors[0].target_position;
    if ((CSlew *)pCVar2 != &local_5c) {
      *pCVar2 = local_5c.position;
    }
    pCVar2 = &this_ptr->reflectors[0].rotation;
    if (pCVar2 != (CVector3f *)&local_5c.orientation) {
      *pCVar2 = local_5c.orientation.vec;
    }
    this_ptr->reflectors[0].interp_factor = 1.0;
    fVar2 = this_ptr->reflectors[0].target_position.z;
    this_ptr->reflectors[0].start_position.x = this_ptr->reflectors[0].target_position.x;
    this_ptr->reflectors[0].start_position.z = fVar2;
  }
  else {
    g_MansionPuzzleSlewType = 0;
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  fVar9 = this_ptr->reflectors[0].start_position.y;
  fVar3 = this_ptr->reflectors[0].start_position.x;
  fVar4 = this_ptr->reflectors[0].start_position.z;
  fVar5 = this_ptr->reflectors[0].target_position.y;
  fVar6 = this_ptr->reflectors[0].target_position.x;
  fVar7 = this_ptr->reflectors[0].target_position.z;
  fVar8 = this_ptr->reflectors[0].interp_factor;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->reflectors[1].start_position.y = fVar9;
  this_ptr->reflectors[1].start_position.z = fVar4;
  this_ptr->reflectors[1].target_position.y = fVar5;
  this_ptr->reflectors[1].target_position.z = fVar7;
  this_ptr->reflectors[1].interp_factor = fVar8;
  fVar9 = (this_ptr->base).orient.vec.z;
  this_ptr->reflectors[1].start_position.x = -fVar3;
  this_ptr->reflectors[1].target_position.x = -fVar6;
  (this_ptr->base).orient.vec.x = fVar9;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
