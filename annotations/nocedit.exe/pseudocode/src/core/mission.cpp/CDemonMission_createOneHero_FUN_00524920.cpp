// Name: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// Address: 00524920
// Address Range: [[00524920, 00524a7e]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_createHeros_FUN_00524a80 (00524a80) at 00524bb1 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mission_cpp_006393bc
//   TerminatedCString s_CDemonMission_createOneH_006393d0
//   TerminatedCString s_core_mission_cpp_006393ff
//   TerminatedCString s_CDemonMission_createOneH_00639413
//   TerminatedCString s_Can_t_find_hero_placehol_00639448
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CEditorTools g_CEditorToolsPtr
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 g_CHeroPlaceholderClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission *this_ptr)

{
  CDemonActor *actor_ptr;
  CHeroPlaceholder *this_ptr_00;
  int in_stack_00000008;
  CDemonActor *in_stack_00000010;
  CHero *pCVar1;
  
  if (g_HeroCount <= in_stack_00000008) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - too many heros!");
  }
  if (g_HeroActors[in_stack_00000008] != (CHero *)0x0) {
    g_CurrentFilename = "..\\core\\mission.cpp";
    g_CurrentLineNumber = 0x5f2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonMission::createOneHero - hero already created!");
  }
  actor_ptr = *(CDemonActor **)(in_stack_00000008 + 0x548);
  pCVar1 = (CHero *)0x0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
