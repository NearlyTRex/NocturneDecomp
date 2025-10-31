// Name: crt_io.c_file_exists_FUN_0060f380
// Address: 0060f380
// Address Range: [[0060f380, 0060f399]]
// Convention: __watcallStack
// Signature: bool crt_io.c_file_exists_FUN_0060f380(char * filename)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f64a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_io.c_check_file_access_FUN_0060c9f0

#include "nocturne.h"

bool __watcallStack crt_io_c_file_exists_FUN_0060f380(char *filename)

{
  int iVar1;
  
  iVar1 = crt_io_c_check_file_access_FUN_0060c9f0(filename,0);
  return iVar1 == 0;
}


// Assembly code:
// 0060f380: PUSH 0x0
//   Label: crt_io.c_file_exists_FUN_0060f380
// 0060f382: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060f386: PUSH EDX
// 0060f387: CALL crt_io.c_check_file_access_FUN_0060c9f0
//   XREF to: 0060c9f0 (UNCONDITIONAL_CALL)
// 0060f38c: ADD ESP,0x8
// 0060f38f: TEST EAX,EAX
// 0060f391: SETZ AL
// 0060f394: AND EAX,0xff
// 0060f399: RET
