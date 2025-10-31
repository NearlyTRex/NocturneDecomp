// Name: core_marquee.cpp_FUN_0050bc30
// Address: 0050bc30
// Address Range: [[0050bc30, 0050bd53]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bc30()
// Function calls:
//   core_course.cpp_CCourse_FUN_00442710

#include "nocturne.h"

void core_marquee_cpp_FUN_0050bc30(void)

{
  CCourse *this_ptr;
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  float local_1c;
  float local_18;
  
  *(undefined4 *)(in_stack_00000004 + 0x188) = 0x461c3f9a;
  *(undefined4 *)(in_stack_00000004 + 0x18c) = 0x461c3f9a;
  *(undefined4 *)(in_stack_00000004 + 400) = 0xc61c3f9a;
  *(undefined4 *)(in_stack_00000004 + 0x194) = 0xc61c3f9a;
  *(undefined4 *)(in_stack_00000004 + 0x198) = 0xc61c3f9a;
  this_ptr = (CCourse *)(in_stack_00000004 + 0x1a4);
  *(undefined4 *)(in_stack_00000004 + 0x184) = 0x461c3f9a;
  iVar2 = 0;
  if (this_ptr->len < 1) {
    return;
  }
  do {
    fVar1 = (float)iVar2;
    core_course_cpp_CCourse_FUN_00442710(this_ptr);
    if (local_1c < *(float *)(in_stack_00000004 + 0x184)) {
      *(float *)(in_stack_00000004 + 0x184) = local_1c;
    }
    if (*(float *)(in_stack_00000004 + 400) < local_1c) {
      *(float *)(in_stack_00000004 + 400) = local_1c;
    }
    if (local_18 < *(float *)(in_stack_00000004 + 0x188)) {
      *(float *)(in_stack_00000004 + 0x188) = local_18;
    }
    if (*(float *)(in_stack_00000004 + 0x194) < local_18) {
      *(float *)(in_stack_00000004 + 0x194) = local_18;
    }
    if (fVar1 < *(float *)(in_stack_00000004 + 0x18c)) {
      *(float *)(in_stack_00000004 + 0x18c) = fVar1;
    }
    if (*(float *)(in_stack_00000004 + 0x198) < fVar1) {
      *(float *)(in_stack_00000004 + 0x198) = fVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < this_ptr->len);
  return;
}


// Assembly code:
// 0050bc30: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050bc30
// 0050bc31: PUSH ESI
// 0050bc32: PUSH EDI
// 0050bc33: SUB ESP,0x20
// 0050bc36: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 0050bc3a: MOV dword ptr [EBX + 0x188],0x461c3f9a
// 0050bc44: MOV dword ptr [EBX + 0x18c],0x461c3f9a
// 0050bc4e: MOV dword ptr [EBX + 0x190],0xc61c3f9a
// 0050bc58: MOV dword ptr [EBX + 0x194],0xc61c3f9a
// 0050bc62: MOV dword ptr [EBX + 0x198],0xc61c3f9a
// 0050bc6c: LEA EDI,[EBX + 0x1a4]
// 0050bc72: MOV dword ptr [EBX + 0x184],0x461c3f9a
// 0050bc7c: XOR ESI,ESI
// 0050bc7e: MOV EAX,dword ptr [EDI]
// 0050bc80: CMP ESI,EAX
// 0050bc82: JL 0x0050bc8b
//   XREF to: 0050bc8b (CONDITIONAL_JUMP)
// 0050bc84: ADD ESP,0x20
// 0050bc87: POP EDI
// 0050bc88: POP ESI
// 0050bc89: POP EBX
// 0050bc8a: RET
// 0050bc8b: MOV EAX,ESP
//   Label: LAB_0050bc8b
// 0050bc8d: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0050bc91: PUSH EAX
// 0050bc92: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x20] (DATA)
// 0050bc96: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 0050bc9a: PUSH EAX
// 0050bc9b: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (WRITE)
// 0050bc9f: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 0050bca3: PUSH EDI
// 0050bca4: CALL core_course.cpp_CCourse_FUN_00442710
//   XREF to: 00442710 (UNCONDITIONAL_CALL)
// 0050bca9: ADD ESP,0x10
// 0050bcac: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0050bcb0: FCOMP float ptr [EBX + 0x184]
// 0050bcb6: FNSTSW AX
// 0050bcb8: SAHF
// 0050bcb9: JNC 0x0050bcc5
//   XREF to: 0050bcc5 (CONDITIONAL_JUMP)
// 0050bcbb: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0050bcbf: MOV dword ptr [EBX + 0x184],EAX
// 0050bcc5: FLD float ptr [ESP + 0xc]
//   Label: LAB_0050bcc5
//   XREF to: Stack[-0x20] (READ)
// 0050bcc9: FCOMP float ptr [EBX + 0x190]
// 0050bccf: FNSTSW AX
// 0050bcd1: SAHF
// 0050bcd2: JBE 0x0050bcde
//   XREF to: 0050bcde (CONDITIONAL_JUMP)
// 0050bcd4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 0050bcd8: MOV dword ptr [EBX + 0x190],EAX
// 0050bcde: FLD float ptr [ESP + 0x10]
//   Label: LAB_0050bcde
//   XREF to: Stack[-0x1c] (READ)
// 0050bce2: FCOMP float ptr [EBX + 0x188]
// 0050bce8: FNSTSW AX
// 0050bcea: SAHF
// 0050bceb: JNC 0x0050bcf7
//   XREF to: 0050bcf7 (CONDITIONAL_JUMP)
// 0050bced: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0050bcf1: MOV dword ptr [EBX + 0x188],EAX
// 0050bcf7: FLD float ptr [ESP + 0x10]
//   Label: LAB_0050bcf7
//   XREF to: Stack[-0x1c] (READ)
// 0050bcfb: FCOMP float ptr [EBX + 0x194]
// 0050bd01: FNSTSW AX
// 0050bd03: SAHF
// 0050bd04: JBE 0x0050bd10
//   XREF to: 0050bd10 (CONDITIONAL_JUMP)
// 0050bd06: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0050bd0a: MOV dword ptr [EBX + 0x194],EAX
// 0050bd10: FLD float ptr [ESP + 0x14]
//   Label: LAB_0050bd10
//   XREF to: Stack[-0x18] (READ)
// 0050bd14: FCOMP float ptr [EBX + 0x18c]
// 0050bd1a: FNSTSW AX
// 0050bd1c: SAHF
// 0050bd1d: JNC 0x0050bd29
//   XREF to: 0050bd29 (CONDITIONAL_JUMP)
// 0050bd1f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0050bd23: MOV dword ptr [EBX + 0x18c],EAX
// 0050bd29: FLD float ptr [ESP + 0x14]
//   Label: LAB_0050bd29
//   XREF to: Stack[-0x18] (READ)
// 0050bd2d: FCOMP float ptr [EBX + 0x198]
// 0050bd33: FNSTSW AX
// 0050bd35: SAHF
// 0050bd36: JBE 0x0050bd42
//   XREF to: 0050bd42 (CONDITIONAL_JUMP)
// 0050bd38: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 0050bd3c: MOV dword ptr [EBX + 0x198],EAX
// 0050bd42: INC ESI
//   Label: LAB_0050bd42
// 0050bd43: MOV EAX,dword ptr [EDI]
// 0050bd45: CMP ESI,EAX
// 0050bd47: JL 0x0050bc8b
//   XREF to: 0050bc8b (CONDITIONAL_JUMP)
// 0050bd4d: ADD ESP,0x20
// 0050bd50: POP EDI
// 0050bd51: POP ESI
// 0050bd52: POP EBX
// 0050bd53: RET
