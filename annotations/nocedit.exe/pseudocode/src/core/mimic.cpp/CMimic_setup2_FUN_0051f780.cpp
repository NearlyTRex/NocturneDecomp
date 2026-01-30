// Name: core_mimic.cpp_CMimic_setup2_FUN_0051f780
// Address: 0051f780
// Address Range: [[0051f780, 0051f924]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_setup2_FUN_0051f780(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_CMimic_setup2(CMimic* param_1, uint param_2)
    */

void __cdecl core_mimic_cpp_CMimic_setup2_FUN_0051f780(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  CCharacter *in_stack_00000004;
  
  if (g_CNetGamePtr->connection_type != 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x130;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = g_LocalHeroIndex;
  (in_stack_00000004->base).scale.x = (g_HeroActors[g_LocalHeroIndex]->base).base.scale.x;
  (in_stack_00000004->base).scale.y = (g_HeroActors[iVar3]->base).base.scale.y;
  fVar1 = *(float *)(in_stack_00000004[6].cloth_data + 0x2ae0);
  (in_stack_00000004->base).scale.z = (g_HeroActors[iVar3]->base).base.scale.z;
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_00520ba0();
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar3 != 0) {
    if (*(int *)(in_stack_00000004[6].cloth_data + 0x1e84) < 2) {
      if ((*(int *)(in_stack_00000004[6].cloth_data + 0x1e84) < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,(char *)&in_stack_00000004[1].base.is_transparent),
         iVar3 != 0)) {
        in_stack_00000004[6].cloth_data[0x1e84] = '\x01';
        in_stack_00000004[6].cloth_data[0x1e85] = '\0';
        in_stack_00000004[6].cloth_data[0x1e86] = '\0';
        in_stack_00000004[6].cloth_data[0x1e87] = '\0';
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[1].base.create_event + 0x20);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_FUN_0051f930(), *(int *)(in_stack_00000004[6].cloth_data + 0x1e84) == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(g_HeroActors[g_LocalHeroIndex]->base).model.motion_controller);
        uVar2 = pSVar4->state_index;
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_0051f8da:
          core_mimic_cpp_FUN_00520500();
          core_charactr_cpp_CCharacter_FUN_0042d530(in_stack_00000004);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_FUN_0042d530(in_stack_00000004);
            return;
          }
          goto LAB_0051f8da;
        }
        if (uVar2 < 0x12) goto LAB_0051f8da;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_FUN_0042d530(in_stack_00000004);
            return;
          }
          goto LAB_0051f8da;
        }
      }
    }
    else {
      core_mimic_cpp_FUN_0051fcc0();
    }
    core_charactr_cpp_CCharacter_FUN_0042d530(in_stack_00000004);
  }
  return;
}