LAB_0052499a:
      if (pCVar1 == (CHero *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't find hero placeholder for hero %d");
        return 0;
      }
      g_HeroActors[in_stack_00000008] = pCVar1;
      return 1;
    }
    this_ptr_00 = (CHeroPlaceholder *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (actor_ptr,g_CHeroPlaceholderClassInfo.name_hash);
    if ((this_ptr_00 != (CHeroPlaceholder *)0x0) && (in_stack_00000008 == this_ptr_00->field1_0x158)
       ) {
      if (in_stack_00000010 == (CDemonActor *)0x0) {
        core_hero_cpp_CHeroPlaceholder_createHero_FUN_004f3d80(this_ptr_00);
      }
      else {
        (*in_stack_00000010->vtable->setPositionAndOrientation)
                  (in_stack_00000010,&(this_ptr_00->base_actor).location.position,
                   (CVector3f *)&(this_ptr_00->base_actor).orient);
        (in_stack_00000010->location).area_id = (this_ptr_00->base_actor).location.area_id;
        core_motion_cpp_CMotionController_jumpToMotion_FUN_0052dde0
                  ((CMotionController *)(in_stack_00000010 + 1),0,0.0);
        (*in_stack_00000010->vtable[1].evaluateTriggerCondition)(in_stack_00000010);
      }
      core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
      goto LAB_0052499a;
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}


// Assembly code:
// 00524920: PUSH EBX
//   Label: core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
// 00524921: PUSH ESI
// 00524922: PUSH EDI
// 00524923: PUSH EBP
// 00524924: SUB ESP,0x4
// 00524927: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0052492b: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0052492f: CMP EDI,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 00524935: JGE 0x005249b9
//   XREF to: 005249b9 (CONDITIONAL_JUMP)
// 0052493b: CMP dword ptr [EDI*0x4 + 0x2db87c0],0x0
//   Label: LAB_0052493b
//   XREF to: 02db87c0 (DATA)
// 00524943: JZ 0x00524967
//   XREF to: 00524967 (CONDITIONAL_JUMP)
// 00524945: MOV EAX,0x6393ff
//   XREF to: 006393ff (PARAM)
// 0052494a: MOV EDX,0x5f2
// 0052494f: PUSH 0x639413
//   XREF to: 00639413 (DATA)
// 00524954: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00524959: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 0052495f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00524964: ADD ESP,0x4
// 00524967: MOV ESI,dword ptr [ESP + 0x18]
//   Label: LAB_00524967
//   XREF to: Stack[0x4] (READ)
// 0052496b: XOR ECX,ECX
// 0052496d: MOV ESI,dword ptr [ESI + 0x548]
// 00524973: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 00524976: TEST ESI,ESI
// 00524978: JZ 0x0052499a
//   XREF to: 0052499a (CONDITIONAL_JUMP)
// 0052497a: MOV EBX,dword ptr [0x02db8848]
//   Label: LAB_0052497a
//   XREF to: 02db8848 (READ)
// 00524980: PUSH EBX
// 00524981: PUSH ESI
// 00524982: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00524987: MOV EBX,EAX
// 00524989: ADD ESP,0x8
// 0052498c: TEST EAX,EAX
// 0052498e: JNZ 0x005249e1
//   XREF to: 005249e1 (CONDITIONAL_JUMP)
// 00524990: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_00524990
// 00524996: TEST ESI,ESI
// 00524998: JNZ 0x0052497a
//   XREF to: 0052497a (CONDITIONAL_JUMP)
// 0052499a: MOV ESI,dword ptr [ESP]
//   Label: LAB_0052499a
//   XREF to: Stack[-0x14] (DATA)
// 0052499d: TEST ESI,ESI
// 0052499f: JZ 0x00524a60
//   XREF to: 00524a60 (CONDITIONAL_JUMP)
// 005249a5: MOV EAX,0x1
// 005249aa: MOV dword ptr [EDI*0x4 + 0x2db87c0],ESI
//   XREF to: 02db87c0 (DATA)
// 005249b1: ADD ESP,0x4
// 005249b4: POP EBP
// 005249b5: POP EDI
// 005249b6: POP ESI
// 005249b7: POP EBX
// 005249b8: RET
// 005249b9: MOV ECX,0x6393bc
//   Label: LAB_005249b9
//   XREF to: 006393bc (PARAM)
// 005249be: MOV EBX,0x5f1
// 005249c3: PUSH 0x6393d0
//   XREF to: 006393d0 (DATA)
// 005249c8: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005249ce: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005249d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005249d9: ADD ESP,0x4
// 005249dc: JMP 0x0052493b
//   XREF to: 0052493b (UNCONDITIONAL_JUMP)
// 005249e1: CMP EDI,dword ptr [EAX + 0x158]
//   Label: LAB_005249e1
// 005249e7: JNZ 0x00524990
//   XREF to: 00524990 (CONDITIONAL_JUMP)
// 005249e9: TEST EBP,EBP
// 005249eb: JZ 0x00524a4d
//   XREF to: 00524a4d (CONDITIONAL_JUMP)
// 005249ed: LEA EAX,[EBX + 0x30]
// 005249f0: PUSH EAX
// 005249f1: LEA EAX,[EBX + 0x20]
// 005249f4: PUSH EAX
// 005249f5: MOV ESI,dword ptr [EBP + 0x154]
// 005249fb: PUSH EBP
// 005249fc: MOV dword ptr [ESP + 0xc],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 00524a00: CALL dword ptr [ESI + 0x60]
// 00524a03: ADD ESP,0xc
// 00524a06: PUSH 0x0
// 00524a08: MOV EAX,dword ptr [EBX + 0x2c]
// 00524a0b: PUSH 0x0
// 00524a0d: MOV dword ptr [EBP + 0x2c],EAX
// 00524a10: LEA EAX,[EBP + 0x158]
// 00524a16: PUSH EAX
// 00524a17: CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
//   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
// 00524a1c: ADD ESP,0xc
// 00524a1f: PUSH 0x0
// 00524a21: PUSH 0x0
// 00524a23: PUSH 0x0
// 00524a25: MOV EAX,dword ptr [EBP + 0x154]
// 00524a2b: PUSH EBP
// 00524a2c: CALL dword ptr [EAX + 0x144]
// 00524a32: ADD ESP,0x10
// 00524a35: MOV ECX,dword ptr [ESP]
//   Label: LAB_00524a35
//   XREF to: Stack[-0x14] (DATA)
// 00524a38: PUSH ECX
// 00524a39: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00524a3f: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 00524a40: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 00524a45: ADD ESP,0x8
// 00524a48: JMP 0x0052499a
//   XREF to: 0052499a (UNCONDITIONAL_JUMP)
// 00524a4d: MOV EDX,dword ptr [ESP + 0x20]
//   Label: LAB_00524a4d
//   XREF to: Stack[0xc] (READ)
// 00524a51: PUSH EDX
// 00524a52: PUSH EBX
// 00524a53: CALL core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80
//   XREF to: 004f3d80 (UNCONDITIONAL_CALL)
// 00524a58: ADD ESP,0x8
// 00524a5b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00524a5e: JMP 0x00524a35
//   XREF to: 00524a35 (UNCONDITIONAL_JUMP)
// 00524a60: PUSH EDI
//   Label: LAB_00524a60
// 00524a61: PUSH 0x639448
//   XREF to: 00639448 (DATA)
// 00524a66: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00524a6c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00524a6d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00524a72: ADD ESP,0xc
// 00524a75: XOR EAX,EAX
// 00524a77: ADD ESP,0x4
// 00524a7a: POP EBP
// 00524a7b: POP EDI
// 00524a7c: POP ESI
// 00524a7d: POP EBX
// 00524a7e: RET
