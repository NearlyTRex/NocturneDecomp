// Name: crt_process.c_spawnCommand_FUN_00609c90
// Address: 00609c90
// Address Range: [[00609c90, 00609ca9]]
// Convention: __watcallStack
// Signature: int crt_process.c_spawnCommand_FUN_00609c90(int mode, char * cmdPath, char * cmdName, char * args, void * envp, int * result)
// Cross-references:
//   crt_stdlib.c_system_FUN_00602130 (00602130) at 006021a0 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_process.c_spawnvp_FUN_0060ca20

#include "nocturne.h"

int __watcallStack
crt_process_c_spawnCommand_FUN_00609c90
          (int mode,char *cmdPath,char *cmdName,char *args,void *envp,int *result)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = crt_process_c_spawnvp_FUN_0060ca20(mode,cmdPath,&cmdName);
  return iVar1;
}


// Assembly code:
// 00609c90: PUSH EBX
//   Label: crt_process.c_spawnCommand_FUN_00609c90
// 00609c91: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[0xc] (DATA)
// 00609c95: PUSH EAX
// 00609c96: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00609c9a: PUSH EDX
// 00609c9b: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00609c9f: PUSH EBX
// 00609ca0: CALL crt_process.c_spawnvp_FUN_0060ca20
//   XREF to: 0060ca20 (UNCONDITIONAL_CALL)
// 00609ca5: ADD ESP,0xc
// 00609ca8: POP EBX
// 00609ca9: RET
