// Name: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
// Address: 00494690
// Address Range: [[00494690, 00494707]]
// Convention: __cdecl
// Signature: void core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace * this_ptr)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_consolidateTriList_FUN_00494450 (00494450) at 00494470 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310 (00495310) at 00495837 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_dtor_FUN_00494240 (00494240) at 0049424f [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494d8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dtrace_cpp_00622727
//   TerminatedCString s_core_dtrace_cpp_0062273a
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   crt_memory.c_free_FUN_005fe659

#include "nocturne.h"

void __cdecl core_dtrace_cpp_CDemonRaytrace_freeTriList_FUN_00494690(CDemonRaytrace *this_ptr)

{
  CDemonTriangle *pCVar1;
  
  pCVar1 = this_ptr->triangle_list;
  if (pCVar1 != (CDemonTriangle *)0x0) {
    g_CurrentDebugLine = 0x104;
    g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
    if (pCVar1 != (CDemonTriangle *)0x0) {
      crt_memory_c_free_FUN_005fe659(&pCVar1[-1].area);
    }
  }
  if (this_ptr->triangle_flags != (uchar *)0x0) {
    g_CurrentDebugFilename = "..\\core\\dtrace.cpp";
    g_CurrentDebugLine = 0x107;
    crt_memory_c_free_FUN_005fe659(this_ptr->triangle_flags);
  }
  this_ptr->triangle_flags = (uchar *)0x0;
  this_ptr->triangle_count = 0;
  this_ptr->triangle_list = (CDemonTriangle *)0x0;
  return;
}


// Assembly code:
// 00494690: PUSH EBX
//   Label: core_dtrace.cpp_CDemonRaytrace_freeTriList_FUN_00494690
// 00494691: PUSH ESI
// 00494692: PUSH EDI
// 00494693: PUSH EBP
// 00494694: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00494698: MOV EDX,dword ptr [EBX + 0x8]
// 0049469b: TEST EDX,EDX
// 0049469d: JNZ 0x004946c0
//   XREF to: 004946c0 (CONDITIONAL_JUMP)
// 0049469f: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_0049469f
// 004946a2: TEST EDI,EDI
// 004946a4: JNZ 0x004946e8
//   XREF to: 004946e8 (CONDITIONAL_JUMP)
// 004946a6: MOV dword ptr [EBX + 0xc],0x0
//   Label: LAB_004946a6
// 004946ad: MOV dword ptr [EBX + 0x4],0x0
// 004946b4: MOV dword ptr [EBX + 0x8],0x0
// 004946bb: POP EBP
// 004946bc: POP EDI
// 004946bd: POP ESI
// 004946be: POP EBX
// 004946bf: RET
// 004946c0: MOV ESI,0x104
//   Label: LAB_004946c0
// 004946c5: MOV ECX,0x622727
//   XREF to: 00622727 (PARAM)
// 004946ca: MOV EAX,EDX
// 004946cc: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 004946d2: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 004946d8: JZ 0x0049469f
//   XREF to: 0049469f (CONDITIONAL_JUMP)
// 004946da: LEA EAX,[EDX + -0x4]
// 004946dd: PUSH EAX
// 004946de: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004946e3: ADD ESP,0x4
// 004946e6: JMP 0x0049469f
//   XREF to: 0049469f (UNCONDITIONAL_JUMP)
// 004946e8: MOV EBP,0x62273a
//   Label: LAB_004946e8
//   XREF to: 0062273a (DATA)
// 004946ed: MOV EAX,0x107
// 004946f2: PUSH EDI
// 004946f3: MOV dword ptr [0x0067d20c],EBP
//   XREF to: 0067d20c (WRITE)
// 004946f9: MOV [0x02f0d944],EAX
//   XREF to: 02f0d944 (WRITE)
// 004946fe: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00494703: ADD ESP,0x4
// 00494706: JMP 0x004946a6
//   XREF to: 004946a6 (UNCONDITIONAL_JUMP)
