// Name: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
// Address: 0049a5a0
// Address Range: [[0049a5a0, 0049a5ed]]
// Convention: __cdecl
// Signature: void core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0(CDemonTriangle * this_ptr, FILE * file_handle)
// Cross-references:
//   core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_004947a0 (004947a0) at 00494a04 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

void __cdecl
core_dtri_cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0(CDemonTriangle *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fread_FUN_005fd990(this_ptr,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex2,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->vertex3,0xc,1,file_handle);
  crt_stdio_c_fread_FUN_005fd990(&this_ptr->normal,0x14,1,file_handle);
  return;
}


// Assembly code:
// 0049a5a0: PUSH EBX
//   Label: core_dtri.cpp_CDemonTriangle_readDataBinary_FUN_0049a5a0
// 0049a5a1: PUSH ESI
// 0049a5a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0049a5a6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0049a5aa: PUSH ESI
// 0049a5ab: PUSH 0x1
// 0049a5ad: PUSH 0xc
// 0049a5af: PUSH EBX
// 0049a5b0: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0049a5b5: ADD ESP,0x10
// 0049a5b8: PUSH ESI
// 0049a5b9: PUSH 0x1
// 0049a5bb: PUSH 0xc
// 0049a5bd: LEA EAX,[EBX + 0xc]
// 0049a5c0: PUSH EAX
// 0049a5c1: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0049a5c6: ADD ESP,0x10
// 0049a5c9: PUSH ESI
// 0049a5ca: PUSH 0x1
// 0049a5cc: PUSH 0xc
// 0049a5ce: LEA EAX,[EBX + 0x18]
// 0049a5d1: PUSH EAX
// 0049a5d2: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0049a5d7: ADD ESP,0x10
// 0049a5da: PUSH ESI
// 0049a5db: PUSH 0x1
// 0049a5dd: PUSH 0x14
// 0049a5df: ADD EBX,0x24
// 0049a5e2: PUSH EBX
// 0049a5e3: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0049a5e8: ADD ESP,0x10
// 0049a5eb: POP ESI
// 0049a5ec: POP EBX
// 0049a5ed: RET
