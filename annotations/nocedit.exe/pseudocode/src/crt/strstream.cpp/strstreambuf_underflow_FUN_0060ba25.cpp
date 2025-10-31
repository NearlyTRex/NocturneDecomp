// Name: crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25
// Address: 0060ba25
// Address Range: [[0060ba25, 0060ba6f]]
// Convention: __watcallStack
// Signature: int crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf * this_ptr)

#include "nocturne.h"

int __watcallStack crt_strstream_cpp_strstreambuf_underflow_FUN_0060ba25(strstreambuf *this_ptr)

{
  char *pcVar1;
  char *pcVar2;
  
  if (((uint)this_ptr[1].streambuf.__b_lock & 4) == 0) {
    pcVar1 = (this_ptr->streambuf).__put_ptr;
    if (pcVar1 <= (this_ptr->streambuf).__get_end) {
      return -1;
    }
    if ((this_ptr->streambuf).__get_ptr == (char *)0x0) {
      pcVar2 = (this_ptr->streambuf).__put_base;
      (this_ptr->streambuf).__get_end = pcVar1;
      (this_ptr->streambuf).__get_base = pcVar2;
      (this_ptr->streambuf).__get_ptr = pcVar2;
    }
    else {
      (this_ptr->streambuf).__get_end = pcVar1;
    }
  }
  else {
    (this_ptr->streambuf).__get_end = (this_ptr->streambuf).__get_end + 0x200;
  }
  return (uint)(byte)*(this_ptr->streambuf).__get_ptr;
}


// Assembly code:
// 0060ba25: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_strstreambuf_underflow_FUN_0060ba25
//   XREF to: Stack[0x4] (READ)
// 0060ba29: TEST byte ptr [EAX + 0x3c],0x4
// 0060ba2d: JNZ 0x0060ba4e
//   XREF to: 0060ba4e (CONDITIONAL_JUMP)
// 0060ba2f: MOV EDX,dword ptr [EAX + 0x20]
// 0060ba32: MOV ECX,dword ptr [EAX + 0x10]
// 0060ba35: CMP EDX,ECX
// 0060ba37: JBE 0x0060ba6a
//   XREF to: 0060ba6a (CONDITIONAL_JUMP)
// 0060ba39: MOV ECX,dword ptr [EAX + 0x14]
// 0060ba3c: TEST ECX,ECX
// 0060ba3e: JZ 0x0060ba5c
//   XREF to: 0060ba5c (CONDITIONAL_JUMP)
// 0060ba40: MOV dword ptr [EAX + 0x10],EDX
// 0060ba43: MOV EAX,dword ptr [EAX + 0x14]
//   Label: LAB_0060ba43
// 0060ba46: MOV AL,byte ptr [EAX]
// 0060ba48: AND EAX,0xff
// 0060ba4d: RET
// 0060ba4e: MOV ECX,dword ptr [EAX + 0x10]
//   Label: LAB_0060ba4e
// 0060ba51: ADD ECX,0x200
// 0060ba57: MOV dword ptr [EAX + 0x10],ECX
// 0060ba5a: JMP 0x0060ba43
//   XREF to: 0060ba43 (UNCONDITIONAL_JUMP)
// 0060ba5c: MOV ECX,dword ptr [EAX + 0x18]
//   Label: LAB_0060ba5c
// 0060ba5f: MOV dword ptr [EAX + 0x10],EDX
// 0060ba62: MOV dword ptr [EAX + 0xc],ECX
// 0060ba65: MOV dword ptr [EAX + 0x14],ECX
// 0060ba68: JMP 0x0060ba43
//   XREF to: 0060ba43 (UNCONDITIONAL_JUMP)
// 0060ba6a: MOV EAX,0xffffffff
//   Label: LAB_0060ba6a
// 0060ba6f: RET
