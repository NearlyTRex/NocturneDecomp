// Name: core_gabriela.cpp_FUN_004d2a30
// Address: 004d2a30
// Address Range: [[004d2a30, 004d2a7d]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2a30()
// Cross-references:
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d4ef1 [DATA]
// Globals:
//   double DOUBLE_0062ac8d = 0.700000000000000
//   undefined4 DAT_02d7b844

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d2a30(undefined1 param_1, undefined1
   param_2, undefined4 param_3, undefined4 param_4) */

float core_gabriela_cpp_FUN_004d2a30(void)

{
  float in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_c;
  
  local_c = in_stack_0000000c * _DAT_02d7b844;
  if (in_stack_00000010 < 1) {
    local_c = local_c * (float)DOUBLE_0062ac8d;
  }
  else if (in_stack_00000010 != 1) {
    return in_stack_0000000c;
  }
  return local_c;
}


// Assembly code:
// 004d2a30: PUSH EBP
//   Label: core_gabriela.cpp_FUN_004d2a30
// 004d2a31: MOV EBP,ESP
// 004d2a33: SUB ESP,0x8
// 004d2a36: AND ESP,0xfffffff8
// 004d2a39: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 004d2a3c: FLD float ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 004d2a3f: FMUL float ptr [0x02d7b844]
//   XREF to: 02d7b844 (READ)
// 004d2a45: FSTP float ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004d2a48: TEST EAX,EAX
// 004d2a4a: JLE 0x004d2a60
//   XREF to: 004d2a60 (CONDITIONAL_JUMP)
// 004d2a4c: CMP EAX,0x1
// 004d2a4f: JNZ 0x004d2a6f
//   XREF to: 004d2a6f (CONDITIONAL_JUMP)
// 004d2a51: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004d2a54: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004d2a58: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_004d2a58
//   XREF to: Stack[-0xc] (READ)
// 004d2a5c: MOV ESP,EBP
// 004d2a5e: POP EBP
// 004d2a5f: RET
// 004d2a60: FLD float ptr [ESP]
//   Label: LAB_004d2a60
//   XREF to: Stack[-0x10] (DATA)
// 004d2a63: FMUL double ptr [0x0062ac8d]
//   XREF to: 0062ac8d (READ)
// 004d2a69: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (WRITE)
// 004d2a6d: JMP 0x004d2a58
//   XREF to: 004d2a58 (UNCONDITIONAL_JUMP)
// 004d2a6f: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_004d2a6f
//   XREF to: Stack[0xc] (READ)
// 004d2a72: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004d2a76: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc] (READ)
// 004d2a7a: MOV ESP,EBP
// 004d2a7c: POP EBP
// 004d2a7d: RET
