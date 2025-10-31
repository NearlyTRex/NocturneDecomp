// Name: core_manpuz.cpp_FUN_0050a420
// Address: 0050a420
// Address Range: [[0050a420, 0050a48d]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a420()
// Cross-references:
//   core_manpuz.cpp_FUN_005098f0 (005098f0) at 00509ab6 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a6f5 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050a420(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_manpuz_cpp_FUN_0050a420(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  float *in_stack_00000014;
  
  *in_stack_00000014 = 0.0;
  *in_stack_00000010 = *in_stack_00000014;
  *in_stack_0000000c = *in_stack_00000010;
  in_stack_00000004 = in_stack_00000008 * 100 + in_stack_00000004;
  if ((*(int *)(in_stack_00000004 + 0x5f0) != 0) &&
     ((*(uint *)(in_stack_00000004 + 0x5f8) & 0x7fffffff) == 0)) {
    *in_stack_0000000c = (float)*(int *)(in_stack_00000004 + 0x63c);
    *in_stack_00000010 = (float)*(int *)(in_stack_00000004 + 0x640);
    *in_stack_00000014 = (float)*(int *)(in_stack_00000004 + 0x644);
    return;
  }
  return;
}


// Assembly code:
// 0050a420: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050a420
// 0050a421: PUSH ESI
// 0050a422: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0050a426: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0050a42a: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0050a42e: MOV dword ptr [EBX],0x0
// 0050a434: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050a438: MOV ESI,dword ptr [EBX]
// 0050a43a: MOV dword ptr [ECX],ESI
// 0050a43c: MOV ESI,dword ptr [ECX]
// 0050a43e: MOV dword ptr [EAX],ESI
// 0050a440: LEA EAX,[EDX*0x4 + 0x0]
// 0050a447: SUB EAX,EDX
// 0050a449: SHL EAX,0x3
// 0050a44c: ADD EAX,EDX
// 0050a44e: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050a452: SHL EAX,0x2
// 0050a455: ADD EAX,EDX
// 0050a457: CMP dword ptr [EAX + 0x5f0],0x0
// 0050a45e: JZ 0x0050a46c
//   XREF to: 0050a46c (CONDITIONAL_JUMP)
// 0050a460: TEST dword ptr [EAX + 0x5f8],0x7fffffff
// 0050a46a: JZ 0x0050a46f
//   XREF to: 0050a46f (CONDITIONAL_JUMP)
// 0050a46c: POP ESI
//   Label: LAB_0050a46c
// 0050a46d: POP EBX
// 0050a46e: RET
// 0050a46f: MOV EDX,dword ptr [ESP + 0x14]
//   Label: LAB_0050a46f
//   XREF to: Stack[0xc] (READ)
// 0050a473: FILD dword ptr [EAX + 0x63c]
// 0050a479: FSTP float ptr [EDX]
// 0050a47b: FILD dword ptr [EAX + 0x640]
// 0050a481: FSTP float ptr [ECX]
// 0050a483: FILD dword ptr [EAX + 0x644]
// 0050a489: FSTP float ptr [EBX]
// 0050a48b: POP ESI
// 0050a48c: POP EBX
// 0050a48d: RET
