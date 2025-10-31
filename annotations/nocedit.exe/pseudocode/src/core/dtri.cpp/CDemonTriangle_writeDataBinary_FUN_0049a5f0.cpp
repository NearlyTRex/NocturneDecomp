// Name: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
// Address: 0049a5f0
// Address Range: [[0049a5f0, 0049a63d]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0(CDemonTriangle * this_ptr, FILE * file_handle)
// Function calls:
//   crt_stdio.c_fwrite_FUN_005fdc00

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
          (CDemonTriangle *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fwrite_FUN_005fdc00(this_ptr,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex2,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->vertex3,0xc,1,file_handle);
  crt_stdio_c_fwrite_FUN_005fdc00(&this_ptr->normal,0x14,1,file_handle);
  return;
}


// Assembly code:
// 0049a5f0: PUSH EBX
//   Label: core_dtri.cpp_CDemonTriangle_writeDataBinary_FUN_0049a5f0
// 0049a5f1: PUSH ESI
// 0049a5f2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049a5f6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0049a5fa: PUSH ESI
// 0049a5fb: PUSH 0x1
// 0049a5fd: PUSH 0xc
// 0049a5ff: PUSH EBX
// 0049a600: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0049a605: ADD ESP,0x10
// 0049a608: PUSH ESI
// 0049a609: PUSH 0x1
// 0049a60b: PUSH 0xc
// 0049a60d: LEA EAX,[EBX + 0xc]
// 0049a610: PUSH EAX
// 0049a611: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0049a616: ADD ESP,0x10
// 0049a619: PUSH ESI
// 0049a61a: PUSH 0x1
// 0049a61c: PUSH 0xc
// 0049a61e: LEA EAX,[EBX + 0x18]
// 0049a621: PUSH EAX
// 0049a622: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0049a627: ADD ESP,0x10
// 0049a62a: PUSH ESI
// 0049a62b: PUSH 0x1
// 0049a62d: PUSH 0x14
// 0049a62f: ADD EBX,0x24
// 0049a632: PUSH EBX
// 0049a633: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 0049a638: ADD ESP,0x10
// 0049a63b: POP ESI
// 0049a63c: POP EBX
// 0049a63d: RET
