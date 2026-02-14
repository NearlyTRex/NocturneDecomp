// Name: core_manpuz.cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440
// Address: 0050b440
// Address Range: [[0050b440, 0050b7c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processInEditor_FUN_0050b440(CMansionPuzzleCircle *this_ptr)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
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
    if ((COrientation *)&fStack_14 != &this_ptr->gem_orient) {
      fStack_14 = (this_ptr->gem_orient).pitch;
      fStack_10 = (this_ptr->gem_orient).bank;
      fStack_c = (this_ptr->gem_orient).heading;
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)&fStack_20);
    if (&this_ptr->gem_pos != (CVector3f *)&fStack_20) {
      (this_ptr->gem_pos).x = fStack_20;
      (this_ptr->gem_pos).y = fStack_1c;
      (this_ptr->gem_pos).z = fStack_18;
    }
    if (&this_ptr->gem_orient != (COrientation *)&fStack_14) {
      (this_ptr->gem_orient).pitch = fStack_14;
      (this_ptr->gem_orient).bank = fStack_10;
      (this_ptr->gem_orient).heading = fStack_c;
    }
  }
  else if (g_MansionPuzzleSlewType == 3) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)&stack0xffffff88);
    if (auStack_74 != this_ptr->unk3 + 0xcf8) {
      auStack_74._0_4_ = *(uint *)(this_ptr->unk3 + 0xcf8);
      auStack_74._4_4_ = *(uint *)(this_ptr->unk3 + 0xcfc);
      auStack_74._8_4_ = *(uint *)(this_ptr->unk3 + 0xd00);
    }
    if (auStack_74 + 0xc != this_ptr->unk3 + 0xd20) {
      auStack_74._12_4_ = *(uint *)(this_ptr->unk3 + 0xd20);
      auStack_74._16_4_ = *(uint *)(this_ptr->unk3 + 0xd24);
      auStack_74._20_4_ = *(uint *)(this_ptr->unk3 + 0xd28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_74);
    if (this_ptr->unk3 + 0xcf8 != auStack_74) {
      *(uint *)(this_ptr->unk3 + 0xcf8) = auStack_74._0_4_;
      *(uint *)(this_ptr->unk3 + 0xcfc) = auStack_74._4_4_;
      *(uint *)(this_ptr->unk3 + 0xd00) = auStack_74._8_4_;
    }
    if (this_ptr->unk3 + 0xd20 != auStack_74 + 0xc) {
      *(uint *)(this_ptr->unk3 + 0xd20) = auStack_74._12_4_;
      *(uint *)(this_ptr->unk3 + 0xd24) = auStack_74._16_4_;
      *(uint *)(this_ptr->unk3 + 0xd28) = auStack_74._20_4_;
    }
    this_ptr->unk3[0xd10] = '\0';
    this_ptr->unk3[0xd11] = '\0';
    this_ptr->unk3[0xd12] = '\0';
    this_ptr->unk3[0xd13] = '\0';
    *(uint *)(this_ptr->unk3 + 0xd04) = *(uint *)(this_ptr->unk3 + 0xcf8);
    *(uint *)(this_ptr->unk3 + 0xd0c) = *(uint *)(this_ptr->unk3 + 0xd00);
  }
  else if (g_MansionPuzzleSlewType == 4) {
    core_slew_cpp_CSlew_init_FUN_005a2060((CSlew *)(auStack_74 + 0x18));
    if (auStack_58 != this_ptr->unk3 + 0xd04) {
      auStack_58._0_4_ = *(uint *)(this_ptr->unk3 + 0xd04);
      auStack_58._4_4_ = *(uint *)(this_ptr->unk3 + 0xd08);
      auStack_58._8_4_ = *(uint *)(this_ptr->unk3 + 0xd0c);
    }
    if (auStack_58 + 0xc != this_ptr->unk3 + 0xd20) {
      auStack_58._12_4_ = *(uint *)(this_ptr->unk3 + 0xd20);
      auStack_58._16_4_ = *(uint *)(this_ptr->unk3 + 0xd24);
      auStack_58._20_4_ = *(uint *)(this_ptr->unk3 + 0xd28);
    }
    core_slew_cpp_CSlew_processInput_FUN_005a20b0((CSlew *)auStack_58);
    if (this_ptr->unk3 + 0xd04 != auStack_58) {
      *(uint *)(this_ptr->unk3 + 0xd04) = auStack_58._0_4_;
      *(uint *)(this_ptr->unk3 + 0xd08) = auStack_58._4_4_;
      *(uint *)(this_ptr->unk3 + 0xd0c) = auStack_58._8_4_;
    }
    if (this_ptr->unk3 + 0xd20 != auStack_58 + 0xc) {
      *(uint *)(this_ptr->unk3 + 0xd20) = auStack_58._12_4_;
      *(uint *)(this_ptr->unk3 + 0xd24) = auStack_58._16_4_;
      *(uint *)(this_ptr->unk3 + 0xd28) = auStack_58._20_4_;
    }
    this_ptr->unk3[0xd10] = '\0';
    this_ptr->unk3[0xd11] = '\0';
    this_ptr->unk3[0xd12] = -0x80;
    this_ptr->unk3[0xd13] = '?';
    *(uint *)(this_ptr->unk3 + 0xcf8) = *(uint *)(this_ptr->unk3 + 0xd04);
    *(uint *)(this_ptr->unk3 + 0xd00) = *(uint *)(this_ptr->unk3 + 0xd0c);
  }
  else {
    g_MansionPuzzleSlewType = 0;
    core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(&this_ptr->base);
  }
  uVar1 = *(uint *)(this_ptr->unk3 + 0xcfc);
  fVar2 = *(float *)(this_ptr->unk3 + 0xcf8);
  uVar3 = *(uint *)(this_ptr->unk3 + 0xd00);
  uVar4 = *(uint *)(this_ptr->unk3 + 0xd08);
  fVar5 = *(float *)(this_ptr->unk3 + 0xd04);
  uVar6 = *(uint *)(this_ptr->unk3 + 0xd0c);
  uVar7 = *(uint *)(this_ptr->unk3 + 0xd10);
  (this_ptr->base).orient.vec.z = 0.0;
  *(uint *)(this_ptr->unk3 + 0xd5c) = uVar1;
  *(uint *)(this_ptr->unk3 + 0xd60) = uVar3;
  *(uint *)(this_ptr->unk3 + 0xd68) = uVar4;
  *(uint *)(this_ptr->unk3 + 0xd6c) = uVar6;
  *(uint *)(this_ptr->unk3 + 0xd70) = uVar7;
  fVar8 = (this_ptr->base).orient.vec.z;
  *(float *)(this_ptr->unk3 + 0xd58) = -fVar2;
  *(float *)(this_ptr->unk3 + 0xd64) = -fVar5;
  (this_ptr->base).orient.vec.x = fVar8;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  return;
}
