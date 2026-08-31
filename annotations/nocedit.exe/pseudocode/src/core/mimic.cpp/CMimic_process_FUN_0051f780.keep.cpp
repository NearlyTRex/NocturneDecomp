// Name: core_mimic.cpp_CMimic_process_FUN_0051f780
// Address: 0051f780
// MANUAL RECONSTRUCTION
// Address Range: [[0051f780, 0051f924]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_process_FUN_0051f780(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_mimic_cpp_CMimic_process_FUN_0051f780(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  CHero *mirror_hero;

#if NOCTURNE_AUTHENTIC_NETPLAY
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 304;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::setup - can't use mimic in multi-player!");
  }
#endif
#if NOCTURNE_AUTHENTIC_NETPLAY
  mirror_hero = g_HeroActors[g_LocalHeroIndex];
#else
  mirror_hero = nocturne_net_sim_mimic_hero();
  if (mirror_hero == (CHero *)0x0) {
    mirror_hero = nocturne_net_sim_leader_hero();
  }
#endif
  (this_ptr->base).base.base.scale.x = (mirror_hero->base).base.scale.x;
  (this_ptr->base).base.base.scale.y = (mirror_hero->base).base.scale.y;
  fVar1 = this_ptr->morph_blend;
  (this_ptr->base).base.base.scale.z = (mirror_hero->base).base.scale.z;
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(this_ptr,delta_time);
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_process_FUN_00429870((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (this_ptr->attack_mode < 2) {
      if ((this_ptr->attack_mode < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,this_ptr->attack_condition), iVar3 != 0)) {
        this_ptr->attack_mode = 1;
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,this_ptr->mirror_condition);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_CMimic_updatePose_FUN_0051f930(this_ptr), this_ptr->attack_mode == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(mirror_hero->base).model.motion_controller);
        uVar2 = pSVar4->state_index;
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_0051f8da:
          core_mimic_cpp_CMimic_setupCloth_FUN_00520500(this_ptr);
          core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530((CCharacter *)this_ptr);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530((CCharacter *)this_ptr);
            return;
          }
          goto LAB_0051f8da;
        }
        if (uVar2 < 0x12) goto LAB_0051f8da;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530((CCharacter *)this_ptr);
            return;
          }
          goto LAB_0051f8da;
        }
      }
    }
    else {
      core_mimic_cpp_CMimic_processAnimation_FUN_0051fcc0(this_ptr,delta_time);
    }
    core_charactr_cpp_CCharacter_computeBoundingBox_FUN_0042d530((CCharacter *)this_ptr);
  }
  return;
}
