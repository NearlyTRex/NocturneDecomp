// Name: crt_process.c_execvp_FUN_00610790
// Address: 00610790
// Address Range: [[00610790, 006107b0]]
// Convention: __cdecl
// Signature: int crt_process.c_execvp_FUN_00610790(int argc, char * program, char * arg1, char * arg2, ...)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f804 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironmentBlock
// Function calls:
//   crt_process.c_spawnvp_FUN_0060f39c

#include "nocturne.h"

int __cdecl crt_process_c_execvp_FUN_00610790(int argc,char *program,char *arg1,char *arg2,...)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = crt_process_c_spawnvp_FUN_0060f39c(argc,program,&arg1);
  return iVar1;
}


// Assembly code:
// 00610790: PUSH EBX
//   Label: crt_process.c_execvp_FUN_00610790
// 00610791: MOV EDX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 00610797: PUSH EDX
// 00610798: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[0xc] (DATA)
// 0061079c: PUSH EAX
// 0061079d: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 006107a1: PUSH EBX
// 006107a2: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 006107a6: PUSH ECX
// 006107a7: CALL crt_process.c_spawnvp_FUN_0060f39c
//   XREF to: 0060f39c (UNCONDITIONAL_CALL)
// 006107ac: ADD ESP,0x10
// 006107af: POP EBX
// 006107b0: RET
