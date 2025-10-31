// Name: crt_unknown.c_FUN_00603bc9
// Address: 00603bc9
// Address Range: [[00603bc9, 00603bf4]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00603bc9()
// Cross-references:
//   crt_unknown.c_staticInit_FUN_005fde60 (005fde60) at 005fde62 [DATA]
//   crt_unknown.c_staticInit_FUN_00603bb0 (00603bb0) at 00603bb6 [DATA]
// Function calls:
//   crt_string.c_strtod_main_FUN_00605d5d

#include "nocturne.h"

void crt_unknown_c_FUN_00603bc9(void)

{
  double dVar1;
  undefined4 *in_stack_00000008;
  char **in_stack_fffffff4;
  undefined4 local_8;
  
  dVar1 = crt_string_c_strtod_main_FUN_00605d5d((char *)0x0,in_stack_fffffff4);
  *in_stack_00000008 = SUB84(dVar1,0);
  local_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  in_stack_00000008[1] = local_8;
  return;
}


// Assembly code:
// 00603bc9: PUSH EBP
//   Label: crt_unknown.c_FUN_00603bc9
// 00603bca: MOV EBP,ESP
// 00603bcc: SUB ESP,0x8
// 00603bcf: PUSH 0x0
// 00603bd1: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00603bd4: PUSH EDX
// 00603bd5: CALL crt_string.c_strtod_main_FUN_00605d5d
//   XREF to: 00605d5d (UNCONDITIONAL_CALL)
// 00603bda: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00603bdd: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 00603be0: ADD ESP,0x8
// 00603be3: MOV EAX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00603be6: MOV EDX,dword ptr [EBP + -0x8]
//   XREF to: Stack[-0xc] (READ)
// 00603be9: MOV dword ptr [EAX],EDX
// 00603beb: MOV EDX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x8] (READ)
// 00603bee: MOV dword ptr [EAX + 0x4],EDX
// 00603bf1: MOV ESP,EBP
// 00603bf3: POP EBP
// 00603bf4: RET
