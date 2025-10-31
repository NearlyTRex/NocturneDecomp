// Name: core_gore.cpp_FUN_004ecad0
// Address: 004ecad0
// Address Range: [[004ecad0, 004ecafd]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecad0()
// Cross-references:
//   core_gore.cpp_CGore_process_FUN_004ed9e0 (004ed9e0) at 004eda1d [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062e31a = 2
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.delta_time_float

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ecad0(undefined4 param_1) */

void core_gore_cpp_FUN_004ecad0(void)

{
  int in_stack_00000004;
  
  *(float *)(in_stack_00000004 + 0x24) =
       g_CGamePtr->delta_time_float + *(float *)(in_stack_00000004 + 0x24);
  if (*(float *)(in_stack_00000004 + 0x24) <= (float)DOUBLE_0062e31a) {
    return;
  }
  *(undefined4 *)(in_stack_00000004 + 0x24) = 0x40000000;
  return;
}


// Assembly code:
// 004ecad0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_gore.cpp_FUN_004ecad0
//   XREF to: Stack[0x4] (READ)
// 004ecad4: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004ecada: LEA EAX,[ECX + 0x24]
// 004ecadd: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ecae3: FADD float ptr [EAX]
// 004ecae5: FSTP float ptr [EAX]
// 004ecae7: FLD float ptr [ECX + 0x24]
// 004ecaea: FCOMP double ptr [0x0062e31a]
//   XREF to: 0062e31a (READ)
// 004ecaf0: FNSTSW AX
// 004ecaf2: SAHF
// 004ecaf3: JA 0x004ecaf6
//   XREF to: 004ecaf6 (CONDITIONAL_JUMP)
// 004ecaf5: RET
// 004ecaf6: MOV dword ptr [ECX + 0x24],0x40000000
//   Label: LAB_004ecaf6
// 004ecafd: RET
