// Name: crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c
// Address: 0060db8c
// Address Range: [[0060db8c, 0060dbe7]]
// Convention: __watcallStack
// Signature: streambuf * crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c(filebuf * this_ptr, char * buffer_ptr, int buffer_size)
// Function calls:
//   crt_iostream.cpp_setBuffer_FUN_0060d6a8

#include "nocturne.h"

streambuf * __watcallStack
crt_fstream_cpp_filebuf_setbuf_FUN_0060db8c(filebuf *this_ptr,char *buffer_ptr,int buffer_size)

{
  char *buffer_end;
  
  if ((this_ptr->__file_handle != -1) && ((this_ptr->streambuf).__reserve_base != (char *)0x0)) {
    return (streambuf *)0x0;
  }
  if ((buffer_ptr == (char *)0x0) || (buffer_size < 1)) {
    buffer_end = (char *)0x0;
    buffer_ptr = (char *)0x0;
  }
  else {
    if (buffer_size < 5) {
      crt_iostream_cpp_setBuffer_FUN_0060d6a8(&this_ptr->streambuf,(void *)0x0,(void *)0x0,0);
      return (streambuf *)0x0;
    }
    buffer_end = buffer_ptr + buffer_size;
  }
  crt_iostream_cpp_setBuffer_FUN_0060d6a8(&this_ptr->streambuf,buffer_ptr,buffer_end,0);
  return &this_ptr->streambuf;
}


// Assembly code:
// 0060db8c: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_setbuf_FUN_0060db8c
// 0060db8d: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060db91: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060db95: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0060db99: MOV EAX,dword ptr [EBX + 0x2c]
// 0060db9c: CMP EAX,-0x1
// 0060db9f: JZ 0x0060dba8
//   XREF to: 0060dba8 (CONDITIONAL_JUMP)
// 0060dba1: MOV EAX,dword ptr [EBX + 0x4]
// 0060dba4: TEST EAX,EAX
// 0060dba6: JNZ 0x0060dbbf
//   XREF to: 0060dbbf (CONDITIONAL_JUMP)
// 0060dba8: TEST ECX,ECX
//   Label: LAB_0060dba8
// 0060dbaa: JNZ 0x0060dbc5
//   XREF to: 0060dbc5 (CONDITIONAL_JUMP)
// 0060dbac: PUSH 0x0
//   Label: LAB_0060dbac
// 0060dbae: PUSH 0x0
// 0060dbb0: PUSH 0x0
// 0060dbb2: PUSH EBX
//   Label: LAB_0060dbb2
// 0060dbb3: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060dbb8: ADD ESP,0x10
// 0060dbbb: MOV EAX,EBX
// 0060dbbd: POP EBX
// 0060dbbe: RET
// 0060dbbf: XOR EBX,EBX
//   Label: LAB_0060dbbf
// 0060dbc1: MOV EAX,EBX
// 0060dbc3: POP EBX
// 0060dbc4: RET
// 0060dbc5: TEST EDX,EDX
//   Label: LAB_0060dbc5
// 0060dbc7: JLE 0x0060dbac
//   XREF to: 0060dbac (CONDITIONAL_JUMP)
// 0060dbc9: CMP EDX,0x4
// 0060dbcc: JLE 0x0060dbd7
//   XREF to: 0060dbd7 (CONDITIONAL_JUMP)
// 0060dbce: PUSH 0x0
// 0060dbd0: LEA EAX,[ECX + EDX*0x1]
// 0060dbd3: PUSH EAX
// 0060dbd4: PUSH ECX
// 0060dbd5: JMP 0x0060dbb2
//   XREF to: 0060dbb2 (UNCONDITIONAL_JUMP)
// 0060dbd7: PUSH 0x0
//   Label: LAB_0060dbd7
// 0060dbd9: PUSH 0x0
// 0060dbdb: PUSH 0x0
// 0060dbdd: PUSH EBX
// 0060dbde: CALL crt_iostream.cpp_setBuffer_FUN_0060d6a8
//   XREF to: 0060d6a8 (UNCONDITIONAL_CALL)
// 0060dbe3: ADD ESP,0x10
// 0060dbe6: JMP 0x0060dbbf
//   XREF to: 0060dbbf (UNCONDITIONAL_JUMP)
