// Name: crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8
// Address: 0060dbe8
// Address Range: [[0060dbe8, 0060dc5d]]
// Convention: __watcallStack
// Signature: int crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8(filebuf * this_ptr, long offset, int direction, int mode)
// Function calls:
//   crt_stdio.c_lseek_FUN_00606690

#include "nocturne.h"

int __watcallStack
crt_fstream_cpp_filebuf_seekoff_FUN_0060dbe8(filebuf *this_ptr,long offset,int direction,int mode)

{
  int iVar1;
  
  iVar1 = this_ptr->__file_handle;
  if (iVar1 != -1) {
    if ((((this_ptr->streambuf).__put_ptr != (this_ptr->streambuf).__put_base) ||
        ((this_ptr->streambuf).__get_end != (this_ptr->streambuf).__get_ptr)) &&
       (iVar1 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf), iVar1 == -1)) {
      return -1;
    }
    if (direction == 0) {
      iVar1 = 0;
    }
    else if ((uint)direction < 2) {
      iVar1 = 1;
    }
    else {
      if (direction != 2) {
        return -1;
      }
      iVar1 = 2;
    }
    iVar1 = crt_stdio_c_lseek_FUN_00606690(this_ptr->__file_handle,offset,iVar1);
  }
  return iVar1;
}


// Assembly code:
// 0060dbe8: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_seekoff_FUN_0060dbe8
// 0060dbe9: PUSH ESI
// 0060dbea: PUSH EBP
// 0060dbeb: MOV EBP,ESP
// 0060dbed: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060dbf0: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0060dbf3: MOV EAX,dword ptr [EBX + 0x2c]
// 0060dbf6: CMP EAX,-0x1
// 0060dbf9: JZ 0x0060dc2a
//   XREF to: 0060dc2a (CONDITIONAL_JUMP)
// 0060dbfb: MOV EAX,dword ptr [EBX + 0x20]
// 0060dbfe: SUB EAX,dword ptr [EBX + 0x18]
// 0060dc01: JNZ 0x0060dc2e
//   XREF to: 0060dc2e (CONDITIONAL_JUMP)
// 0060dc03: MOV EAX,dword ptr [EBX + 0x10]
// 0060dc06: SUB EAX,dword ptr [EBX + 0x14]
// 0060dc09: JNZ 0x0060dc2e
//   XREF to: 0060dc2e (CONDITIONAL_JUMP)
// 0060dc0b: CMP ESI,0x1
//   Label: LAB_0060dc0b
// 0060dc0e: JNC 0x0060dc55
//   XREF to: 0060dc55 (CONDITIONAL_JUMP)
// 0060dc10: TEST ESI,ESI
// 0060dc12: JNZ 0x0060dc4c
//   XREF to: 0060dc4c (CONDITIONAL_JUMP)
// 0060dc14: XOR EAX,EAX
// 0060dc16: PUSH EAX
//   Label: LAB_0060dc16
// 0060dc17: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060dc1a: PUSH ESI
// 0060dc1b: MOV EAX,dword ptr [EBX + 0x2c]
// 0060dc1e: PUSH EAX
// 0060dc1f: CALL crt_stdio.c_lseek_FUN_00606690
//   XREF to: 00606690 (UNCONDITIONAL_CALL)
// 0060dc24: ADD ESP,0xc
// 0060dc27: CMP EAX,-0x1
// 0060dc2a: POP EBP
//   Label: LAB_0060dc2a
// 0060dc2b: POP ESI
// 0060dc2c: POP EBX
// 0060dc2d: RET
// 0060dc2e: PUSH EBX
//   Label: LAB_0060dc2e
// 0060dc2f: MOV EAX,dword ptr [EBX + 0x28]
// 0060dc32: CALL dword ptr [EAX + 0x20]
// 0060dc35: ADD ESP,0x4
// 0060dc38: CMP EAX,-0x1
// 0060dc3b: JNZ 0x0060dc0b
//   XREF to: 0060dc0b (CONDITIONAL_JUMP)
// 0060dc3d: POP EBP
// 0060dc3e: POP ESI
// 0060dc3f: POP EBX
// 0060dc40: RET
// 0060dc41: MOV EAX,0x1
//   Label: LAB_0060dc41
// 0060dc46: JMP 0x0060dc16
//   XREF to: 0060dc16 (UNCONDITIONAL_JUMP)
// 0060dc48: MOV EAX,ESI
//   Label: LAB_0060dc48
// 0060dc4a: JMP 0x0060dc16
//   XREF to: 0060dc16 (UNCONDITIONAL_JUMP)
// 0060dc4c: MOV EAX,0xffffffff
//   Label: LAB_0060dc4c
// 0060dc51: POP EBP
// 0060dc52: POP ESI
// 0060dc53: POP EBX
// 0060dc54: RET
// 0060dc55: JBE 0x0060dc41
//   Label: LAB_0060dc55
//   XREF to: 0060dc41 (CONDITIONAL_JUMP)
// 0060dc57: CMP ESI,0x2
// 0060dc5a: JZ 0x0060dc48
//   XREF to: 0060dc48 (CONDITIONAL_JUMP)
// 0060dc5c: JMP 0x0060dc4c
//   XREF to: 0060dc4c (UNCONDITIONAL_JUMP)
