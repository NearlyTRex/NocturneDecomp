// Name: core_platfrm.cpp_FUN_0054d690
// Address: 0054d690
// Address Range: [[0054d690, 0054d71f]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054d690()
// Cross-references:
//   core_platfrm.cpp_FUN_0054cc30 (0054cc30) at 0054cf2e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055ddb2 [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054d690(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_platfrm_cpp_FUN_0054d690(void)

{
  int in_stack_00000004;
  float in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(float *)(in_stack_00000004 + 0x2e0) = in_stack_00000008;
  if (*(float *)(in_stack_00000004 + 0x2e0) < 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x2e0) = 0;
  }
  if (1.0 < *(float *)(in_stack_00000004 + 0x2e0)) {
    *(undefined4 *)(in_stack_00000004 + 0x2e0) = 0x3f800000;
  }
  *(undefined4 *)(in_stack_00000004 + 0x2e4) = in_stack_0000000c;
  if (*(float *)(in_stack_00000004 + 0x2dc) < in_stack_00000008) {
    *(undefined4 *)(in_stack_00000004 + 0x2d4) = 3;
  }
  if (in_stack_00000008 < *(float *)(in_stack_00000004 + 0x2dc)) {
    *(undefined4 *)(in_stack_00000004 + 0x2d4) = 4;
  }
  if (*(char *)(in_stack_00000004 + 0x480) == '\0') {
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x28))();
  return;
}


// Assembly code:
// 0054d690: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_platfrm.cpp_FUN_0054d690
//   XREF to: Stack[0x4] (READ)
// 0054d694: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054d698: MOV dword ptr [EDX + 0x2e0],EAX
// 0054d69e: FLD float ptr [EDX + 0x2e0]
// 0054d6a4: FLDZ
// 0054d6a6: FCOMPP
// 0054d6a8: FNSTSW AX
// 0054d6aa: SAHF
// 0054d6ab: JA 0x0054d6ff
//   XREF to: 0054d6ff (CONDITIONAL_JUMP)
// 0054d6ad: FLD float ptr [EDX + 0x2e0]
//   Label: LAB_0054d6ad
// 0054d6b3: FLD1
// 0054d6b5: FCOMPP
// 0054d6b7: FNSTSW AX
// 0054d6b9: SAHF
// 0054d6ba: JNC 0x0054d6c6
//   XREF to: 0054d6c6 (CONDITIONAL_JUMP)
// 0054d6bc: MOV dword ptr [EDX + 0x2e0],0x3f800000
// 0054d6c6: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0054d6c6
//   XREF to: Stack[0xc] (READ)
// 0054d6ca: MOV dword ptr [EDX + 0x2e4],EAX
// 0054d6d0: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0054d6d4: FCOMP float ptr [EDX + 0x2dc]
// 0054d6da: FNSTSW AX
// 0054d6dc: SAHF
// 0054d6dd: JBE 0x0054d6e9
//   XREF to: 0054d6e9 (CONDITIONAL_JUMP)
// 0054d6df: MOV dword ptr [EDX + 0x2d4],0x3
// 0054d6e9: JNC 0x0054d6f5
//   Label: LAB_0054d6e9
//   XREF to: 0054d6f5 (CONDITIONAL_JUMP)
// 0054d6eb: MOV dword ptr [EDX + 0x2d4],0x4
// 0054d6f5: CMP byte ptr [EDX + 0x480],0x0
//   Label: LAB_0054d6f5
// 0054d6fc: JNZ 0x0054d70b
//   XREF to: 0054d70b (CONDITIONAL_JUMP)
// 0054d6fe: RET
// 0054d6ff: MOV dword ptr [EDX + 0x2e0],0x0
//   Label: LAB_0054d6ff
// 0054d709: JMP 0x0054d6ad
//   XREF to: 0054d6ad (UNCONDITIONAL_JUMP)
// 0054d70b: LEA ECX,[EDX + 0x480]
//   Label: LAB_0054d70b
// 0054d711: PUSH ECX
// 0054d712: MOV EAX,dword ptr [EDX + 0x154]
// 0054d718: PUSH EDX
// 0054d719: CALL dword ptr [EAX + 0x28]
// 0054d71c: ADD ESP,0x8
// 0054d71f: RET
