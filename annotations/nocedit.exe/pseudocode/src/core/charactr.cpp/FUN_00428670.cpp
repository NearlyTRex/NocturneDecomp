// Name: core_charactr.cpp_FUN_00428670
// Address: 00428670
// Address Range: [[00428670, 004286d1]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_00428670()
// Function calls:
//   core_actor.cpp_FUN_0040cd70

#include "nocturne.h"

float core_charactr_cpp_FUN_00428670(void)

{
  float fVar1;
  float fVar2;
  float in_stack_00000004;
  float in_stack_0000000c;
  
  fVar1 = core_actor_cpp_FUN_0040cd70(in_stack_00000004);
  fVar2 = -in_stack_0000000c;
  if ((-in_stack_0000000c <= fVar1) && (fVar2 = in_stack_0000000c, fVar1 <= in_stack_0000000c)) {
    return fVar1;
  }
  return fVar2;
}


// Assembly code:
// 00428670: SUB ESP,0xc
//   Label: core_charactr.cpp_FUN_00428670
// 00428673: PUSH dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00428677: CALL core_actor.cpp_FUN_0040cd70
//   XREF to: 0040cd70 (UNCONDITIONAL_CALL)
// 0042867c: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 00428680: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x4] (READ)
// 00428684: ADD ESP,0x4
// 00428687: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0042868b: FXCH
// 0042868d: FST float ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (WRITE)
// 00428691: FXCH
// 00428693: FCHS
// 00428695: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00428698: FCOMP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 0042869b: FNSTSW AX
// 0042869d: SAHF
// 0042869e: JC 0x004286bd
//   XREF to: 004286bd (CONDITIONAL_JUMP)
// 004286a0: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004286a4: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004286a8: FNSTSW AX
// 004286aa: SAHF
// 004286ab: JBE 0x004286c2
//   XREF to: 004286c2 (CONDITIONAL_JUMP)
// 004286ad: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004286b1: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_004286b1
//   XREF to: Stack[-0x8] (WRITE)
// 004286b5: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004286b9: ADD ESP,0xc
// 004286bc: RET
// 004286bd: MOV EAX,dword ptr [ESP]
//   Label: LAB_004286bd
//   XREF to: Stack[-0xc] (DATA)
// 004286c0: JMP 0x004286b1
//   XREF to: 004286b1 (UNCONDITIONAL_JUMP)
// 004286c2: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_004286c2
//   XREF to: Stack[0x4] (READ)
// 004286c6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004286ca: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004286ce: ADD ESP,0xc
// 004286d1: RET
