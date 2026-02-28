// Name: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
// Address Range: [[0050b440, 0050b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

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
  byte auStack_74 [28];
  byte auStack_58 [28];
  byte auStack_3c [28];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if (g_MansionPuzzleSlewType == 1) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_58 + 0x18));
    if ((CVector3f *)auStack_3c != &this_ptr->emitter_pos) {
      auStack_3c._0_4_ = (this_ptr->emitter_pos).x;
      auStack_3c._4_4_ = (this_ptr->emitter_pos).y;
      auStack_3c._8_4_ = (this_ptr->emitter_pos).z;
    }
    auStack_3c._20_4_ = 0.0;
    auStack_3c._16_4_ = 0.0;
    auStack_3c._12_4_ = 0.0;
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_3c);
    if (&this_ptr->emitter_pos != (CVector3f *)auStack_3c) {
      (this_ptr->emitter_pos).x = (float)auStack_3c._0_4_;
      (this_ptr->emitter_pos).y = (float)auStack_3c._4_4_;
      (this_ptr->emitter_pos).z = (float)auStack_3c._8_4_;
    }
  }
  else if (g_MansionPuzzleSlewType == 2) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_3c + 0x18));
    if ((CVector3f *)&fStack_20 != &this_ptr->gem_pos) {
      fStack_20 = (this_ptr->gem_pos).x;
      fStack_1c = (this_ptr->gem_pos).y;
      fStack_18 = (this_ptr->gem_pos).z;
    }
    if ((UOrientationVector *)&fStack_14 != &this_ptr->gem_orient) {
      fStack_14 = (this_ptr->gem_orient).vec.x;
      fStack_10 = (this_ptr->gem_orient).vec.y;
      fStack_c = (this_ptr->gem_orient).vec.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&fStack_20);
    if (&this_ptr->gem_pos != (CVector3f *)&fStack_20) {
      (this_ptr->gem_pos).x = fStack_20;
      (this_ptr->gem_pos).y = fStack_1c;
      (this_ptr->gem_pos).z = fStack_18;
    }
    if (&this_ptr->gem_orient != (UOrientationVector *)&fStack_14) {
      (this_ptr->gem_orient).vec.x = fStack_14;
      (this_ptr->gem_orient).vec.y = fStack_10;
      (this_ptr->gem_orient).vec.z = fStack_c;
    }
  }
  else if (g_MansionPuzzleSlewType == 3) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff88);
    if ((SReflector *)auStack_74 != this_ptr->reflectors) {
      auStack_74._0_4_ = this_ptr->reflectors[0].start_position.x;
      auStack_74._4_4_ = this_ptr->reflectors[0].start_position.y;
      auStack_74._8_4_ = this_ptr->reflectors[0].start_position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)(auStack_74 + 0xc) != pCVar1) {
      auStack_74._12_4_ = pCVar1->x;
      auStack_74._16_4_ = this_ptr->reflectors[0].rotation.y;
      auStack_74._20_4_ = this_ptr->reflectors[0].rotation.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_74);
    if (this_ptr->reflectors != (SReflector *)auStack_74) {
      this_ptr->reflectors[0].start_position.x = (float)auStack_74._0_4_;
      this_ptr->reflectors[0].start_position.y = (float)auStack_74._4_4_;
      this_ptr->reflectors[0].start_position.z = (float)auStack_74._8_4_;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if (pCVar1 != (CVector3f *)(auStack_74 + 0xc)) {
      pCVar1->x = (float)auStack_74._12_4_;
      this_ptr->reflectors[0].rotation.y = (float)auStack_74._16_4_;
      this_ptr->reflectors[0].rotation.z = (float)auStack_74._20_4_;
    }
    this_ptr->reflectors[0].interp_factor = 0.0;
    fVar2 = this_ptr->reflectors[0].start_position.z;
    this_ptr->reflectors[0].target_position.x = this_ptr->reflectors[0].start_position.x;
    this_ptr->reflectors[0].target_position.z = fVar2;
  }
  else if (g_MansionPuzzleSlewType == 4) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_74 + 0x18));
    pCVar1 = &this_ptr->reflectors[0].target_position;
    if ((CVector3f *)auStack_58 != pCVar1) {
      auStack_58._0_4_ = pCVar1->x;
      auStack_58._4_4_ = this_ptr->reflectors[0].target_position.y;
      auStack_58._8_4_ = this_ptr->reflectors[0].target_position.z;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if ((CVector3f *)(auStack_58 + 0xc) != pCVar1) {
      auStack_58._12_4_ = pCVar1->x;
      auStack_58._16_4_ = this_ptr->reflectors[0].rotation.y;
      auStack_58._20_4_ = this_ptr->reflectors[0].rotation.z;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_58);
    pCVar1 = &this_ptr->reflectors[0].target_position;
    if (pCVar1 != (CVector3f *)auStack_58) {
      pCVar1->x = (float)auStack_58._0_4_;
      this_ptr->reflectors[0].target_position.y = (float)auStack_58._4_4_;
      this_ptr->reflectors[0].target_position.z = (float)auStack_58._8_4_;
    }
    pCVar1 = &this_ptr->reflectors[0].rotation;
    if (pCVar1 != (CVector3f *)(auStack_58 + 0xc)) {
      pCVar1->x = (float)auStack_58._12_4_;
      this_ptr->reflectors[0].rotation.y = (float)auStack_58._16_4_;
      this_ptr->reflectors[0].rotation.z = (float)auStack_58._20_4_;
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
