// Name: core_mimic.cpp_CMimic_setup2_FUN_0051f780
// Address: 0051f780
// Address Range: [[0051f780, 0051f924]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_setup2_FUN_0051f780()
// Globals:
//   TerminatedCString s_core_mimic_cpp_006386f9
//   TerminatedCString s_CMimic_setup_can_t_use_m_0063870b
//   CEventList* g_CEventListPtr = 02d05310
//   CNetGame* g_CNetGameInstance = 02f7c740
//   CEventList g_CEventListInstance
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f7c740
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_00429870
//   core_charactr.cpp_CCharacter_FUN_0042d530
//   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
//   core_mimic.cpp_FUN_0051f930
//   core_mimic.cpp_FUN_0051fcc0
//   core_mimic.cpp_FUN_00520500
//   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_CMimic_setup2(CMimic* param_1, undefined4 param_2)
    */

void core_mimic_cpp_CMimic_setup2_FUN_0051f780(void)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  CCharacter *in_stack_00000004;
  
  if (g_CNetGameInstance->connection_type != 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x130;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = g_LocalHeroIndex;
  (in_stack_00000004->base_actor).scale.x =
       (g_HeroActors[g_LocalHeroIndex]->base_character).base_actor.scale.x;
  (in_stack_00000004->base_actor).scale.y = (g_HeroActors[iVar3]->base_character).base_actor.scale.y
  ;
  fVar1 = *(float *)(in_stack_00000004[6].cloth_data + 0x2ae0);
  (in_stack_00000004->base_actor).scale.z = (g_HeroActors[iVar3]->base_character).base_actor.scale.z
  ;
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_00520ba0();
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_FUN_00429870(in_stack_00000004);
  if (iVar3 != 0) {
    if (*(int *)(in_stack_00000004[6].cloth_data + 0x1e84) < 2) {
      if ((*(int *)(in_stack_00000004[6].cloth_data + 0x1e84) < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                            (g_CEventListPtr,(char *)&in_stack_00000004[1].base_actor.is_transparent
                            ), iVar3 != 0)) {
        in_stack_00000004[6].cloth_data[0x1e84] = '\x01';
        in_stack_00000004[6].cloth_data[0x1e85] = '\0';
        in_stack_00000004[6].cloth_data[0x1e86] = '\0';
        in_stack_00000004[6].cloth_data[0x1e87] = '\0';
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004adca0
                        (g_CEventListPtr,in_stack_00000004[1].base_actor.create_event + 0x20);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_FUN_0051f930(), *(int *)(in_stack_00000004[6].cloth_data + 0x1e84) == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_0052dab0
                           (&(g_HeroActors[g_LocalHeroIndex]->base_character).model.
                             motion_controller);
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


// Assembly code:
// 0051f780: PUSH EBX
//   Label: core_mimic.cpp_CMimic_setup2_FUN_0051f780
// 0051f781: PUSH EDI
// 0051f782: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051f786: MOV EAX,[0x00680a00]
//   XREF to: 02f7c740 (PARAM)
//   XREF to: 00680a00 (READ)
// 0051f78b: CMP dword ptr [EAX],0x0
//   XREF to: 02f7c740 (READ)
// 0051f78e: JNZ 0x0051f816
//   XREF to: 0051f816 (CONDITIONAL_JUMP)
// 0051f794: MOV EAX,[0x02db87d0]
//   Label: LAB_0051f794
//   XREF to: 02db87d0 (READ)
// 0051f799: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f7a0: MOV EDX,dword ptr [EDX + 0x108]
// 0051f7a6: MOV dword ptr [EBX + 0x108],EDX
// 0051f7ac: MOV EDX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f7b3: MOV EDX,dword ptr [EDX + 0x10c]
// 0051f7b9: MOV dword ptr [EBX + 0x10c],EDX
// 0051f7bf: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f7c6: FLD float ptr [EBX + 0x4ca50]
// 0051f7cc: MOV EAX,dword ptr [EAX + 0x110]
// 0051f7d2: FLDZ
// 0051f7d4: MOV dword ptr [EBX + 0x110],EAX
// 0051f7da: FCOMPP
// 0051f7dc: FNSTSW AX
// 0051f7de: SAHF
// 0051f7df: JBE 0x0051f840
//   XREF to: 0051f840 (CONDITIONAL_JUMP)
// 0051f7e1: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051f7e5: PUSH EBX
// 0051f7e6: CALL core_charactr.cpp_CCharacter_FUN_00429870
//   XREF to: 00429870 (UNCONDITIONAL_CALL)
// 0051f7eb: ADD ESP,0x8
// 0051f7ee: TEST EAX,EAX
// 0051f7f0: JZ 0x0051f813
//   XREF to: 0051f813 (CONDITIONAL_JUMP)
// 0051f7f2: MOV EDI,dword ptr [EBX + 0x4bdf4]
// 0051f7f8: CMP EDI,0x1
// 0051f7fb: JLE 0x0051f850
//   XREF to: 0051f850 (CONDITIONAL_JUMP)
// 0051f7fd: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0051f801: PUSH EBX
// 0051f802: CALL core_mimic.cpp_FUN_0051fcc0
//   XREF to: 0051fcc0 (UNCONDITIONAL_CALL)
// 0051f807: ADD ESP,0x8
// 0051f80a: PUSH EBX
//   Label: LAB_0051f80a
// 0051f80b: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0051f810: ADD ESP,0x4
// 0051f813: POP EDI
//   Label: LAB_0051f813
// 0051f814: POP EBX
// 0051f815: RET
// 0051f816: PUSH ESI
//   Label: LAB_0051f816
// 0051f817: MOV ECX,0x6386f9
//   XREF to: 006386f9 (PARAM)
// 0051f81c: MOV ESI,0x130
// 0051f821: PUSH 0x63870b
//   XREF to: 0063870b (DATA)
// 0051f826: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0051f82c: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0051f832: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0051f837: ADD ESP,0x4
// 0051f83a: POP ESI
// 0051f83b: JMP 0x0051f794
//   XREF to: 0051f794 (UNCONDITIONAL_JUMP)
// 0051f840: PUSH dword ptr [ESP + 0x10]
//   Label: LAB_0051f840
//   XREF to: Stack[0x8] (READ)
// 0051f844: PUSH EBX
// 0051f845: CALL core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
//   XREF to: 00520ba0 (UNCONDITIONAL_CALL)
// 0051f84a: ADD ESP,0x8
// 0051f84d: POP EDI
// 0051f84e: POP EBX
// 0051f84f: RET
// 0051f850: JGE 0x0051f875
//   Label: LAB_0051f850
//   XREF to: 0051f875 (CONDITIONAL_JUMP)
// 0051f852: LEA EAX,[EBX + 0xbf20]
// 0051f858: PUSH EAX
// 0051f859: MOV EAX,[0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0051f85e: PUSH EAX
//   XREF to: 02d05310 (DATA)
// 0051f85f: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0051f864: ADD ESP,0x8
// 0051f867: TEST EAX,EAX
// 0051f869: JZ 0x0051f875
//   XREF to: 0051f875 (CONDITIONAL_JUMP)
// 0051f86b: MOV dword ptr [EBX + 0x4bdf4],0x1
// 0051f875: LEA EAX,[EBX + 0xbebc]
//   Label: LAB_0051f875
// 0051f87b: PUSH EAX
// 0051f87c: MOV EDX,dword ptr [0x006793d0]
//   XREF to: 02d05310 (PARAM)
//   XREF to: 006793d0 (READ)
// 0051f882: PUSH EDX
//   XREF to: 02d05310 (DATA)
// 0051f883: CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
//   XREF to: 004adca0 (UNCONDITIONAL_CALL)
// 0051f888: ADD ESP,0x8
// 0051f88b: TEST EAX,EAX
// 0051f88d: JZ 0x0051f80a
//   XREF to: 0051f80a (CONDITIONAL_JUMP)
// 0051f893: PUSH EBX
// 0051f894: CALL core_mimic.cpp_FUN_0051f930
//   XREF to: 0051f930 (UNCONDITIONAL_CALL)
// 0051f899: MOV ECX,dword ptr [EBX + 0x4bdf4]
// 0051f89f: ADD ESP,0x4
// 0051f8a2: CMP ECX,0x1
// 0051f8a5: JNZ 0x0051f80a
//   XREF to: 0051f80a (CONDITIONAL_JUMP)
// 0051f8ab: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0051f8b0: MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0051f8b7: ADD EAX,0x158
// 0051f8bc: PUSH EAX
// 0051f8bd: CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
//   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
// 0051f8c2: MOV EAX,dword ptr [EAX + 0x24]
// 0051f8c5: ADD ESP,0x4
// 0051f8c8: CMP EAX,0x3
// 0051f8cb: JNC 0x0051f8ef
//   XREF to: 0051f8ef (CONDITIONAL_JUMP)
// 0051f8cd: CMP EAX,0x1
// 0051f8d0: JNC 0x0051f8da
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f8d2: TEST EAX,EAX
// 0051f8d4: JNZ 0x0051f80a
//   XREF to: 0051f80a (CONDITIONAL_JUMP)
// 0051f8da: PUSH EBX
//   Label: LAB_0051f8da
// 0051f8db: CALL core_mimic.cpp_FUN_00520500
//   XREF to: 00520500 (UNCONDITIONAL_CALL)
// 0051f8e0: ADD ESP,0x4
// 0051f8e3: PUSH EBX
// 0051f8e4: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0051f8e9: ADD ESP,0x4
// 0051f8ec: POP EDI
// 0051f8ed: POP EBX
// 0051f8ee: RET
// 0051f8ef: JBE 0x0051f8da
//   Label: LAB_0051f8ef
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f8f1: CMP EAX,0x11
// 0051f8f4: JNC 0x0051f907
//   XREF to: 0051f907 (CONDITIONAL_JUMP)
// 0051f8f6: CMP EAX,0x10
// 0051f8f9: JZ 0x0051f8da
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f8fb: PUSH EBX
// 0051f8fc: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0051f901: ADD ESP,0x4
// 0051f904: POP EDI
// 0051f905: POP EBX
// 0051f906: RET
// 0051f907: JBE 0x0051f8da
//   Label: LAB_0051f907
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f909: CMP EAX,0x14
// 0051f90c: JC 0x0051f80a
//   XREF to: 0051f80a (CONDITIONAL_JUMP)
// 0051f912: JBE 0x0051f8da
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f914: CMP EAX,0x15
// 0051f917: JZ 0x0051f8da
//   XREF to: 0051f8da (CONDITIONAL_JUMP)
// 0051f919: PUSH EBX
// 0051f91a: CALL core_charactr.cpp_CCharacter_FUN_0042d530
//   XREF to: 0042d530 (UNCONDITIONAL_CALL)
// 0051f91f: ADD ESP,0x4
// 0051f922: POP EDI
// 0051f923: POP EBX
// 0051f924: RET
