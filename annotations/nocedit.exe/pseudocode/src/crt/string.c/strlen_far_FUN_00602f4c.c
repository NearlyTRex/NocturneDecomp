// Name: crt_string.c_strlen_far_FUN_00602f4c
// Address: 00602f4c
// Address Range: [[00602f4c, 00602f78]]
// Convention: __cdecl
// Signature: int crt_string.c_strlen_far_FUN_00602f4c(char * string_offset, ushort segment, int max_length)
// Cross-references:
//   crt_stdio.c_ConvertFormatSpec_FUN_00603238 (00603238) at 00603780 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl crt_string_c_strlen_far_FUN_00602f4c(char *string_offset,ushort segment,int max_length)

{
  char cVar1;
  int iVar2;
  
  for (iVar2 = 0;
      (cVar1 = *string_offset, string_offset = string_offset + 1, cVar1 != '\0' &&
      (iVar2 != max_length)); iVar2 = iVar2 + 1) {
  }
  return iVar2;
}


// Assembly code:
// 00602f4c: PUSH EBX
//   Label: crt_string.c_strlen_far_FUN_00602f4c
// 00602f4d: PUSH ESI
// 00602f4e: PUSH EDI
// 00602f4f: PUSH ES
// 00602f50: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00602f54: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00602f58: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00602f5c: MOV ES,DI
// 00602f5e: XOR EAX,EAX
// 00602f60: MOV EBX,EDX
//   Label: LAB_00602f60
// 00602f62: MOV CL,byte ptr ES:[EBX]
// 00602f65: INC EDX
// 00602f66: TEST CL,CL
// 00602f68: JZ 0x00602d72
//   XREF to: 00602d72 (CONDITIONAL_JUMP)
// 00602f6e: CMP EAX,ESI
// 00602f70: JZ 0x00602d72
//   XREF to: 00602d72 (CONDITIONAL_JUMP)
// 00602f76: INC EAX
// 00602f77: JMP 0x00602f60
//   XREF to: 00602f60 (UNCONDITIONAL_JUMP)
