// Name: core_charactr.cpp_CCharacter_updateFacialAnimation_FUN_0042e580
// Address: 0042e580
// Address Range: [[0042e580, 0042e8df]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_updateFacialAnimation_FUN_0042e580(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_updateFacialAnimation_FUN_0042e580(CCharacter *this_ptr)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  CDeformableModel *this_ptr_00;
  CCharacter *pCVar4;
  float fVar5;
  uint uVar6;
  
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_00483e60(g_CDemonRenderer_PTR_00612560)
  ;
  if ((iVar3 != 0) || (this_ptr->head_part_index == -1)) {
    return;
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                          (&this_ptr->model);
  if (this_ptr->head_part_index == -2) {
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"head",0);
    this_ptr->head_part_index = iVar3;
    if (iVar3 == -1) {
      return;
    }
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"m1",0);
    this_ptr->mouth_parts[0] = iVar3;
    if (iVar3 == -1) {
      this_ptr->head_part_index = -1;
      return;
    }
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"m2",1);
    this_ptr->mouth_parts[1] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"m3",1);
    this_ptr->mouth_parts[2] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"m4",1);
    this_ptr->mouth_parts[3] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e1_left",0);
    this_ptr->left_eye_parts[0] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e2_left",0);
    this_ptr->left_eye_parts[1] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e3_left",0);
    this_ptr->left_eye_parts[2] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e4_left",0);
    this_ptr->left_eye_parts[3] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e1_right",0);
    this_ptr->right_eye_parts[0] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e2_right",0);
    this_ptr->right_eye_parts[1] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e3_right",0);
    this_ptr->right_eye_parts[2] = iVar3;
    iVar3 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_00565780
                      (this_ptr_00,"e4_right",0);
    this_ptr->right_eye_parts[3] = iVar3;
  }
  pCVar4 = this_ptr;
  do {
    if (pCVar4->left_eye_parts[0] != -1) {
      (this_ptr->model).part_data.visibility_flags[pCVar4->left_eye_parts[0]] = 0;
    }
    if (pCVar4->right_eye_parts[0] != -1) {
      (this_ptr->model).part_data.visibility_flags[pCVar4->right_eye_parts[0]] = 0;
    }
    piVar1 = pCVar4->mouth_parts;
    pCVar4 = (CCharacter *)((pCVar4->base).actor_name + 4);
    (this_ptr->model).part_data.visibility_flags[*piVar1] = 0;
  } while (pCVar4 != (CCharacter *)((this_ptr->base).actor_name + 0x10));
  fVar2 = (float)g_GlobalDeltaTimeInt * 1.525879e-05f;
  this_ptr->blink_timer = this_ptr->blink_timer - fVar2;
  if (this_ptr->is_blinking == 1) {
    if (this_ptr->blink_timer <= 0.0) {
      fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(5.0,8.0);
      this_ptr->left_eye_frame = 0;
      this_ptr->right_eye_frame = 0;
      this_ptr->is_blinking = 0;
      this_ptr->blink_timer = fVar5;
    }
  }
  else if (this_ptr->blink_timer <= 0.0) {
    this_ptr->right_eye_frame = 3;
    this_ptr->is_blinking = 1;
    this_ptr->blink_timer = 0.05;
    this_ptr->left_eye_frame = 3;
  }
  this_ptr->mouth_timer = this_ptr->mouth_timer - fVar2;
  if (this_ptr->mouth_timer <= 0.0) {
    pCVar4 = (CCharacter *)g_CScriptPtr->who_is_speaking;
    if (this_ptr == pCVar4) {
      pCVar4->mouth_timer = 0.15;
      uVar6 = rand();
      pCVar4->mouth_frame = uVar6 & 3;
    }
    else {
      this_ptr->mouth_frame = 0;
      this_ptr->mouth_timer = 0.0;
    }
  }
  if (this_ptr->left_eye_parts[this_ptr->left_eye_frame] != -1) {
    core_charactr_cpp_applyFacePartToHead_FUN_0042e410
              (this_ptr_00,this_ptr->head_part_index,
               this_ptr->left_eye_parts[this_ptr->left_eye_frame]);
  }
  if (this_ptr->right_eye_parts[this_ptr->right_eye_frame] != -1) {
    core_charactr_cpp_applyFacePartToHead_FUN_0042e410
              (this_ptr_00,this_ptr->head_part_index,
               this_ptr->right_eye_parts[this_ptr->right_eye_frame]);
  }
  core_charactr_cpp_applyFacePartToHead_FUN_0042e410
            (this_ptr_00,this_ptr->head_part_index,this_ptr->mouth_parts[this_ptr->mouth_frame]);
  return;
}
