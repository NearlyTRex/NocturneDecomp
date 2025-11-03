// Name: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// Address: 00520ba0
// Address Range: [[00520ba0, 00520d07]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_processMorph_FUN_00520ba0()
// Cross-references:
//   core_mimic.cpp_CMimic_beginMorph_FUN_00520a80 (00520a80) at 00520b39 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup2_FUN_0051f780 (0051f780) at 0051f845 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_mimic_cpp_006388b4
//   TerminatedCString s_CMimic_processMorph_can__006388c6
//   undefined4 DAT_00661414
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_mission.cpp_CDemonMission_FUN_00523b70
//   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   core_morph.cpp_FUN_0052b600
//   core_motion.cpp_CMotionController_advance_FUN_0052d610

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mimic.cpp_CMimic_processMorph(CMimic* param_1, undefined4
   param_2) */

void core_mimic_cpp_CMimic_processMorph_FUN_00520ba0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  float in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x4ca54) == 0) {
    g_CurrentFilename = "..\\core\\mimic.cpp";
    g_CurrentLineNumber = 0x4c9;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMimic::processMorph - can't process morph unless we've started morph!");
  }
  fVar1 = in_stack_00000008 / _DAT_00661414 + *(float *)(in_stack_00000004 + 0x4ca50);
  *(float *)(in_stack_00000004 + 0x4ca50) = fVar1;
  if (1.0 <= fVar1) {
    core_mission_cpp_CDemonMission_initNewActorMaybe_FUN_00524700(g_CDemonMissionPtr);
    core_mission_cpp_CDemonMission_FUN_00523b70(g_CDemonMissionPtr);
    *(undefined4 *)(in_stack_00000004 + 0x4ca54) = 0;
    core_mission_cpp_CDemonMission_markActorToDelete_FUN_005240a0(g_CDemonMissionPtr);
  }
  else {
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                ((CMotionController *)(in_stack_00000004 + 0x158));
    }
    while (0.0 < in_stack_00000008) {
      core_motion_cpp_CMotionController_advance_FUN_0052d610
                ((CMotionController *)(*(int *)(in_stack_00000004 + 0x4ca54) + 0x158));
    }
    core_morph_cpp_FUN_0052b600();
    core_morph_cpp_FUN_0052b600();
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x4be78)) {
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(float *)(*(int *)(in_stack_00000004 + 0x4be7c) + 4 + iVar3) =
             -*(float *)(*(int *)(in_stack_00000004 + 0x4be7c) + 4 + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (iVar2 < *(int *)(in_stack_00000004 + 0x4be78));
      return;
    }
  }
  return;
}


