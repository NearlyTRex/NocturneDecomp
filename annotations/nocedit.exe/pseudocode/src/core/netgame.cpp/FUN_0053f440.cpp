// Name: core_netgame.cpp_FUN_0053f440
// Address: 0053f440
// Address Range: [[0053f440, 0053f496]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_0053f440()
// Globals:
//   double DOUBLE_0063d235 = 0.0000152587890625
//   double DOUBLE_0063d23d = 30
//   uint g_CurrentGameTime

#include "nocturne.h"

float core_netgame_cpp_FUN_0053f440(void)

{
  int in_stack_00000004;
  undefined4 local_10;
  
  local_10 = (float)(int)(g_CurrentGameTime - in_stack_00000004) * (float)DOUBLE_0063d235;
  if (local_10 < 0.0) {
    local_10 = 0.0;
  }
  if (local_10 <= (float)DOUBLE_0063d23d) {
    return local_10;
  }
  return 30.0;
}


// Assembly code:
// 0053f440: PUSH EBP
//   Label: core_netgame.cpp_FUN_0053f440
// 0053f441: MOV EBP,ESP
// 0053f443: SUB ESP,0x8
// 0053f446: AND ESP,0xfffffff8
// 0053f449: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0053f44c: MOV EAX,[0x02f7c8b8]
//   XREF to: 02f7c8b8 (READ)
// 0053f451: SUB EAX,EDX
// 0053f453: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 0053f457: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 0053f45b: FMUL double ptr [0x0063d235]
//   XREF to: 0063d235 (READ)
// 0053f461: FST float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f464: FLDZ
// 0053f466: FCOMPP
// 0053f468: FNSTSW AX
// 0053f46a: SAHF
// 0053f46b: JA 0x0053f482
//   XREF to: 0053f482 (CONDITIONAL_JUMP)
// 0053f46d: FLD float ptr [ESP]
//   Label: LAB_0053f46d
//   XREF to: Stack[-0x10] (DATA)
// 0053f470: FCOMP double ptr [0x0063d23d]
//   XREF to: 0063d23d (READ)
// 0053f476: FNSTSW AX
// 0053f478: SAHF
// 0053f479: JA 0x0053f489
//   XREF to: 0053f489 (CONDITIONAL_JUMP)
// 0053f47b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f47e: MOV ESP,EBP
// 0053f480: POP EBP
// 0053f481: RET
// 0053f482: XOR ECX,ECX
//   Label: LAB_0053f482
// 0053f484: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x10] (DATA)
// 0053f487: JMP 0x0053f46d
//   XREF to: 0053f46d (UNCONDITIONAL_JUMP)
// 0053f489: MOV dword ptr [ESP],0x41f00000
//   Label: LAB_0053f489
//   XREF to: Stack[-0x10] (DATA)
// 0053f490: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 0053f493: MOV ESP,EBP
// 0053f495: POP EBP
// 0053f496: RET
