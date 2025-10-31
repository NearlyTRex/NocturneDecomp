// Name: core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
// Address: 0052d460
// Address Range: [[0052d460, 0052d4e2]]
// Convention: unknown
// Signature: undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042d390 (0042d390) at 0042d3b6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042e670 (0042e670) at 0042e6f8 [UNCONDITIONAL_CALL]
//   core_event.cpp_LargeEventHandler_FUN_004aacc0 (004aacc0) at 004ad5a6 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2e50 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e87e0 (004e87e0) at 004e8b85 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970 (004f4970) at 004f4b2a [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8810 (004f8810) at 004f8872 [UNCONDITIONAL_CALL]
//   core_motion.cpp_CMotionController_FUN_0052ddb0 (0052ddb0) at 0052ddbf [UNCONDITIONAL_CALL]
//   core_motion.cpp_CallToFindMotionInSomethign2_FUN_0052dcb0 (0052dcb0) at 0052dccc [UNCONDITIONAL_CALL]
//   core_passngr.cpp_FUN_00545d30 (00545d30) at 00545ec4 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 0055841f [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d121 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00593d8d [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb6db [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf6bb [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfd92 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c039a [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc4f0 (005fc4f0) at 005fc64d [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa684 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_motion_cpp_0063a8fb
//   TerminatedCString s_Can_t_find_motion_s_in_m_0063a90e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: int core_motion.cpp_CMotionList_findMotionIndex(CMotionList* pMotionList, char* sName,
   int param_3) */

int core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x964)) {
    str1 = (char *)(in_stack_00000004 + 0x968);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x54c;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x964));
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\motion.cpp";
  g_CurrentLineNumber = 0x100;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Can't find motion \"%s\" in motion list",in_stack_00000008);
  return -1;
}


// Assembly code:
// 0052d460: PUSH EBX
//   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
// 0052d461: PUSH ESI
// 0052d462: PUSH EDI
// 0052d463: PUSH EBP
// 0052d464: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052d468: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052d46c: MOV EDX,dword ptr [EDI + 0x964]
// 0052d472: XOR EBX,EBX
// 0052d474: TEST EDX,EDX
// 0052d476: JLE 0x0052d49d
//   XREF to: 0052d49d (CONDITIONAL_JUMP)
// 0052d478: LEA ESI,[EDI + 0x968]
// 0052d47e: PUSH EBP
//   Label: LAB_0052d47e
// 0052d47f: PUSH ESI
// 0052d480: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0052d485: ADD ESP,0x8
// 0052d488: TEST EAX,EAX
// 0052d48a: JZ 0x0052d4ae
//   XREF to: 0052d4ae (CONDITIONAL_JUMP)
// 0052d48c: INC EBX
// 0052d48d: MOV ECX,dword ptr [EDI + 0x964]
// 0052d493: ADD ESI,0x54c
// 0052d499: CMP EBX,ECX
// 0052d49b: JL 0x0052d47e
//   XREF to: 0052d47e (CONDITIONAL_JUMP)
// 0052d49d: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_0052d49d
//   XREF to: Stack[0xc] (READ)
// 0052d4a2: JNZ 0x0052d4b5
//   XREF to: 0052d4b5 (CONDITIONAL_JUMP)
// 0052d4a4: MOV EAX,0xffffffff
// 0052d4a9: POP EBP
// 0052d4aa: POP EDI
// 0052d4ab: POP ESI
// 0052d4ac: POP EBX
// 0052d4ad: RET
// 0052d4ae: MOV EAX,EBX
//   Label: LAB_0052d4ae
// 0052d4b0: POP EBP
// 0052d4b1: POP EDI
// 0052d4b2: POP ESI
// 0052d4b3: POP EBX
// 0052d4b4: RET
// 0052d4b5: PUSH EBP
//   Label: LAB_0052d4b5
// 0052d4b6: MOV ESI,0x63a8fb
//   XREF to: 0063a8fb (DATA)
// 0052d4bb: MOV EDI,0x100
// 0052d4c0: PUSH 0x63a90e
//   XREF to: 0063a90e (DATA)
// 0052d4c5: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0052d4cb: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0052d4d1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d4d6: ADD ESP,0x8
// 0052d4d9: MOV EAX,0xffffffff
// 0052d4de: POP EBP
// 0052d4df: POP EDI
// 0052d4e0: POP ESI
// 0052d4e1: POP EBX
// 0052d4e2: RET
