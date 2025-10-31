// Name: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// Address: 004d2430
// Address Range: [[004d2430, 004d24e4]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430()
// Cross-references:
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d21ba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_frankgen_cpp_0062ab98
//   TerminatedCString s_CFrankenstienMachine_set_0062abad
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_CFrankenstienMachine_setCourseFrame(undefined4
   param_1, undefined4 param_2, undefined4 param_3) */

void core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430(void)

{
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x300) < 1) {
    g_CurrentFilename = "..\\core\\frankgen.cpp";
    g_CurrentLineNumber = 0x1dc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CFrankenstienMachine::setCourseFrame - no course!");
  }
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(in_stack_00000004 + 0x300));
  return;
}


// Assembly code:
// 004d2430: PUSH EBX
//   Label: core_frankgen.cpp_CFrankenstienMachine_setCourseFrame_FUN_004d2430
// 004d2431: PUSH ESI
// 004d2432: PUSH EDI
// 004d2433: PUSH EBP
// 004d2434: MOV EBP,ESP
// 004d2436: SUB ESP,0xc
// 004d2439: AND ESP,0xfffffff8
// 004d243c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004d243f: LEA EAX,[EBX + 0x300]
// 004d2445: MOV EAX,dword ptr [EAX]
// 004d2447: MOV ESI,EAX
// 004d2449: CMP EAX,0x1
// 004d244c: JL 0x004d24bd
//   XREF to: 004d24bd (CONDITIONAL_JUMP)
// 004d244e: FLD float ptr [EBP + 0x18]
//   Label: LAB_004d244e
//   XREF to: Stack[0x8] (READ)
// 004d2451: FLD float ptr [EBX + 0x15c]
// 004d2457: FSUB ST0,ST1
// 004d2459: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004d245d: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004d2461: FMULP
// 004d2463: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004d2466: FSUBRP ST2,ST0
// 004d2468: FDIVRP
// 004d246a: FST float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004d246d: FLDZ
// 004d246f: FCOMPP
// 004d2471: FNSTSW AX
// 004d2473: SAHF
// 004d2474: JBE 0x004d247b
//   XREF to: 004d247b (CONDITIONAL_JUMP)
// 004d2476: XOR EDI,EDI
// 004d2478: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x20] (DATA)
// 004d247b: DEC ESI
//   Label: LAB_004d247b
// 004d247c: MOV dword ptr [ESP + 0x8],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 004d2480: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004d2483: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 004d2487: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004d248b: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004d248f: FNSTSW AX
// 004d2491: SAHF
// 004d2492: JBE 0x004d249b
//   XREF to: 004d249b (CONDITIONAL_JUMP)
// 004d2494: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004d2498: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 004d249b: LEA EAX,[EBX + 0x30]
//   Label: LAB_004d249b
// 004d249e: PUSH EAX
// 004d249f: LEA EAX,[EBX + 0x20]
// 004d24a2: PUSH EAX
// 004d24a3: ADD EBX,0x300
// 004d24a9: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 004d24ad: PUSH EBX
// 004d24ae: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 004d24b3: ADD ESP,0x10
// 004d24b6: MOV ESP,EBP
// 004d24b8: POP EBP
// 004d24b9: POP EDI
// 004d24ba: POP ESI
// 004d24bb: POP EBX
// 004d24bc: RET
// 004d24bd: MOV EDX,0x62ab98
//   Label: LAB_004d24bd
//   XREF to: 0062ab98 (PARAM)
// 004d24c2: MOV ECX,0x1dc
// 004d24c7: PUSH 0x62abad
//   XREF to: 0062abad (DATA)
// 004d24cc: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004d24d2: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004d24d8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d24dd: ADD ESP,0x4
// 004d24e0: JMP 0x004d244e
//   XREF to: 004d244e (UNCONDITIONAL_JUMP)
