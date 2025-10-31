// Name: crt_process.c_spawnvp_FUN_0060ca20
// Address: 0060ca20
// Address Range: [[0060ca20, 0060ca42]]
// Convention: __watcallStack
// Signature: int crt_process.c_spawnvp_FUN_0060ca20(int mode, char * cmdname, char * * argv)
// Cross-references:
//   crt_process.c_spawnCommand_FUN_00609c90 (00609c90) at 00609ca0 [UNCONDITIONAL_CALL]
// Globals:
//   char** g_EnvironmentBlock
// Function calls:
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0

#include "nocturne.h"

int __watcallStack crt_process_c_spawnvp_FUN_0060ca20(int mode,char *cmdname,char **argv)

{
  int iVar1;
  
  iVar1 = crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(mode,cmdname,argv);
  return iVar1;
}


// Assembly code:
// 0060ca20: PUSH EBX
//   Label: crt_process.c_spawnvp_FUN_0060ca20
// 0060ca21: PUSH ESI
// 0060ca22: MOV EDX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060ca28: PUSH EDX
// 0060ca29: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0060ca2d: PUSH EBX
// 0060ca2e: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0060ca32: PUSH ECX
// 0060ca33: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060ca37: PUSH ESI
// 0060ca38: CALL crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
//   XREF to: 0060e6a0 (UNCONDITIONAL_CALL)
// 0060ca3d: ADD ESP,0x10
// 0060ca40: POP ESI
// 0060ca41: POP EBX
// 0060ca42: RET
