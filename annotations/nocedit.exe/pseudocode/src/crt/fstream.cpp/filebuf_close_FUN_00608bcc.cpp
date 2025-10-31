// Name: crt_fstream.cpp_filebuf_close_FUN_00608bcc
// Address: 00608bcc
// Address Range: [[00608bcc, 00608c14]]
// Convention: __watcallStack
// Signature: filebuf * crt_fstream.cpp_filebuf_close_FUN_00608bcc(filebuf * this_ptr)
// Cross-references:
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9 (0060bdf9) at 0060be2c [UNCONDITIONAL_CALL]
//   crt_stdio.c_fflush_FUN_00600e29 (00600e29) at 00600e3d [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_close_handle_safe_FUN_0060c2e0

#include "nocturne.h"

filebuf * __watcallStack crt_fstream_cpp_filebuf_close_FUN_00608bcc(filebuf *this_ptr)

{
  int iVar1;
  int iVar2;
  
  if (this_ptr->__file_handle != -1) {
    iVar1 = (*this_ptr->__vtable->sync)(&this_ptr->streambuf);
    iVar2 = this_ptr->__file_handle;
    this_ptr->__file_handle = -1;
    this_ptr->__attached = this_ptr->__attached & 0xfe;
    iVar2 = crt_io_c_close_handle_safe_FUN_0060c2e0(iVar2);
    if ((iVar2 == 0) && (iVar1 != -1)) {
      return this_ptr;
    }
  }
  return (filebuf *)0x0;
}


// Assembly code:
// 00608bcc: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_close_FUN_00608bcc
// 00608bcd: PUSH ESI
// 00608bce: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00608bd2: MOV EAX,dword ptr [EBX + 0x2c]
// 00608bd5: CMP EAX,-0x1
// 00608bd8: JNZ 0x00608bdf
//   XREF to: 00608bdf (CONDITIONAL_JUMP)
// 00608bda: XOR EAX,EAX
//   Label: LAB_00608bda
// 00608bdc: POP ESI
//   Label: LAB_00608bdc
// 00608bdd: POP EBX
// 00608bde: RET
// 00608bdf: PUSH EBX
//   Label: LAB_00608bdf
// 00608be0: MOV EAX,dword ptr [EBX + 0x28]
// 00608be3: CALL dword ptr [EAX + 0x20]
// 00608be6: MOV ESI,EAX
// 00608be8: MOV DL,byte ptr [EBX + 0x39]
// 00608beb: ADD ESP,0x4
// 00608bee: AND DL,0xfe
// 00608bf1: MOV EAX,dword ptr [EBX + 0x2c]
// 00608bf4: MOV dword ptr [EBX + 0x2c],0xffffffff
// 00608bfb: PUSH EAX
// 00608bfc: MOV byte ptr [EBX + 0x39],DL
// 00608bff: CALL crt_io.c_close_handle_safe_FUN_0060c2e0
//   XREF to: 0060c2e0 (UNCONDITIONAL_CALL)
// 00608c04: ADD ESP,0x4
// 00608c07: TEST EAX,EAX
// 00608c09: JNZ 0x00608bda
//   XREF to: 00608bda (CONDITIONAL_JUMP)
// 00608c0b: CMP ESI,-0x1
// 00608c0e: JZ 0x00608bdc
//   XREF to: 00608bdc (CONDITIONAL_JUMP)
// 00608c10: MOV EAX,EBX
// 00608c12: POP ESI
// 00608c13: POP EBX
// 00608c14: RET
