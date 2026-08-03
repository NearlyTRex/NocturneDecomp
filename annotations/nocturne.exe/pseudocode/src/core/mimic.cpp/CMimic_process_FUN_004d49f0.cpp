// Name: core_mimic.cpp_CMimic_process_FUN_004d49f0
// Address: 004d49f0
// Address Range: [[004d49f0, 004d4b94]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_process_FUN_004d49f0(CMimic *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_CMimic_process_FUN_004d49f0(CMimic *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  
  if (g_CNetGame_PTR_005bdee0->connection_type != CONNECTION_NONE) {
    g_CHAR_PTR_01cc4800 = "..\\core\\mimic.cpp";
    g_INT_01cc4804 = 0x130;
    core_main_c_FUN_004c8440("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = _DAT_01cae0e8;
  (param_1->base).base.base.scale.x = *(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x108);
  (param_1->base).base.base.scale.y = *(int *)(*(int *)(iVar3 * 4 + 0x1cae0d8) + 0x10c);
  fVar1 = param_1->morph_blend;
  (param_1->base).base.base.scale.z = *(int *)(*(int *)(iVar3 * 4 + 0x1cae0d8) + 0x110);
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_004d5e20(param_1,param_2);
    return;
  }
  iVar3 = core_charactr_cpp_FUN_004259f0((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    if (param_1->attack_mode < 2) {
      if ((param_1->attack_mode < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,param_1->attack_condition), iVar3 != 0)) {
        param_1->attack_mode = 1;
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1->mirror_condition);
      if ((iVar3 != 0) && (core_mimic_cpp_FUN_004d4ba0(param_1), param_1->attack_mode == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660
                           ((CMotionController *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150));
        uVar2 = pSVar4->state_index;
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_004d4b4a:
          core_mimic_cpp_CMimic_setupCloth_FUN_004d5770(param_1);
          core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)param_1);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)param_1);
            return;
          }
          goto LAB_004d4b4a;
        }
        if (uVar2 < 0x12) goto LAB_004d4b4a;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)param_1);
            return;
          }
          goto LAB_004d4b4a;
        }
      }
    }
    else {
      core_mimic_cpp_FUN_004d4f30(param_1,param_2);
    }
    core_charactr_cpp_CCharacter_computeBoundingBox_FUN_004296c0((CCharacter *)param_1);
  }
  return;
}
