// Name: core_event.cpp_CEventList_FUN_004b0830
// Address: 004b0830
// Address Range: [[004b0830, 004b085a]]
// Convention: __cdecl
// Signature: int core_event.cpp_CEventList_FUN_004b0830(CEventList * this_ptr)
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004abbfc [UNCONDITIONAL_CALL]
//   core_event.cpp_CEventList_FUN_004ae140 (004ae140) at 004ae717 [UNCONDITIONAL_CALL]
//   core_event.cpp_FUN_004aa3c0 (004aa3c0) at 004aa3f1 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055d253 [UNCONDITIONAL_CALL]
// Function calls:
//   core_event.cpp_CEventList_FUN_004b0950

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_FUN_004b0830(CEventList *this_ptr)

{
  int iVar1;
  int in_stack_00000008;
  
  iVar1 = core_event_cpp_CEventList_FUN_004b0950(this_ptr);
  if (-1 < iVar1) {
    return *(int *)(iVar1 * 4 + in_stack_00000008 + 0x34c0);
  }
  return 0;
}


// Assembly code:
// 004b0830: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_event.cpp_CEventList_FUN_004b0830
//   XREF to: Stack[0x8] (READ)
// 004b0834: PUSH EDX
// 004b0835: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b0839: PUSH ECX
// 004b083a: CALL core_event.cpp_CEventList_FUN_004b0950
//   XREF to: 004b0950 (UNCONDITIONAL_CALL)
// 004b083f: ADD ESP,0x8
// 004b0842: TEST EAX,EAX
// 004b0844: JL 0x004b0858
//   XREF to: 004b0858 (CONDITIONAL_JUMP)
// 004b0846: PUSH EBX
// 004b0847: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004b084b: SHL EAX,0x2
// 004b084e: ADD EAX,EBX
// 004b0850: MOV EAX,dword ptr [EAX + 0x34c0]
// 004b0856: POP EBX
// 004b0857: RET
// 004b0858: XOR EAX,EAX
//   Label: LAB_004b0858
// 004b085a: RET
