// Name: crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae
// Address: 0060d7ae
// Address Range: [[0060d7ae, 0060d880]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf * this_ptr, int character)
// Function calls:
//   crt_stdio.c_lseek_FUN_00606690

#include "nocturne.h"

int __watcallStack crt_fstream_cpp_filebuf_pbackfail_FUN_0060d7ae(filebuf *this_ptr,int character)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  long distance_to_move;
  bool bVar4;
  
  bVar4 = (this_ptr->streambuf).__reserve_base == (char *)0x0;
  if (bVar4) {
    if ((bVar4) && (((this_ptr->streambuf).__flags & 1) == 0)) {
      iVar2 = (*this_ptr->__vtable->doallocate)(&this_ptr->streambuf);
      if (iVar2 == -1) {
        return -1;
      }
    }
    pcVar1 = (this_ptr->streambuf).__reserve_base;
    if (pcVar1 == (char *)0x0) {
      (this_ptr->streambuf).__get_ptr = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_end = this_ptr->__unbuffered_get_area + 4;
      (this_ptr->streambuf).__get_base = this_ptr->__unbuffered_get_area;
    }
    else {
      (this_ptr->streambuf).__get_base = pcVar1;
      (this_ptr->streambuf).__get_ptr = pcVar1 + 4;
      (this_ptr->streambuf).__get_end = pcVar1 + 4;
    }
    pcVar1 = (this_ptr->streambuf).__get_ptr;
    if (pcVar1 <= (this_ptr->streambuf).__get_base) {
      iVar2 = (*this_ptr->__vtable->pbackfail)(&this_ptr->streambuf,character & 0xff);
      return iVar2;
    }
    pcVar1 = pcVar1 + -1;
    (this_ptr->streambuf).__get_ptr = pcVar1;
    *pcVar1 = (char)character;
    uVar3 = (uint)(byte)*(this_ptr->streambuf).__get_ptr;
  }
  else {
    uVar3 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf);
    if (uVar3 != 0xffffffff) {
      if ((character == 10) && ((this_ptr->__file_mode & 0x80) != 0)) {
        distance_to_move = -2;
      }
      else {
        distance_to_move = -1;
      }
      iVar2 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,distance_to_move,1);
      if (-1 < iVar2) {
        return character;
      }
      return -1;
    }
  }
  return uVar3;
}


