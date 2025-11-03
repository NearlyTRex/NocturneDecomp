// Name: core_pendulum.cpp_FUN_0054a5a0
// Address: 0054a5a0
// Address Range: [[0054a5a0, 0054a5da]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a5a0()
// Cross-references:
//   core_pendulum.cpp_FUN_0054a5f0 (0054a5f0) at 0054a6e3 [DATA]
// Globals:
//   TerminatedCString s_f_0063edb1
//   double DOUBLE_0063edb9 = 0.5
//   undefined4 g_CPendulumClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   crt_stdio.c_sprintf_FUN_005fdbd0

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a5a0(undefined4 param_1, undefined1
   param_2, undefined4 param_3) */

void core_pendulum_cpp_FUN_0054a5a0(void)

{
  CDemonActor *pCVar1;
  CDemonActor *in_stack_00000004;
  char *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000004,g_CPendulumClassInfo.name_hash);
  crt_stdio_c_sprintf_FUN_005fdbd0
            (in_stack_00000010,"%f",
             (double)(pCVar1[2].field13_0xec.z * (float)DOUBLE_0063edb9));
  return;
}


// Assembly code:
// 0054a5a0: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a5a0
// 0054a5a1: MOV EDX,dword ptr [0x030d5050]
//   XREF to: 030d5050 (READ)
// 0054a5a7: PUSH EDX
// 0054a5a8: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054a5ac: PUSH ECX
// 0054a5ad: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0054a5b2: FLD float ptr [EAX + 0x3a4]
// 0054a5b8: ADD ESP,0x8
// 0054a5bb: FMUL double ptr [0x0063edb9]
//   XREF to: 0063edb9 (READ)
// 0054a5c1: SUB ESP,0x8
// 0054a5c4: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0054a5c7: PUSH 0x63edb1
//   XREF to: 0063edb1 (DATA)
// 0054a5cc: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0054a5d0: PUSH EBX
// 0054a5d1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0054a5d6: ADD ESP,0x10
// 0054a5d9: POP EBX
// 0054a5da: RET
