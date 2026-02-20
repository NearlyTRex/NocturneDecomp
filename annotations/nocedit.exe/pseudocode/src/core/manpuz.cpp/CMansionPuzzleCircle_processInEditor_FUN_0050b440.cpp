// Name: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
// Address Range: [[0050b440, 0050b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: core_slew.cpp_CSlew_init_FUN_005a2060 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  CSlew CStack_78;
  CSlew local_5c;
  CSlew local_40;
  CSlew local_24;
  
  if (g_MansionPuzzleSlewType == 1) {
    local_40.position.z = 0.0;
    local_40.position.y = 0.0;
    local_40.position.x = 0.0;
    local_40.slew_rate = 28.0;
    if (&local_40 != (CSlew *)&this_ptr->emitter_pos) {
      local_40.position.x = (this_ptr->emitter_pos).x;
      local_40.position.y = (this_ptr->emitter_pos).y;
      local_40.position.z = (this_ptr->emitter_pos).z;
    }
    local_40.roll = 0.0;
    local_40.yaw = 0.0;
    local_40.pitch = 0.0;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_40);
    if ((CSlew *)&this_ptr->emitter_pos != &local_40) {
      (this_ptr->emitter_pos).x = local_40.position.x;
      (this_ptr->emitter_pos).y = local_40.position.y;
      (this_ptr->emitter_pos).z = local_40.position.z;
    }
  }
  else if (g_MansionPuzzleSlewType == 2) {
    local_24.position.z = 0.0;
    local_24.position.y = 0.0;
    local_24.position.x = 0.0;
    local_24.roll = 0.0;
    local_24.yaw = 0.0;
    local_24.pitch = 0.0;
    local_24.slew_rate = 28.0;
    if (&local_24 != (CSlew *)&this_ptr->gem_pos) {
      local_24.position.x = (this_ptr->gem_pos).x;
      local_24.position.y = (this_ptr->gem_pos).y;
      local_24.position.z = (this_ptr->gem_pos).z;
    }
    if ((UOrientationVector *)&local_24.pitch != &this_ptr->gem_orient) {
      local_24.pitch = (this_ptr->gem_orient).vec.x;
      local_24.yaw = (this_ptr->gem_orient).vec.y;
      local_24.roll = (this_ptr->gem_orient).vec.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_24);
    if ((CSlew *)&this_ptr->gem_pos != &local_24) {
      (this_ptr->gem_pos).x = local_24.position.x;
      (this_ptr->gem_pos).y = local_24.position.y;
      (this_ptr->gem_pos).z = local_24.position.z;
    }
    if (&this_ptr->gem_orient != (UOrientationVector *)&local_24.pitch) {
      (this_ptr->gem_orient).vec.x = local_24.pitch;
      (this_ptr->gem_orient).vec.y = local_24.yaw;
      (this_ptr->gem_orient).vec.z = local_24.roll;
    }
  }
  else if (g_MansionPuzzleSlewType == 3) {
    CStack_78.position.z = 0.0;
    CStack_78.position.y = 0.0;
    CStack_78.position.x = 0.0;
    CStack_78.roll = 0.0;
    CStack_78.yaw = 0.0;
    CStack_78.pitch = 0.0;
    CStack_78.slew_rate = 28.0;
    if ((SReflector *)&CStack_78 != this_ptr->reflectors) {
      CStack_78.position.x = this_ptr->reflectors[0].start_position.x;
      CStack_78.position.y = this_ptr->reflectors[0].start_position.y;
      CStack_78.position.z = this_ptr->reflectors[0].start_position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)&CStack_78.pitch != pCVar1) {
      CStack_78.pitch = pCVar1->x;
      CStack_78.yaw = this_ptr->reflectors[0].rotation.y;
      CStack_78.roll = this_ptr->reflectors[0].rotation.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&CStack_78);
    if (this_ptr->reflectors != (SReflector *)&CStack_78) {
      this_ptr->reflectors[0].start_position.x = CStack_78.position.x;
      this_ptr->reflectors[0].start_position.y = CStack_78.position.y;
      this_ptr->reflectors[0].start_position.z = CStack_78.position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if (pCVar1 != (CVector3f *)&CStack_78.pitch) {
      pCVar1->x = CStack_78.pitch;
      this_ptr->reflectors[0].rotation.y = CStack_78.yaw;
      this_ptr->reflectors[0].rotation.z = CStack_78.roll;
    }
    this_ptr->reflectors[0].interp_factor = 0.0;
    fVar2 = this_ptr->reflectors[0].start_position.z;
    this_ptr->reflectors[0].target_position.x = this_ptr->reflectors[0].start_position.x;
    this_ptr->reflectors[0].target_position.z = fVar2;
  }
  else if (g_MansionPuzzleSlewType == 4) {
    local_5c.position.z = 0.0;
    local_5c.position.y = 0.0;
    local_5c.position.x = 0.0;
    local_5c.roll = 0.0;
    local_5c.yaw = 0.0;
    local_5c.pitch = 0.0;
    local_5c.slew_rate = 28.0;
    pCVar1 = &this_ptr->reflectors[0].target_position;
    if (&local_5c != (CSlew *)pCVar1) {
      local_5c.position.x = pCVar1->x;
      local_5c.position.y = this_ptr->reflectors[0].target_position.y;
      local_5c.position.z = this_ptr->reflectors[0].target_position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)&local_5c.pitch != pCVar1) {
      local_5c.pitch = pCVar1->x;
      local_5c.yaw = this_ptr->reflectors[0].rotation.y;
      local_5c.roll = this_ptr->reflectors[0].rotation.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0(&local_5c);
    pCVar1 = &this_ptr->reflectors[0].target_position;
    if ((CSlew *)pCVar1 != &local_5c) {
      pCVar1->x = local_5c.position.x;
      this_ptr->reflectors[0].target_position.y = local_5c.position.y;
      this_ptr->reflectors[0].target_position.z = local_5c.position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if (pCVar1 != (CVector3f *)&local_5c.pitch) {
      pCVar1->x = local_5c.pitch;
      this_ptr->reflectors[0].rotation.y = local_5c.yaw;
      this_ptr->reflectors[0].rotation.z = local_5c.roll;
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
  fVar2 = this_ptr->reflectors[0].start_position.y;
  fVar3 = this_ptr->reflectors[0].start_position.x;
  fVar4 = this_ptr->reflectors[0].start_position.z;
  fVar5 = this_ptr->reflectors[0].target_position.y;
  fVar6 = this_ptr->reflectors[0].target_position.x;
  fVar7 = this_ptr->reflectors[0].target_position.z;
  fVar8 = this_ptr->reflectors[0].interp_factor;
  (this_ptr->base).orient.vec.z = 0.0;
  this_ptr->reflectors[1].start_position.y = fVar2;
  this_ptr->reflectors[1].start_position.z = fVar4;
  this_ptr->reflectors[1].target_position.y = fVar5;
  this_ptr->reflectors[1].target_position.z = fVar7;
  this_ptr->reflectors[1].interp_factor = fVar8;
  fVar2 = (this_ptr->base).orient.vec.z;
  this_ptr->reflectors[1].start_position.x = -fVar3;
  this_ptr->reflectors[1].target_position.x = -fVar6;
  (this_ptr->base).orient.vec.x = fVar2;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
