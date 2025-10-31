// Name: crt_stdlib.c_strtoul_FUN_0060ede0
// Address: 0060ede0
// Address Range: [[0060ede0, 0060edfb]]
// Convention: __cdecl
// Signature: ulong crt_stdlib.c_strtoul_FUN_0060ede0(char * str, char * * endptr, int base)
// Function calls:
//   crt_stdlib.c_strtol_internal_FUN_0060ec70

#include "nocturne.h"

ulong __cdecl crt_stdlib_c_strtoul_FUN_0060ede0(char *str,char **endptr,int base)

{
  ulong uVar1;
  
  uVar1 = crt_stdlib_c_strtol_internal_FUN_0060ec70(str,endptr,base,0);
  return uVar1;
}


// Assembly code:
// 0060ede0: PUSH EBX
//   Label: crt_stdlib.c_strtoul_FUN_0060ede0
// 0060ede1: PUSH 0x0
// 0060ede3: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060ede7: PUSH EDX
// 0060ede8: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060edec: PUSH EBX
// 0060eded: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060edf1: PUSH ECX
// 0060edf2: CALL crt_stdlib.c_strtol_internal_FUN_0060ec70
//   XREF to: 0060ec70 (UNCONDITIONAL_CALL)
// 0060edf7: ADD ESP,0x10
// 0060edfa: POP EBX
// 0060edfb: RET
