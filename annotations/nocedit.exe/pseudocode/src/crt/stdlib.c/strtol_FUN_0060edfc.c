// Name: crt_stdlib.c_strtol_FUN_0060edfc
// Address: 0060edfc
// Address Range: [[0060edfc, 0060ee17]]
// Convention: __cdecl
// Signature: long crt_stdlib.c_strtol_FUN_0060edfc(char * str, char * * endptr, int base)
// Cross-references:
//   crt_io.c_parseFileInfo_FUN_0060e3b0 (0060e3b0) at 0060e463 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdlib.c_strtol_internal_FUN_0060ec70

#include "nocturne.h"

long __cdecl crt_stdlib_c_strtol_FUN_0060edfc(char *str,char **endptr,int base)

{
  long lVar1;
  
  lVar1 = crt_stdlib_c_strtol_internal_FUN_0060ec70(str,endptr,base,1);
  return lVar1;
}


// Assembly code:
// 0060edfc: PUSH EBX
//   Label: crt_stdlib.c_strtol_FUN_0060edfc
// 0060edfd: PUSH 0x1
// 0060edff: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0060ee03: PUSH EDX
// 0060ee04: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0060ee08: PUSH EBX
// 0060ee09: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0060ee0d: PUSH ECX
// 0060ee0e: CALL crt_stdlib.c_strtol_internal_FUN_0060ec70
//   XREF to: 0060ec70 (UNCONDITIONAL_CALL)
// 0060ee13: ADD ESP,0x10
// 0060ee16: POP EBX
// 0060ee17: RET
