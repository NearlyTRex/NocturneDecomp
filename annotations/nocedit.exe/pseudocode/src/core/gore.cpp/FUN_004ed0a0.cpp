// Name: core_gore.cpp_FUN_004ed0a0
// Address: 004ed0a0
// Address Range: [[004ed0a0, 004ed0cd]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed0a0()
// Cross-references:
//   core_gore.cpp_CGore_process_FUN_004ed9e0 (004ed9e0) at 004eda5f [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e392 = 3.625
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ed0a0(undefined4 param_1) */

void core_gore_cpp_FUN_004ed0a0(void)

{
  int in_stack_00000004;
  
  *(float *)(in_stack_00000004 + 0x18) =
       g_CGamePtr->delta_time_float + *(float *)(in_stack_00000004 + 0x18);
  if (*(float *)(in_stack_00000004 + 0x18) <= (float)DOUBLE_0062e392) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x18) = 0x40680000;
  return;
}


// Assembly code:
// 004ed0a0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_gore.cpp_FUN_004ed0a0
//   XREF to: Stack[0x4] (READ)
// 004ed0a4: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004ed0aa: LEA EAX,[ECX + 0x18]
// 004ed0ad: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ed0b3: FADD float ptr [EAX]
// 004ed0b5: FSTP float ptr [EAX]
// 004ed0b7: FLD float ptr [ECX + 0x18]
// 004ed0ba: FCOMP double ptr [0x0062e392]
//   XREF to: 0062e392 (READ)
// 004ed0c0: FNSTSW AX
// 004ed0c2: SAHF
// 004ed0c3: JA 0x004ed0c6
//   XREF to: 004ed0c6 (CONDITIONAL_JUMP)
// 004ed0c5: RET
// 004ed0c6: MOV dword ptr [ECX + 0x18],0x40680000
//   Label: LAB_004ed0c6
// 004ed0cd: RET
