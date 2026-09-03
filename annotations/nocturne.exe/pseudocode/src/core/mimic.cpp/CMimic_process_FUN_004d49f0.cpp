// Name: core_mimic.cpp_CMimic_process_FUN_004d49f0
// Address: 004d49f0
// Address Range: [[004d49f0, 004d4b94]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_process_FUN_004d49f0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_process_FUN_004d49f0(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  
  if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 304;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = g_LocalHeroIndex;
  (this_ptr->base).base.base.scale.x = (g_HeroActors[g_LocalHeroIndex]->base).base.scale.x;
  (this_ptr->base).base.base.scale.y = (g_HeroActors[iVar3]->base).base.scale.y;
  fVar1 = this_ptr->morph_blend;
  (this_ptr->base).base.base.scale.z = (g_HeroActors[iVar3]->base).base.scale.z;
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(this_ptr,delta_time);
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_004259f0((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (this_ptr->attack_mode < 2) {
      if ((this_ptr->attack_mode < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,this_ptr->attack_condition), iVar3 != 0)) {
        this_ptr->attack_mode = 1;
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,this_ptr->mirror_condition);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_CMimic_updatePose_FUN_004d4ba0(this_ptr), this_ptr->attack_mode == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           (&(g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller);
        uVar2 = pSVar4->state_index;
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_004d4b4a:
          core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(this_ptr);
          core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)this_ptr);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)this_ptr);
            return;
          }
          goto LAB_004d4b4a;
        }
        if (uVar2 < 0x12) goto LAB_004d4b4a;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)this_ptr);
            return;
          }
          goto LAB_004d4b4a;
        }
      }
    }
    else {
      core_mimic_cpp_CMimic_processAnimation_FUN_004d4f30(this_ptr,delta_time);
    }
    core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)this_ptr);
  }
  return;
}
