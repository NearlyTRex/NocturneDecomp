// Name: crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
// Address: 0060d64f
// Address Range: [[0060d64f, 0060d676]]
// Convention: __watcallStack
// Signature: streambuf * crt_iostream.cpp_streambuf_destructor_FUN_0060d64f(streambuf * this_ptr)
// Cross-references:
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 (0060bdf9) at 0060be37 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f (0060bb7f) at 0060bbb8 [UNCONDITIONAL_CALL]
// Globals:
//   streambuf_vtable g_StreambufVTable
// Function calls:
//   crt_iostream.cpp_freeBuffer_FUN_0060d7a0

#include "nocturne.h"

streambuf * __watcallStack crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(streambuf *this_ptr)

{
  uint uVar1;
  
  uVar1 = this_ptr->__flags;
  this_ptr[1].__b_lock = &g_StreambufVTable;
  if ((uVar1 & 2) == 0) {
    return this_ptr;
  }
  crt_iostream_cpp_freeBuffer_FUN_0060d7a0(this_ptr->__reserve_base);
  return this_ptr;
}


// Assembly code:
// 0060d64f: PUSH EBX
//   Label: crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
// 0060d650: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060d654: MOV AH,byte ptr [EBX + 0x24]
// 0060d657: MOV dword ptr [EBX + 0x28],0x665f70
//   XREF to: 00665f70 (DATA)
// 0060d65e: TEST AH,0x2
// 0060d661: JNZ 0x0060d667
//   XREF to: 0060d667 (CONDITIONAL_JUMP)
// 0060d663: MOV EAX,EBX
// 0060d665: POP EBX
// 0060d666: RET
// 0060d667: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0060d667
// 0060d66a: PUSH EDX
// 0060d66b: CALL crt_iostream.cpp_freeBuffer_FUN_0060d7a0
//   XREF to: 0060d7a0 (UNCONDITIONAL_CALL)
// 0060d670: ADD ESP,0x4
// 0060d673: MOV EAX,EBX
// 0060d675: POP EBX
// 0060d676: RET
