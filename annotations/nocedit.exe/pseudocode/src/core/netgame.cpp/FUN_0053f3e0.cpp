// Name: core_netgame.cpp_FUN_0053f3e0
// Address: 0053f3e0
// Address Range: [[0053f3e0, 0053f438]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f3e0()
// Globals:
//   double DOUBLE_0063d21d = 0.0000152587890625
//   double DOUBLE_0063d225 = -30
//   double DOUBLE_0063d22d = 30

#include "nocturne.h"

float core_netgame_cpp_FUN_0053f3e0(void)

{
  int in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_10;
  
  local_10 = (float)(in_stack_00000008 - in_stack_00000004) * (float)DOUBLE_0063d21d;
  if (local_10 < (float)DOUBLE_0063d225) {
    local_10 = -30.0;
  }
  if (local_10 <= (float)DOUBLE_0063d22d) {
    return local_10;
  }
  return 30.0;
}


// Assembly code:
// 0053f3e0: PUSH EBP
//   Label: core_netgame.cpp_FUN_0053f3e0
// 0053f3e1: MOV EBP,ESP
// 0053f3e3: SUB ESP,0x8
// 0053f3e6: AND ESP,0xfffffff8
// 0053f3e9: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0053f3ec: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053f3ef: SUB EAX,EDX
// 0053f3f1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0053f3f5: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0053f3f9: FMUL double ptr [0x0063d21d]
//   XREF to: 0063d21d (READ)
// 0053f3ff: FST float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f402: FCOMP double ptr [0x0063d225]
//   XREF to: 0063d225 (READ)
// 0053f408: FNSTSW AX
// 0053f40a: SAHF
// 0053f40b: JC 0x0053f422
//   XREF to: 0053f422 (CONDITIONAL_JUMP)
// 0053f40d: FLD float ptr [ESP]
//   Label: LAB_0053f40d
//   XREF to: Stack[-0x10] (DATA)
// 0053f410: FCOMP double ptr [0x0063d22d]
//   XREF to: 0063d22d (READ)
// 0053f416: FNSTSW AX
// 0053f418: SAHF
// 0053f419: JA 0x0053f42b
//   XREF to: 0053f42b (CONDITIONAL_JUMP)
// 0053f41b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f41e: MOV ESP,EBP
// 0053f420: POP EBP
// 0053f421: RET
// 0053f422: MOV dword ptr [ESP],0xc1f00000
//   Label: LAB_0053f422
//   XREF to: Stack[-0x10] (DATA)
// 0053f429: JMP 0x0053f40d
//   XREF to: 0053f40d (UNCONDITIONAL_JUMP)
// 0053f42b: MOV dword ptr [ESP],0x41f00000
//   Label: LAB_0053f42b
//   XREF to: Stack[-0x10] (DATA)
// 0053f432: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f435: MOV ESP,EBP
// 0053f437: POP EBP
// 0053f438: RET
