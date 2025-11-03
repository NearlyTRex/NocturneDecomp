// Name: core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
// Address: 0052d4f0
// Address Range: [[0052d4f0, 0052d564]]
// Convention: __cdecl
// Signature: int core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042c920 (0042c920) at 0042c9a5 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042de50 (0042de50) at 0042de9e [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004acfaf [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f2890 (004f2890) at 004f28bf [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f28d0 (004f28d0) at 004f2916 [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f29b0 (004f29b0) at 004f29e8 [UNCONDITIONAL_CALL]
//   core_motion.cpp_FUN_0052db90 (0052db90) at 0052dba0 [UNCONDITIONAL_CALL]
//   core_npc.cpp_CNPC_process_FUN_005448b0 (005448b0) at 00544b37 [UNCONDITIONAL_CALL]
//   core_npc.cpp_FUN_00544c50 (00544c50) at 00544ccf [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00592dd6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca10 (005fca10) at 005fca2c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fca80 (005fca80) at 005fcb2b [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f94bb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_motion_cpp_0063a934
//   TerminatedCString s_Can_t_find_state_s_in_mo_0063a947
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_0052d4f0(CMotionList *this_ptr)

{
  int iVar1;
  int iVar2;
  char (*str1) [30];
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < this_ptr->state_count) {
    str1 = this_ptr->state_names;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(*str1,in_stack_00000008);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->state_count);
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\motion.cpp";
  g_CurrentLineNumber = 0x113;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't find state \"%s\" in motion list");
  return -1;
}


// Assembly code:
// 0052d4f0: PUSH EBX
//   Label: core_motion.cpp_CMotionList_findStateIndex_FUN_0052d4f0
// 0052d4f1: PUSH ESI
// 0052d4f2: PUSH EDI
// 0052d4f3: PUSH EBP
// 0052d4f4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052d4f8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052d4fc: MOV EDX,dword ptr [EDI]
// 0052d4fe: XOR EBX,EBX
// 0052d500: TEST EDX,EDX
// 0052d502: JLE 0x0052d51f
//   XREF to: 0052d51f (CONDITIONAL_JUMP)
// 0052d504: LEA ESI,[EDI + 0x4]
// 0052d507: PUSH EBP
//   Label: LAB_0052d507
// 0052d508: PUSH ESI
// 0052d509: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0052d50e: ADD ESP,0x8
// 0052d511: TEST EAX,EAX
// 0052d513: JZ 0x0052d530
//   XREF to: 0052d530 (CONDITIONAL_JUMP)
// 0052d515: INC EBX
// 0052d516: MOV ECX,dword ptr [EDI]
// 0052d518: ADD ESI,0x1e
// 0052d51b: CMP EBX,ECX
// 0052d51d: JL 0x0052d507
//   XREF to: 0052d507 (CONDITIONAL_JUMP)
// 0052d51f: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_0052d51f
//   XREF to: Stack[0xc] (READ)
// 0052d524: JNZ 0x0052d537
//   XREF to: 0052d537 (CONDITIONAL_JUMP)
// 0052d526: MOV EAX,0xffffffff
// 0052d52b: POP EBP
// 0052d52c: POP EDI
// 0052d52d: POP ESI
// 0052d52e: POP EBX
// 0052d52f: RET
// 0052d530: MOV EAX,EBX
//   Label: LAB_0052d530
// 0052d532: POP EBP
// 0052d533: POP EDI
// 0052d534: POP ESI
// 0052d535: POP EBX
// 0052d536: RET
// 0052d537: PUSH EBP
//   Label: LAB_0052d537
// 0052d538: MOV ESI,0x63a934
//   XREF to: 0063a934 (DATA)
// 0052d53d: MOV EDI,0x113
// 0052d542: PUSH 0x63a947
//   XREF to: 0063a947 (DATA)
// 0052d547: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0052d54d: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0052d553: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052d558: ADD ESP,0x8
// 0052d55b: MOV EAX,0xffffffff
// 0052d560: POP EBP
// 0052d561: POP EDI
// 0052d562: POP ESI
// 0052d563: POP EBX
// 0052d564: RET