// Assembly code:
// 00520ba0: PUSH EBX
//   Label: core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
// 00520ba1: PUSH ESI
// 00520ba2: PUSH EDI
// 00520ba3: PUSH EBP
// 00520ba4: MOV EBP,ESP
// 00520ba6: SUB ESP,0x4
// 00520ba9: AND ESP,0xfffffff8
// 00520bac: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00520baf: CMP dword ptr [EBX + 0x4ca54],0x0
// 00520bb6: JZ 0x00520c00
//   XREF to: 00520c00 (CONDITIONAL_JUMP)
// 00520bb8: FLD float ptr [EBP + 0x18]
//   Label: LAB_00520bb8
//   XREF to: Stack[0x8] (READ)
// 00520bbb: FDIV float ptr [0x00661414]
//   XREF to: 00661414 (READ)
// 00520bc1: FADD float ptr [EBX + 0x4ca50]
// 00520bc7: FST float ptr [EBX + 0x4ca50]
// 00520bcd: FLD1
// 00520bcf: FCOMPP
// 00520bd1: FNSTSW AX
// 00520bd3: SAHF
// 00520bd4: JBE 0x00520c25
//   XREF to: 00520c25 (CONDITIONAL_JUMP)
// 00520bd6: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00520bd9: LEA ESI,[EBX + 0x158]
// 00520bdf: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00520be2: FLD float ptr [ESP]
//   Label: LAB_00520be2
//   XREF to: Stack[-0x18] (DATA)
// 00520be5: FLDZ
// 00520be7: FCOMPP
// 00520be9: FNSTSW AX
// 00520beb: SAHF
// 00520bec: JNC 0x00520c77
//   XREF to: 00520c77 (CONDITIONAL_JUMP)
// 00520bf2: MOV EAX,ESP
// 00520bf4: PUSH EAX
// 00520bf5: PUSH ESI
// 00520bf6: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00520bfb: ADD ESP,0x8
// 00520bfe: JMP 0x00520be2
//   XREF to: 00520be2 (UNCONDITIONAL_JUMP)
// 00520c00: MOV ECX,0x6388b4
//   Label: LAB_00520c00
//   XREF to: 006388b4 (PARAM)
// 00520c05: MOV ESI,0x4c9
// 00520c0a: PUSH 0x6388c6
//   XREF to: 006388c6 (DATA)
// 00520c0f: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00520c15: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00520c1b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00520c20: ADD ESP,0x4
// 00520c23: JMP 0x00520bb8
//   XREF to: 00520bb8 (UNCONDITIONAL_JUMP)
// 00520c25: MOV EDI,dword ptr [EBX + 0x4ca54]
//   Label: LAB_00520c25
// 00520c2b: PUSH EDI
// 00520c2c: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00520c31: PUSH EAX
//   XREF to: 02f33740 (DATA)
// 00520c32: CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
//   XREF to: 00524700 (UNCONDITIONAL_CALL)
// 00520c37: ADD ESP,0x8
// 00520c3a: MOV EDX,dword ptr [EBX + 0x4ca54]
// 00520c40: PUSH EDX
// 00520c41: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00520c47: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 00520c48: CALL core_mission.cpp_CDemonMission_FUN_00523b70
//   XREF to: 00523b70 (UNCONDITIONAL_CALL)
// 00520c4d: ADD ESP,0x8
// 00520c50: PUSH 0x1
// 00520c52: PUSH EBX
// 00520c53: MOV dword ptr [EBX + 0x4ca54],0x0
// 00520c5d: MOV EBX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00520c63: PUSH EBX
//   XREF to: 02f33740 (DATA)
// 00520c64: CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0
//   XREF to: 005240a0 (UNCONDITIONAL_CALL)
// 00520c69: ADD ESP,0xc
// 00520c6c: LEA EAX,[EAX]
// 00520c70: MOV ESP,EBP
//   Label: LAB_00520c70
// 00520c72: POP EBP
// 00520c73: POP EDI
// 00520c74: POP ESI
// 00520c75: POP EBX
// 00520c76: RET
// 00520c77: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_00520c77
//   XREF to: Stack[0x8] (READ)
// 00520c7a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00520c7d: FLD float ptr [ESP]
//   Label: LAB_00520c7d
//   XREF to: Stack[-0x18] (DATA)
// 00520c80: FLDZ
// 00520c82: FCOMPP
// 00520c84: FNSTSW AX
// 00520c86: SAHF
// 00520c87: JNC 0x00520ca2
//   XREF to: 00520ca2 (CONDITIONAL_JUMP)
// 00520c89: MOV EAX,ESP
// 00520c8b: PUSH EAX
// 00520c8c: MOV EAX,dword ptr [EBX + 0x4ca54]
// 00520c92: ADD EAX,0x158
// 00520c97: PUSH EAX
// 00520c98: CALL core_motion.cpp_CMotionController_advance_FUN_0052d610
//   XREF to: 0052d610 (UNCONDITIONAL_CALL)
// 00520c9d: ADD ESP,0x8
// 00520ca0: JMP 0x00520c7d
//   XREF to: 00520c7d (UNCONDITIONAL_JUMP)
// 00520ca2: PUSH 0x0
//   Label: LAB_00520ca2
// 00520ca4: LEA EAX,[EBX + 0x158]
// 00520caa: PUSH EAX
// 00520cab: PUSH 0x0
// 00520cad: LEA ESI,[EBX + 0x4be24]
// 00520cb3: PUSH ESI
// 00520cb4: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 00520cb9: ADD ESP,0x10
// 00520cbc: MOV EAX,dword ptr [EBX + 0x4ca54]
// 00520cc2: PUSH 0x0
// 00520cc4: ADD EAX,0x158
// 00520cc9: PUSH EAX
// 00520cca: PUSH 0x1
// 00520ccc: PUSH ESI
// 00520ccd: CALL core_morph.cpp_FUN_0052b600
//   XREF to: 0052b600 (UNCONDITIONAL_CALL)
// 00520cd2: ADD ESP,0x10
// 00520cd5: MOV ESI,dword ptr [EBX + 0x4be78]
// 00520cdb: XOR EAX,EAX
// 00520cdd: TEST ESI,ESI
// 00520cdf: JLE 0x00520c70
//   XREF to: 00520c70 (CONDITIONAL_JUMP)
// 00520ce1: XOR EDX,EDX
// 00520ce3: MOV ECX,dword ptr [EBX + 0x4be7c]
//   Label: LAB_00520ce3
// 00520ce9: INC EAX
// 00520cea: FLD float ptr [ECX + EDX*0x1 + 0x4]
// 00520cee: FCHS
// 00520cf0: FSTP float ptr [ECX + EDX*0x1 + 0x4]
// 00520cf4: MOV EDI,dword ptr [EBX + 0x4be78]
// 00520cfa: ADD EDX,0x10
// 00520cfd: CMP EAX,EDI
// 00520cff: JL 0x00520ce3
//   XREF to: 00520ce3 (CONDITIONAL_JUMP)
// 00520d01: MOV ESP,EBP
// 00520d03: POP EBP
// 00520d04: POP EDI
// 00520d05: POP ESI
// 00520d06: POP EBX
// 00520d07: RET