// Assembly code:
// 0060d7ae: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_pbackfail_FUN_0060d7ae
// 0060d7af: PUSH ESI
// 0060d7b0: PUSH EBP
// 0060d7b1: MOV EBP,ESP
// 0060d7b3: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060d7b6: MOV EAX,dword ptr [EBX + 0x4]
// 0060d7b9: TEST EAX,EAX
// 0060d7bb: JNZ 0x0060d837
//   XREF to: 0060d837 (CONDITIONAL_JUMP)
// 0060d7c1: JZ 0x0060d7fa
//   XREF to: 0060d7fa (CONDITIONAL_JUMP)
// 0060d7c3: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0060d7c3
// 0060d7c6: TEST EAX,EAX
// 0060d7c8: JNZ 0x0060d815
//   XREF to: 0060d815 (CONDITIONAL_JUMP)
// 0060d7ca: LEA EAX,[EBX + 0x38]
// 0060d7cd: MOV dword ptr [EBX + 0x14],EAX
// 0060d7d0: LEA EDX,[EBX + 0x34]
// 0060d7d3: MOV dword ptr [EBX + 0x10],EAX
// 0060d7d6: MOV dword ptr [EBX + 0xc],EDX
// 0060d7d9: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_0060d7d9
// 0060d7dc: CMP EAX,dword ptr [EBX + 0xc]
// 0060d7df: JBE 0x0060d823
//   XREF to: 0060d823 (CONDITIONAL_JUMP)
// 0060d7e1: LEA ESI,[EAX + -0x1]
// 0060d7e4: MOV DL,byte ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060d7e7: MOV dword ptr [EBX + 0x14],ESI
// 0060d7ea: MOV byte ptr [ESI],DL
// 0060d7ec: MOV EAX,dword ptr [EBX + 0x14]
// 0060d7ef: MOV AL,byte ptr [EAX]
// 0060d7f1: AND EAX,0xff
// 0060d7f6: POP EBP
//   Label: LAB_0060d7f6
// 0060d7f7: POP ESI
// 0060d7f8: POP EBX
// 0060d7f9: RET
// 0060d7fa: MOV EAX,dword ptr [EBX + 0x24]
//   Label: LAB_0060d7fa
// 0060d7fd: AND EAX,0x1
// 0060d800: JNZ 0x0060d7c3
//   XREF to: 0060d7c3 (CONDITIONAL_JUMP)
// 0060d802: PUSH EBX
// 0060d803: MOV EAX,dword ptr [EBX + 0x28]
// 0060d806: CALL dword ptr [EAX + 0x28]
// 0060d809: ADD ESP,0x4
// 0060d80c: CMP EAX,-0x1
// 0060d80f: JNZ 0x0060d7c3
//   XREF to: 0060d7c3 (CONDITIONAL_JUMP)
// 0060d811: POP EBP
// 0060d812: POP ESI
// 0060d813: POP EBX
// 0060d814: RET
// 0060d815: LEA EDX,[EAX + 0x4]
//   Label: LAB_0060d815
// 0060d818: MOV dword ptr [EBX + 0xc],EAX
// 0060d81b: MOV dword ptr [EBX + 0x14],EDX
// 0060d81e: MOV dword ptr [EBX + 0x10],EDX
// 0060d821: JMP 0x0060d7d9
//   XREF to: 0060d7d9 (UNCONDITIONAL_JUMP)
// 0060d823: XOR EDX,EDX
//   Label: LAB_0060d823
// 0060d825: MOV DL,byte ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060d828: PUSH EDX
// 0060d829: MOV EAX,dword ptr [EBX + 0x28]
// 0060d82c: PUSH EBX
// 0060d82d: CALL dword ptr [EAX + 0x8]
// 0060d830: ADD ESP,0x8
// 0060d833: POP EBP
// 0060d834: POP ESI
// 0060d835: POP EBX
// 0060d836: RET
// 0060d837: PUSH EBX
//   Label: LAB_0060d837
// 0060d838: MOV EAX,dword ptr [EBX + 0x28]
// 0060d83b: CALL dword ptr [EAX + 0x20]
// 0060d83e: ADD ESP,0x4
// 0060d841: CMP EAX,-0x1
// 0060d844: JZ 0x0060d7f6
//   XREF to: 0060d7f6 (CONDITIONAL_JUMP)
// 0060d846: CMP dword ptr [EBP + 0x14],0xa
//   XREF to: Stack[0x8] (READ)
// 0060d84a: JNZ 0x0060d871
//   XREF to: 0060d871 (CONDITIONAL_JUMP)
// 0060d84c: TEST byte ptr [EBX + 0x30],0x80
// 0060d850: JZ 0x0060d871
//   XREF to: 0060d871 (CONDITIONAL_JUMP)
// 0060d852: MOV EAX,0xfffffffe
// 0060d857: PUSH 0x1
//   Label: LAB_0060d857
// 0060d859: PUSH EAX
// 0060d85a: MOV EAX,dword ptr [EBX + 0x2c]
// 0060d85d: PUSH EAX
// 0060d85e: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060d863: ADD ESP,0xc
// 0060d866: TEST EAX,EAX
// 0060d868: JL 0x0060d878
//   XREF to: 0060d878 (CONDITIONAL_JUMP)
// 0060d86a: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060d86d: POP EBP
// 0060d86e: POP ESI
// 0060d86f: POP EBX
// 0060d870: RET
// 0060d871: MOV EAX,0xffffffff
//   Label: LAB_0060d871
// 0060d876: JMP 0x0060d857
//   XREF to: 0060d857 (UNCONDITIONAL_JUMP)
// 0060d878: MOV EAX,0xffffffff
//   Label: LAB_0060d878
// 0060d87d: POP EBP
// 0060d87e: POP ESI
// 0060d87f: POP EBX
// 0060d880: RET
