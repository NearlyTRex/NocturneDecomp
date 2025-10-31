// Name: crt_process.c_set_shell_execute_flag_FUN_00609c80
// Address: 00609c80
// Address Range: [[00609c80, 00609c8f]]
// Convention: __cdecl
// Signature: void crt_process.c_set_shell_execute_flag_FUN_00609c80(char * buffer)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f7d2 [UNCONDITIONAL_CALL]
//   crt_stdlib.c_system_FUN_00602130 (00602130) at 00602180 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl crt_process_c_set_shell_execute_flag_FUN_00609c80(char *buffer)

{
  *buffer = '/';
  buffer[1] = 'c';
  buffer[2] = '\0';
  return;
}


// Assembly code:
// 00609c80: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_process.c_set_shell_execute_flag_FUN_00609c80
//   XREF to: Stack[0x4] (READ)
// 00609c84: MOV byte ptr [EAX],0x2f
// 00609c87: MOV byte ptr [EAX + 0x1],0x63
// 00609c8b: MOV byte ptr [EAX + 0x2],0x0
// 00609c8f: RET
