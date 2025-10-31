// Name: crt_stdio.c_fopen_FUN_00601a7c
// Address: 00601a7c
// Address Range: [[00601a7c, 00601a92]]
// Convention: __cdecl
// Signature: FILE * crt_stdio.c_fopen_FUN_00601a7c(char * filename, char * mode)
// Cross-references:
//   shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0 (0050fbc0) at 0050fcd1 [UNCONDITIONAL_CALL]
//   shape_memdbg.cpp_openFile_FUN_0050f7a0 (0050f7a0) at 0050f7e7 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fopenWithFlags_FUN_00601a20

#include "nocturne.h"

FILE * __cdecl crt_stdio_c_fopen_FUN_00601a7c(char *filename,char *mode)

{
  FILE *pFVar1;
  
  pFVar1 = crt_stdio_c_fopenWithFlags_FUN_00601a20(filename,mode,0);
  return pFVar1;
}


// Assembly code:
// 00601a7c: PUSH EBX
//   Label: crt_stdio.c_fopen_FUN_00601a7c
// 00601a7d: PUSH 0x0
// 00601a7f: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00601a83: PUSH EDX
// 00601a84: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00601a88: PUSH EBX
// 00601a89: CALL crt_stdio.c_fopenWithFlags_FUN_00601a20
//   XREF to: 00601a20 (UNCONDITIONAL_CALL)
// 00601a8e: ADD ESP,0xc
// 00601a91: POP EBX
// 00601a92: RET
