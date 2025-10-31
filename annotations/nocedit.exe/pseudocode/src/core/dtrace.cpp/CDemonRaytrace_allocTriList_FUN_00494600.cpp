// Name: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 0049468d]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0 (004950b0) at 004950bd [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 (00494450) at 004944a9 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494c75 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_006226c0
//   TerminatedCString s_core_dtrace_cpp_006226d3
//   TerminatedCString s_core_dtrace_cpp_006226e6
//   TerminatedCString s_CDemonRaytrace_allocTriL_006226f9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_allocTriList_FUN_00494600(CDemonRaytrace *this_ptr)

{
  float fVar1;
  CDemonTriangle *pCVar2;
  CDemonTriangle *pCVar3;
  uchar *puVar4;
  
  fVar1 = (float)this_ptr->triangle_count;
  pCVar2 = (CDemonTriangle *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0x38 + 4,"..\\core\\dtrace.cpp",0xf7);
  pCVar3 = pCVar2;
  if (pCVar2 != (CDemonTriangle *)0x0) {
    pCVar3 = (CDemonTriangle *)&(pCVar2->vertex1).y;
    (pCVar2->vertex1).x = fVar1;
  }
  this_ptr->triangle_list = pCVar3;
  puVar4 = (uchar *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                              (this_ptr->triangle_count,"..\\core\\dtrace.cpp",0xf8);
  this_ptr->triangle_flags = puVar4;
  if ((this_ptr->triangle_list != (CDemonTriangle *)0x0) && (puVar4 != (uchar *)0x0)) {
    return;
  }
  g_CurrentFilename = "..\\core\\dtrace.cpp";
  g_CurrentLineNumber = 0xf9;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::allocTriList - Out of memory!");
  return;
}


// Assembly code:
// 00494600: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_allocTriList_FUN_00494600
// 00494601: PUSH ESI
// 00494602: PUSH EBP
// 00494603: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00494607: MOV ESI,dword ptr [EBX + 0x4]
// 0049460a: LEA EAX,[ESI*0x8 + 0x0]
// 00494611: MOV EDX,EAX
// 00494613: SHL EAX,0x3
// 00494616: PUSH 0xf7
// 0049461b: SUB EAX,EDX
// 0049461d: PUSH 0x6226c0
//   XREF to: 006226c0 (DATA)
// 00494622: ADD EAX,0x4
// 00494625: PUSH EAX
// 00494626: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 0049462b: ADD ESP,0xc
// 0049462e: TEST EAX,EAX
// 00494630: JNZ 0x0049465d
//   XREF to: 0049465d (CONDITIONAL_JUMP)
// 00494632: PUSH 0xf8
//   Label: LAB_00494632
// 00494637: PUSH 0x6226d3
//   XREF to: 006226d3 (DATA)
// 0049463c: MOV EDX,dword ptr [EBX + 0x4]
// 0049463f: PUSH EDX
// 00494640: MOV dword ptr [EBX + 0x8],EAX
// 00494643: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00494648: ADD ESP,0xc
// 0049464b: MOV ECX,dword ptr [EBX + 0x8]
// 0049464e: MOV dword ptr [EBX + 0xc],EAX
// 00494651: TEST ECX,ECX
// 00494653: JZ 0x00494665
//   XREF to: 00494665 (CONDITIONAL_JUMP)
// 00494655: TEST EAX,EAX
// 00494657: JZ 0x00494665
//   XREF to: 00494665 (CONDITIONAL_JUMP)
// 00494659: POP EBP
// 0049465a: POP ESI
// 0049465b: POP EBX
// 0049465c: RET
// 0049465d: ADD EAX,0x4
//   Label: LAB_0049465d
// 00494660: MOV dword ptr [EAX + -0x4],ESI
// 00494663: JMP 0x00494632
//   XREF to: 00494632 (UNCONDITIONAL_JUMP)
// 00494665: PUSH EDI
//   Label: LAB_00494665
// 00494666: MOV EDI,0x6226e6
//   XREF to: 006226e6 (DATA)
// 0049466b: MOV EBP,0xf9
// 00494670: PUSH 0x6226f9
//   XREF to: 006226f9 (DATA)
// 00494675: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0049467b: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00494681: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00494686: ADD ESP,0x4
// 00494689: POP EDI
// 0049468a: POP EBP
// 0049468b: POP ESI
// 0049468c: POP EBX
// 0049468d: RET
