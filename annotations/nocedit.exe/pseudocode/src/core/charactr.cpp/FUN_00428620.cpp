// Name: core_charactr.cpp_FUN_00428620
// Address: 00428620
// Address Range: [[00428620, 00428669]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_FUN_00428620()

#include "nocturne.h"

float core_charactr_cpp_FUN_00428620(void)

{
  float fVar1;
  float in_stack_00000004;
  float in_stack_00000008;
  
  fVar1 = -in_stack_00000008;
  if ((-in_stack_00000008 <= in_stack_00000004) &&
     (fVar1 = in_stack_00000008, in_stack_00000004 <= in_stack_00000008)) {
    return in_stack_00000004;
  }
  return fVar1;
}


// Assembly code:
// 00428620: SUB ESP,0x8
//   Label: core_charactr.cpp_FUN_00428620
// 00428623: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00428627: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0042862b: FCHS
// 0042862d: FSTP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00428630: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00428633: FNSTSW AX
// 00428635: SAHF
// 00428636: JC 0x00428655
//   XREF to: 00428655 (CONDITIONAL_JUMP)
// 00428638: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042863c: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00428640: FNSTSW AX
// 00428642: SAHF
// 00428643: JBE 0x0042865a
//   XREF to: 0042865a (CONDITIONAL_JUMP)
// 00428645: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00428649: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_00428649
//   XREF to: Stack[-0x4] (WRITE)
// 0042864d: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 00428651: ADD ESP,0x8
// 00428654: RET
// 00428655: MOV EAX,dword ptr [ESP]
//   Label: LAB_00428655
//   XREF to: Stack[-0x8] (DATA)
// 00428658: JMP 0x00428649
//   XREF to: 00428649 (UNCONDITIONAL_JUMP)
// 0042865a: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0042865a
//   XREF to: Stack[0x4] (READ)
// 0042865e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x4] (WRITE)
// 00428662: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 00428666: ADD ESP,0x8
// 00428669: RET
